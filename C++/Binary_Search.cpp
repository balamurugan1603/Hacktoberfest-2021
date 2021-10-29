//This program implements Binary Search for a Sorted Array using the iterative approach

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        //Check and return location of element, if found
        if (arr[mid] == element)
        {
            return mid;
        }

        //Ignoring left half if element is greater
        if (arr[mid] < element)
        {
            low = mid + 1;
        }

        //Ignoring right half if element is smaller
        else
        {
            high = mid - 1;
        }
    }
    //Returns -1 if element is not present
    return -1;
}

int main()
{
    int arr[] = {0, 1, 5, 15, 20, 60, 128, 240, 480}; //Taking a test case
    int size = sizeof(arr) / sizeof(int);
    int element = 128;
    int searchIndex = BinarySearch(arr, size, element);
    cout << "The element " << element << " was found at index " << searchIndex << endl;
    return 0;
}
