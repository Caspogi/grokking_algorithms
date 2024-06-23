#include "algorithms.hpp"

template<typename T>
int binarySearch(T&& container, auto item)
{
    int low = 0, high = container.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (container[mid] == item)
            return mid;
        if (container[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}


