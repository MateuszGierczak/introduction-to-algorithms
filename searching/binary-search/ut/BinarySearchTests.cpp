#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "binary_search.hpp"

TEST(BinarySearchTests, shouldFindValueInSortedContainer)
{
    std::vector<int> vec {1, 2, 4, 5, 9, 11};
    auto valueToFind {9};
    auto expectedIndex {4};
    auto index = binarySearch(vec, 0, std::size(vec) -1, valueToFind);
    EXPECT_EQ(index, expectedIndex);
}

TEST(BinarySearchTests, shouldFindValueInSortedContainer2)
{
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    auto valueToFind {1};
    auto expectedIndex {0};
    auto index = binarySearch(vec, 0, std::size(vec) -1, valueToFind);
    EXPECT_EQ(index, expectedIndex);
}