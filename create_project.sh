#! /bin/sh

project_name=$1

if [ -z "$project_name" ]
then
	echo "\$project_name is empty"
else
	mkdir $project_name
	cp ./template/compile.sh ./$project_name/compile.sh
	
	mkdir $project_name/src
	cp ./template/src/main.cpp ./$project_name/src/main.cpp	

	mkdir $project_name/.vscode
	cp ./template/.vscode/tasks.json ./$project_name/.vscode/tasks.json
fi
