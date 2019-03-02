#! /bin/sh

build_file=$1
output_file=$2

g++ -Wall -std=c++14 $build_file -o $output_file
echo "Built $build_file output as $output_file"

OPTIND=3
while getopts "r" VALUE "$@" ; do
	flag=$VALUE
	if [ "$flag" = "r"  ] ; then
		echo "running ..."
		./$output_file
	fi
done
exit $?
