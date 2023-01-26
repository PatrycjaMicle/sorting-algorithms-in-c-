/*quickSort
- time complexity of O(n log n)
- In practice, quicksort is a very fast sorting algorithm and is often used in real-world applications. However, it is not a stable sorting algorithm, which means that elements with equal values may not retain their relative order in the sorted array.
*/

#include <iostream>
using namespace std;

// function which divides array into halves
int arrayParts(int arr[], int low, int high) {
    int pivot = arr[high]; /*selects the last element of the array as the pivot element. The pivot element is used as a reference point to partition the array into two sub-arrays: one with elements that are less than the pivot, and one with elements that are greater than the pivot*/
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]); //swaping this to elements , changing place
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) /*checks if the low index is less than the high index, if so it calls the partition function and recursively calls the quickSort function for the left and right parts.*/
{
    if (low < high) {
        int pivot = arrayParts(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main() {

    int n =8;
    int myArr[n] = { 88, 3, 15, 9, 1, 55,9,6526 };

    cout<<"\nArray before sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<myArr[i]<<" ";
    }
    quickSort(myArr, 0, n-1);

    cout<<"\n\nArray after sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<myArr[i]<<" ";
    }
    cout<<endl;

    return 0;

}
