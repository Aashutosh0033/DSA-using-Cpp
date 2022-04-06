# Searching Algorithms
<br> 

Searching algorithms are designed to check for an element or retrieve an element from any data structure where it is stored. Based on the type of search operation, these operations are generally classified into two categories : <br>


**->Sequential Search**<br>
**->Interval Search** 

*Sequential Search* : In this , the list or array is traversed sequentially and every element is checked. For example Linear Search. <br>

*Interval Search* : These algorithms are specificaly designed for searching in the sorted data-structures. These types of searching algorithmns are much more efficient than linear searches, they repeatedly target the center of the search. For example : Binary Search. <br><br>


## Linear Search : 
Linear Search Algorithm basically traverse through the whole data structure linearly to search the key. Due to this the time complexity of this algorithm is directly proportional to the length of the data structure.<br><br>
![download (1)](https://user-images.githubusercontent.com/83531337/157194898-721de505-e483-487e-a117-167a711497f6.jpg)


## Binary Search :
Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). The basic steps to perform Binary Search are:<br>

Begin with an interval covering the whole array. <br>
If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. <br>
Otherwise, narrow it to the upper half. <br>
Repeatedly check until the value is found or the interval is empty.<br>

![BinarySearch](https://user-images.githubusercontent.com/83531337/157194799-5dfbe2a9-3ccb-45f2-b2dd-fb1f187fcab0.png)

<br><br>

## Implementation Code

[Linear Search]()<br>
[Binary Search]()<br>
[Depth First Search]()<br>
[Breadth First Search]()<br>


