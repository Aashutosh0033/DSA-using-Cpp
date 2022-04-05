# Time Complexity

*Time Complexity is time taken by an Alogorithm as a function of length of input. Time Complexity is most commonly expressed using Big O notation. It is a type of Asymptotic Notation used to describe the worst time complexity of a given algorithm. In coding problems we usually find the worst time complexity to execute the code.* 
<br>
<br>
Time Complexity is most commonly estimated by counting the elementary steps performed by any algorithm to complete the execution.<br>
<br>
For Ex.<br>
Observe the code below<br>
```C++
for(int i=0, i<n,i++){
    //code
}
```

The above code has n number of steps in it to complete the execution of the code. So its time complexity will directly be proportional to n.<br>
<br>
<br>

**Big O Notation** : This is an asymptotic notation used to measure the worst case time complexity of a given algorithm. <br>
<br>
Note : Big O noatation considers only the upper bound of the equation and it ignores the lower bounds and constants of the equation.<br>
<br>
<br>

**Order of Growth** : *constant* < *loglog(n)* < *log(n)* < *n^1/3* < *n^1/2* < *n* < *n^2* < *n^3* < *2^n* < *n!* < *n^n* <br>
<br>
<br> 

**10^8 Operations Rule** : <br> 

Length (n)  | Time Complexity
------------- | -------------
<= [10...11]  | O(n!) , O(n^6)
<=[15...18]  | O(2^n * n^2)
< 100  | O(n^4)
< 400 | O(n^3)
< 2000  | O(n^2 * log(n))
< 10^4  | O(n^2)
< 10^6  | O(n * log(n))
< 10^8  | O(n) , O(log(n))



<br> 
<br> 
<br>

# Space Complexity

*Space complexity is the amount of memory used by the algorithm (including the input values to the algorithm) to execute and produce the result.*<br>
<br>
Sometime Auxiliary Space is confused with Space Complexity. But Auxiliary Space is the extra space or the temporary space used by the algorithm during it's execution.
Space Complexity = Auxiliary Space + Input space <br> 
<br> 
Most primitive (Booleans & Numbers) take up O(1) / Constant space <br> 
Strings, Arrays & Objects take up O(n) / Linear space <br>
<br> 
<br> 
<br> 







