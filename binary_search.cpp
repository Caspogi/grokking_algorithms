#include "algorithms.hpp"

template<typename T>
int binarySearch(T&& conteiner, auto item)
{
    int low = 0, high = conteiner.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (conteiner[mid] == item)
            return mid;
        if (conteiner[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
