#! /bin/sh

cmake .
make

echo "Running random integer utility tests..."
./utils/random_integer/test/random_integer_test

echo "Running section 6 tests..."
./section6-challenge/test/test_estimation_tool