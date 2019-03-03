#! /bin/sh

project_name=$1

if [ -z "$project_name" ]
then
	echo "\$project_name is empty"
else
	
	mkdir -p $project_name/src
	cp ./template/compile.sh ./$project_name/compile.sh
	cp ./template/src/main.cpp ./$project_name/src/main.cpp	
fi
