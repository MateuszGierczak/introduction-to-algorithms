#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "binary_search.hpp"

TEST(BinarySearchTests, shouldFindValueInSortedContainer)
{
    std::vector<int> vec {1, 2, 4, 5, 9, 11};
    auto valueToFind {9};
    auto expectedIndex {4};
    auto index = binarySearch(vec, valueToFind);
    EXPECT_EQ(index, expectedIndex);
}