# Queue

Queue is a linear data structure which operates on FIFO (First in Fist Out) or LILO (Last in Last Out) pattern
It is an ADT (Abstract Data type).
Some real life example of queue is people on an escalator.<br/><br/>


![queue](https://user-images.githubusercontent.com/83531337/157178300-a79365cf-7cee-4600-a41e-40ef8e234277.jpg)


**Applications of Queue :**<br/>
->Managing requests on a single shared resource such as CPU scheduling and disk scheduling.<br/>
->Handling website traffic.<br/>
->Maintaining the playlist in media players.<br/>
->Call center phone calls<br/><br/>


**Standart Queue functions**<br/>
*enqueue()* - Adds an element to end of queue.<br/>
*dequeue()* - removing an element from the front of the queue and returning it.<br/>
*ifEmpty()* - checks if the queue is empty or not.<br/>
*isFull()* - checks if the queue of full or not.<br/>
*peek()* -  access the element at i th position.<br/>
*count()* - counts the number of elements in queue.<br/><br/>


**Types pf Queues in Data Structures :**<br/>
->Simple Queue<br/>
->Circular Queue<br/>
->Priority Queue<br/>
->Dequeue (Double Ended Queue)<br/><br/>





*Circular Queue :* A circular queue is the extended version of simple queue where the last element is connected to the first element. Thus forming a circle-like structure. The circular queue solves the major limitation of normal queue. In a normal queue, after a bit insertion and deletion there will be non-usable space. But the circular queue makes use of this non-usable space to enque new elements.
<br/>
![circular-increment](https://user-images.githubusercontent.com/83531337/157182794-c20a45ef-7f76-490e-bab9-4db0510a03c0.jpg)


*Priority Queue :* A priority queue is a special type of queue in which each element is associated with a priority value. And, elements are served on the basis of their priority. That is, higher priority elements are served first. However, if elements with the same priority occur, they are served according to their order in the queue.
<br/>
![Introduction](https://user-images.githubusercontent.com/83531337/157182822-eebdf7f8-b0f4-4b1b-8b96-b3f72c5a9af3.jpg)

*Deque :* Deque or Double Ended Queue is a type of queue in which insertion and removal of elements can either be performed from the front or the rear. Thus, it does not follow FIFO rule (First In First Out).<br/>
![deque](https://user-images.githubusercontent.com/83531337/157182815-41965ff3-360c-48ed-a667-6d1c70d93c67.jpg)

Types of Deque:

*Input Restricted Deque :*
In this deque, input is restricted at a single end but allows deletion at both the ends.

*Output Restricted Deque :*
In this deque, output is restricted at a single end but allows insertion at both the ends.

<br>
<br>
<br>

## Implementation Code

[Normal Queue](https://github.com/Aashutosh0033/DSA-using-Cpp/edit/main/Queue/Normal_Queue.cpp)<br>
[Circular Queue](https://github.com/Aashutosh0033/DSA-using-Cpp/edit/main/Queue/Circular_Queue.cpp)<br>
[Normal Queue using Linked List](https://github.com/Aashutosh0033/DSA-using-Cpp/edit/main/Queue/Normal_Queue_LL.cpp)<br>
[Circular Queue using Linked List](https://github.com/Aashutosh0033/DSA-using-Cpp/edit/main/Queue/Circular_Queue_LL.cpp)<br>


<br>

## YouTube References

[Normal Queue](https://www.youtube.com/watch?v=wqKdRQ9nWvs&list=PLIY8eNdw5tW_zX3OCzX7NJ8bL1p6pWfgG&index=8)<br>
[Circular Queue](https://www.youtube.com/watch?v=KSvMGwc9dN8&list=PLIY8eNdw5tW_zX3OCzX7NJ8bL1p6pWfgG&index=9)<br>
[Normal Queue using Linked List](https://www.youtube.com/watch?v=a5k5dLk-650&list=PLIY8eNdw5tW_zX3OCzX7NJ8bL1p6pWfgG&index=63)<br>
[Circular Queue using Linked List](https://www.youtube.com/watch?v=HsJc7a6NoTE&list=PLIY8eNdw5tW_zX3OCzX7NJ8bL1p6pWfgG&index=64)<br>





