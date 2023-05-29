#pragma once

template<typename T>
int binarySearch(const std::vector<T>& vec, int low, int high, T target)
{
    int mid = (high + low)/2;

    if(high - low < 0)
        return -1;
    
    if(vec[mid] == target)
        return mid;
    
    if(target < vec[mid])
        return binarySearch(vec, low, mid, target);
    else
        return binarySearch(vec, mid + 1, high, target);
}