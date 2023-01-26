/*Insertion sorting
 - time complexity of O(n^2)
 - efficient for small data sets or for data sets that are already mostly sorted,
    but it is less efficient than other sorting algorithms for large data sets.*/

#include <iostream>
using namespace std;

void insertionSorting(int arr[], int n)
{
   int j, current;
   for (int i = 1; i < n; i++)
   {
       current = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > current)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = current;
   }
}

int main() {

    int myArr[7]={1,6,34,2,6,89,-3};
    int myArrLength=7;

    insertionSorting(myArr,myArrLength);

    for(int i=0; i<myArrLength;i++)
    {
        cout<<myArr[i]<<" ";
    }

return 0;
}
