#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <unordered_set> 
#include <algorithm>
#include <map>
#include <unordered_map> 
#include <cstdlib>
#include <ctime>
using namespace std;

vector<string> getFILE(const string &cmd, const string &file_type){
	system(cmd.c_str());
	ifstream fin("temp.txt");
	vector<string> data;
	for(string str; getline(fin, str);){
		if(str.find(file_type) != -1){
			stringstream ss(str);
			string dir;
			for(int i = 0; i < 5; ++i)
				ss >> dir;
			if(dir != "." && dir != ".."){
				data.push_back(dir);
			}
		}
	}
	fin.close();
	system("DEL temp.txt");
	return data;
}

void makeTEX(const set<string> &s, vector<string> &v, map<string, string> &m){
	string filename = "Problems.tex";
	ifstream plate("plateBook.tex");
	ofstream fout(filename);
	fout << "\\title{Programming Problems}" << endl;
	
	string line;
	unordered_map<string, vector<string> > output;
	set<string> appear;
	while(getline(plate, line)){
		if(line == ""){
			for(int i = 0; i < v.size(); ++i){
				for(int j = 0; j < v[i].length(); ++j){
					v[i][j] = v[i][j] == '\\' ? '/' : v[i][j];
				}
				stringstream subss(v[i]);
				string sub[2];
				getline(subss, sub[0], '/');
				getline(subss, sub[1], '/');
				if(!appear.count(sub[0])){
					appear.insert(sub[0]);
					cout << m[sub[0]] << endl;
					fout << "\\chapter{" << m[sub[0]] << "}" << endl;
				}
				if(!appear.count(sub[1])){
					appear.insert(sub[1]);
					cout << m[sub[1]] << endl;
					fout << "\\section{" << m[sub[1]] << "}" << endl;
				}
				cout << v[i] << endl;
				fout << "\\input{" << v[i] << "}" << endl;
			}
		} 
		else
			fout << line << endl;
	}
	plate.close();
	fout.close();
}

void mapping(map<string, string> &m){
	ifstream fin("map.txt");
	string key, value;
	while(fin >> key){
		fin.ignore();
		getline(fin, value);
		m[key] = value;
	}
}

void shuffle(vector<string> &v){
	int times = v.size();
	while(times--){
		swap(v[rand() % v.size()], v[rand() % v.size()]);
	}
}

int main(int argc, char **argv){
	srand(time(NULL));
	vector<string> floor = getFILE("DIR > temp.txt", "DIR");
	vector<string> target;
	map<string, string> Table;
	mapping(Table);
	set<string> section;
	
	{
		for(int i = 0; i < floor.size(); ++i){
			if(!section.count(floor[i])){
				section.insert(floor[i]);
			}
		}
	}
	{
		vector<string> newFloor;
		for(int i = 0; i < floor.size(); ++i){
			string cmd = string("DIR ") + floor[i] + string(" > temp.txt");
			vector<string> nextFloor = getFILE(cmd, "DIR");
			for(int j = 0; j < nextFloor.size(); ++j){
				newFloor.push_back(floor[i] + "\\" + nextFloor[j]);
			}
		}
		floor = newFloor;
	}
	
	{
		for(int i = 0; i < floor.size(); ++i){
			vector<string> files;
			string cmd = string("DIR ") + floor[i] + string(" > temp.txt");
			files = getFILE(cmd, ".tex");
			
			unordered_set<string> except;
			ifstream fin("exceptBook.txt");
			string str;
			while(getline(fin, str)){
				except.insert(str);
			}
			
			for(auto it : files){
				if(except.count(floor[i]+"\\"+it))continue;
				target.push_back(floor[i]+"\\"+it);
			}
		}
	}
	
	makeTEX(section, target, Table);
	return 0;
}
