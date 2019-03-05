#! /bin/sh

compile_file=$1
output_file=$2

if [ -z "$compile_file" ] || [ -z "$output_file" ]
then
	echo "\$compile_file or \$output_file is empty"
else
	echo "compiling..."
	g++ -Wall -std=c++14 $compile_file -o $output_file
	compilation_status=$?

	OPTIND=3
	while getopts "r" VALUE "$@" ; do
		flag=$VALUE
		if [ "$flag" == "r" ] && [ $compilation_status == 0 ]; then
			echo "running ..."
			./$output_file
			run_status=$?
		fi
	done
fi

echo "\n"
echo "compilation exit code: $compilation_status"
if [[ $run_status ]]; then
	echo "run exit code: $run_status"
fi
