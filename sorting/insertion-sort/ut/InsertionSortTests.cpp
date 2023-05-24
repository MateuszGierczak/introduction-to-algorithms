#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "insertion_sort.hpp"

using namespace ::testing;

TEST(InsertionSortTest, shouldSortInAscendingOrder)
{
    std::vector<int> vec {5, 2, 4, 6, 1, 3};
    insertionSort(vec);
    EXPECT_THAT(vec, ElementsAre(1, 2, 3, 4, 5, 6));
}