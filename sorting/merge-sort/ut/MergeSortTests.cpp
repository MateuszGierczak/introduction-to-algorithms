#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>
#include "merge_sort.hpp"

using namespace ::testing;

TEST(MergeSortTests, shouldMergeSortedSubArrays)
{
    std::vector<int> vec {2, 4, 5, 7, 1, 2, 3, 6};
    merge_guards(vec, 0, 3, 7);
    EXPECT_THAT(vec, ElementsAre(1, 2, 2, 3, 4, 5, 6, 7));
}
