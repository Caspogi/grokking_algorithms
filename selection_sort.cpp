#include "algorithms.hpp"
#include  <vector>

using std::vector;

template<typename T>
int findSmallest(T&& arr)
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

    }
    return smallest_index;
}

template<typename T>
void selectionSort(T&& arr)
{
    auto newArr = arr;
    int n = newArr.size();
    int smallest = -1;

    for (int i = 0; i < n; i++)
    {
        smallest = findSmallest(arr);
        newArr[i] = arr[smallest];
        arr.erase((arr.begin() + smallest));
    }
    arr = newArr;
}
