#pragma once

#include <limits>

void merge_guards(std::vector<int>& vec, int p, int q, int r)
{
    auto leftSize = q - p + 1;
    auto rightSize = r - q;

    std::vector<int> left(leftSize + 1);
    std::vector<int> right(rightSize + 1);

    for(auto i = 0; i < leftSize; ++i)
        left[i] = vec[i + p];
    
    for(auto i = 0; i < rightSize; ++i)
        right[i] = vec[i + q + 1];

    left[leftSize] = std::numeric_limits<int>::max();
    right[leftSize] = std::numeric_limits<int>::max();

    auto i = 0;
    auto j = 0;

    for(int k = p; k <= r; ++k)
    {
        if(left[i] <= right[j])
        {
            vec[k] = left[i];
            i++;
        }
        else
        {
            vec[k] = right[j];
            j++;
        }
    }
}