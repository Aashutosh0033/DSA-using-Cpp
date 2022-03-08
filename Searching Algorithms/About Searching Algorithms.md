## Searching Algorithms
<br> 

Searching algorithms are designed to check for an element or retrieve an element from any data structure where it is stored. Based on the type of search operation, these operations are generally classified into two categories : <br>


**->Sequential Search**<br>
**->Interval Search** 

*Sequential Search* : In this , the list or array is traversed sequentially and every element is checked. For example Linear Search. <br>

*Interval Search* : These algorithms are specificaly designed for searching in the sorted data-structures. These types of searching algorithmns are much more efficient than linear searches, they repeatedly target the center of the search. For example : Binary Search. <br><br>

### Binary Search :
Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). The basic steps to perform Binary Search are:<br>

Begin with an interval covering the whole array. <br>
If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. <br>
Otherwise, narrow it to the upper half. <br>
Repeatedly check until the value is found or the interval is empty.<br>

