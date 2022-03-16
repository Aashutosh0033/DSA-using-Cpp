### Hashing
<br>
A Hash table is a data structure that stores some information, and the information has basically two main components, i.e., key and value. The hash table can be implemented with the help of an associative array.
<br>
Hashing is a technique or process of mapping keys, values into the hash table by using a hash function. It is done for faster access to elements. The efficiency of mapping depends on the efficiency of the hash function used.<br><br>
Hashing is one of the searching techniques that uses a constant time. The time complexity in hashing is O(1). Till now, we read the two techniques for searching, i.e., linear search and binary search. The worst time complexity in linear search is O(n), and O(logn) in binary search. In both the searching techniques, the searching depends upon the number of elements but we want the technique that takes a constant time. So, hashing technique came that provides a constant time.<br><br>
<<<<<<< HEAD
In Hashing technique, the hash table and hash function are used. Using the hash function, we can calculate the address at which the value can be stored.
=======
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
When the two different values have the same hash key, then the problem occurs between the two values, known as a collision. To resolve these collisions, we have some techniques known as collision techniques.<br>
<br>
The following are the collision techniques:<br>

1.Open Hashing: It is also known as closed addressing.<br>
2.Closed Hashing: It is also known as open addressing.<br>
<br>
*Open Hashing :*<br><br>
In Open Hashing, one of the methods used to resolve the collision is known as a chaining method.

![hash-table2](https://user-images.githubusercontent.com/83531337/157205642-b9b9c897-81bd-4961-bc39-6a1444a728ce.png)

*Closed Hashing :*<br><br>
In Closed hashing, three techniques are used to resolve the collision:<br>
1.Linear probing<br>
2.Quadratic probing<br>
3.Double Hashing technique<br><br>
Linear : Linear probing is one of the forms of open addressing. As we know that each cell in the hash table contains a key-value pair, so when the collision occurs by mapping a new key to the cell already occupied by another key, then linear probing technique searches for the closest free locations and adds a new key to that empty cell. In this case, searching is performed sequentially, starting from the position where the collision occurs till the empty cell is not found.<br><br>
Quadratic Pronbing : In case of linear probing, searching is performed linearly. In contrast, quadratic probing is an open addressing technique that uses quadratic polynomial for searching until a empty slot is found. It can also be defined as that it allows the insertion ki at first free location from (u+i^2)%m where i=0 to m-1.<br><br>
Double Hashing : Double hashing is an open addressing technique which is used to avoid the collisions. When the collision occurs then this technique uses the secondary hash of the key. It uses one hash value as an index to move forward until the empty location is found.<br>
In double hashing, two hash functions are used. Suppose h1(k) is one of the hash functions used to calculate the locations whereas h2(k) is another hash function. It can be defined as "insert ki at first free place from (u+v*i)%m where i=(0 to m-1)". In this case, u is the location computed using the hash function and v is equal to (h2(k)%m).









>>>>>>> bad21a3ec8dc333f9461d133650f7862527ca17c
