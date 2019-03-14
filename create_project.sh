#! /bin/sh

project_name=$1

if [ -z "$project_name" ]
then
	echo "\$project_name is empty"
else
	mkdir $project_name
	cp -r ./template/. ./$project_name
fi
