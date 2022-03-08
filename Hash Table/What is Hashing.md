### Hashing
<br>
A Hash table is a data structure that stores some information, and the information has basically two main components, i.e., key and value. The hash table can be implemented with the help of an associative array.
<br>
Hashing is a technique or process of mapping keys, values into the hash table by using a hash function. It is done for faster access to elements. The efficiency of mapping depends on the efficiency of the hash function used.<br><br>
Hashing is one of the searching techniques that uses a constant time. The time complexity in hashing is O(1). Till now, we read the two techniques for searching, i.e., linear search and binary search. The worst time complexity in linear search is O(n), and O(logn) in binary search. In both the searching techniques, the searching depends upon the number of elements but we want the technique that takes a constant time. So, hashing technique came that provides a constant time.<br><br>
In Hashing technique, the hash table and hash function are used. Using the hash function, we can calculate the address at which the value can be stored.

![hash-table](https://user-images.githubusercontent.com/83531337/157171845-bd8e9231-1b3c-45ea-9ffc-c43f466f21a1.png)

**There are three ways of implementing Hash Functions :**<br>
1. Division Method 
2. Folding Method 
3. Mid Square Method
<br><br>

In Division Method, the hash function can be defined as : <br>
**h(ki) = ki % m**<br>
where **m** is the size of the hash table.<br>
<br><br>

**Collision :**<br>
When the two different values have the same value, then the problem occurs between the two values, known as a collision. To resolve these collisions, we have some techniques known as collision techniques.<br>
<br>
The following are the collision techniques:<br><br>

1.Open Hashing: It is also known as closed addressing.<br>
2.Closed Hashing: It is also known as open addressing.<br>
<br>
*Open Hashing*<br>
In Open Hashing, one of the methods used to resolve the collision is known as a chaining method.

![hash-table2](https://user-images.githubusercontent.com/83531337/157205642-b9b9c897-81bd-4961-bc39-6a1444a728ce.png)

*Closed Hashing :*<br>
In Closed hashing, three techniques are used to resolve the collision:<br>

1.Linear probing<br>
2.Quadratic probing<br>
3.Double Hashing technique<br><br>








