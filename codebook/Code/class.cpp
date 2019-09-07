#include <bits/stdc++.h>
using namespace std;

template <class T>
class OBJ{
	public:
		OBJ(T d){
			data = d;
		}
		T getdata(){return data;}
	private:
		T data;
};

int main(){
	OBJ <int> intOBJ(1);
	cout << intOBJ.getdata() << endl;
	
	system("pause");
	return 0;
}