### Queue

Queue is a linear data structure which operates on FIFO (First in Fist Out) or LILO (Last in Last Out) pattern
It is an ADT (Abstract Data type).
Some real life example of queue is people on an escalator.<br/><br/>


**Applications of Queue :**<br/>
->Managing requests on a single shared resource such as CPU scheduling and disk scheduling.<br/>
->Handling website traffic.<br/>
->Maintaining the playlist in media players.<br/>
->Call center phone calls<br/><br/>


**Standart Queue functions**<br/>
enqueue() - Adds an element to end of queue.<br/>
dequeue() - removing an element from the front of the queue and returning it.<br/>
ifEmpty() - checks if the queue is empty or not.<br/>
isFull() - checks if the queue of full or not.<br/>
peek() -  access the element at i th position.<br/>
count() - counts the number of elements in queue.<br/><br/>


**Types pf Queues in Data Structures :**<br/>
->Simple Queue<br/>
->Circular Queue<br/>
->Priority Queue<br/>
->Dequeue (Double Ended Queue)<br/><br/>



**Circular Queue :** A circular queue is the extended version of simple queue where the last element is connected to the first element. Thus forming a circle-like structure. The circular queue solves the major limitation of normal queue. In a normal queue, after a bit insertion and deletion there will be non-usable space. But the circular queue makes use of this non-usable space to enque new elements.
<br/>

**Priority Queue :** A priority queue is a special type of queue in which each element is associated with a priority value. And, elements are served on the basis of their priority. That is, higher priority elements are served first. However, if elements with the same priority occur, they are served according to their order in the queue.
<br/>

**Deque :** Deque or Double Ended Queue is a type of queue in which insertion and removal of elements can either be performed from the front or the rear. Thus, it does not follow FIFO rule (First In First Out).<br/>

Types of Deque:

Input Restricted Deque :
In this deque, input is restricted at a single end but allows deletion at both the ends.

Output Restricted Deque :
In this deque, output is restricted at a single end but allows insertion at both the ends.





