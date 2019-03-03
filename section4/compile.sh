#! /bin/sh

compile_file=$1
output_file=$2

g++ -Wall -std=c++14 $compile_file -o $output_file
echo "Compiled $compile_file output as $output_file"

OPTIND=3
while getopts "r" VALUE "$@" ; do
	flag=$VALUE
	if [ "$flag" = "r"  ] ; then
		echo "running ..."
		./$output_file
	fi
done
exit $?
