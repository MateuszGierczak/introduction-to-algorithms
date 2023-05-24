#pragma once

template<typename Range>
void insertionSort(Range& range)
{
    for(int j = 1; j < std::size(range); ++j)
    {
        auto key = range[j];
        auto i = j - 1;

        while(i >= 0 and range[i] > key)
        {
            range[i + 1] = range[i];
            i--;
        }
        range[i + 1] = key;
    }
}