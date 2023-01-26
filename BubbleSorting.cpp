/*Bubble Sorting
- compares each pair of adjacent items and swaps them if they are in the wrong order
- time complexity of O(n^2)
- not efficient for large data sets */

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int n = 8;
    int myArr[n] = {100, 1, -4, 10982, 4, 55, 91,89};

    cout<<"\nArray before sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<myArr[i]<<" ";
    }
    bubbleSort(myArr, n);
    cout << "\n\nArray after sorting: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<myArr[i]<< " ";
    }
    cout<<endl;

    return 0;
}
