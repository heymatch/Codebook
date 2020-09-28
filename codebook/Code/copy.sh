#	copy template file
#!bin/bash
for name in {A..M};
do
	cp template.cpp $name.cpp
	echo 0 > $name.in
	echo 0 > $name.out
done
