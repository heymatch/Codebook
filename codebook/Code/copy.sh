#copy template file
#!bin/bash
for name in {A..M};
do
	cp template.cpp $name.cpp
done
