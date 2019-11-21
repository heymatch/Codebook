#	shell script to compile program and execute
#	sh compile.sh $filename 
#!/bin/bash
g++ -Wall -O2 -std=c++17 -static -pipe -o $1 $1.cpp && ./$1 < $1.in > $1.out
wait
cat ./$1.out
