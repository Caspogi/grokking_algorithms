#include "algorithms.hpp"

template<typename T>
auto findSmallest(T&& arr)
{
    auto smallest = arr[0];
    int smallest_index = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
    return smallest_index;
    }
}

