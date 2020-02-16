#! /bin/sh

# want a folder structure that looks like
#   /root
#       /courses
#           /beginning-cpp
#       /tools
#           /googletest

cd /root
mkdir tools
mkdir courses

cd courses
mkdir beginning-cpp
cd beginning-cpp
mv /root/project .