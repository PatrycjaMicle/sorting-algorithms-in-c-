# Sorting algorithms in c++

## Insertion sort

 - repeatedly takes the next unsorted element and inserts it into its correct position among the sorted elements
 - time complexity of O(n^2)
 - efficient for small data sets or for data sets that are already mostly sorted
 - less efficient than other sorting algorithms for large data sets

## Bubble sort

 - compares each pair of adjacent items and swaps them if they are in the wrong order
 - time complexity of O(n^2)
 - not efficient for large data sets

## Quicksort 

 - divides array into halves
 - time complexity of O(n log n)
 - In practice, quicksort is a very fast sorting algorithm
 - not a stable sorting algorithm - elements with equal  values may not retain their relative order in the sorted array


 COMMENT  	I built the algorithm from 2 separate functions, one dividing the array and next sorting. 
		You can see the exact code in quickSort.cpp  file. 
		Explanations are added as a comments.


## Used technologies

C++
