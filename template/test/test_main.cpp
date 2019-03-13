#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/print.h"

#define SIZEOF_ARRAY(a) (sizeof(a) / sizeof(a[0]))

TEST (PrettyPrintTest, PrintZero) {
    int test_array[1] {0};
    EXPECT_EQ ("[ 0 ]", pretty_print(test_array, 1));
}

TEST (PrettyPrintTest, PrintZeroAndOne) {
    int test_array[2] {0, 1};
    EXPECT_EQ ("[ 0 1 ]", pretty_print(test_array, 2));
}

TEST (ApplyAllTest, GivenTwoArraysWithValueZero_ResultIsArrayWithValueZero) {
    int test_array1[1] = {0};
    int test_array2[1] = {0};
    int result_array[1] = {0};
    EXPECT_EQ(*result_array, *(apply_all(test_array1, 
                                      SIZEOF_ARRAY(test_array1), 
                                      test_array2, 
                                      SIZEOF_ARRAY(test_array2))));
}

TEST (ApplyAllTest, GivenSingleAndMultipleValueArrays_ResultIsVectorDirectProduct) {
    int test_array1[2] = {0, 1};
    int test_array2[1] = {1};
    int result_array[2] = {0, 1};
    int *actual {apply_all(test_array1, SIZEOF_ARRAY(test_array1), test_array2, SIZEOF_ARRAY(test_array1))};
    EXPECT_TRUE(0 == std::memcmp(actual, result_array, sizeof(result_array)));
}

TEST (ApplyAllTest, GivenTwoMultipleValueArrays_ResultIsVectorDirectProduct) {
    int test_array1[2] = {0, 1};
    int test_array2[2] = {1, 2};
    int result_array[4] = {0, 1, 0, 2};
    int *actual {apply_all(test_array1, SIZEOF_ARRAY(test_array1), test_array2, SIZEOF_ARRAY(test_array1))};
    EXPECT_TRUE(0 == std::memcmp(actual, result_array, sizeof(result_array)));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}