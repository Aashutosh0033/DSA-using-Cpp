## What are Algorithms?
<br><br>
An Algorithm is a sequence of steps that describe how a problem can be solved. Every computer program that ends with a result is basically based on an Algorithm. Algorithms, however, are not just confined for use in computer programs; these can also be used to solve mathematical problems and on many matters of day-to-day life<br><br>
Based on how they function, we can divide Algorithms into multiple types. Let’s take a look at some of the important ones...
<br><br>

### 1. Recursive Algorithm
This is one of the most interesting Algorithms as it calls itself with a smaller value as inputs which it gets after solving for the current inputs. In more simpler words, It’s an Algorithm that calls itself repeatedly until the problem is solved.

Problems such as the Tower of Hanoi or DFS of a Graph can be easily solved by using these Algorithms.<br><br>

### 2. Divide and Conquer Algorithm
This is another effective way of solving many problems. In Divide and Conquer algorithms, divide the algorithm into two parts; the first parts divide the problem on hand into smaller subproblems of the same type. Then, in the second part, these smaller problems are solved and then added together (combined) to produce the problem’s final solution.<br>
Binary Search, Merge sorting, and quick sorting can be done with divide and conquer algorithms.<br><br>


### 3. Dynamic Programming Algorithm
These algorithms work by remembering the results of the past run and using them to find new results. In other words, a dynamic programming algorithm solves complex problems by breaking them into multiple simple subproblems and then it solves each of them once and then stores them for future use.

Fibonacci sequence is a good example for Dynamic Programming algorithms.<br><br>

### 4. Greedy Algorithm
These algorithms are used for solving optimization problems. In this algorithm, we find a locally optimum solution (without any regard for any consequence in future) and hope to find the optimal solution at the global level.

The method does not guarantee that we will be able to find an optimal solution.

The algorithm has 5 components:

The first one is a candidate set from which we try to find a solution.
A selection function that helps choose the best possible candidate.
A feasibility function that helps in deciding if the candidate can be used to find a solution.
An objective function that assigns value to a possible solution or to a partial solution
Solution function that tells when we have found a solution to the problem.
Huffman Coding and Dijkstra’s algorithm are two prime examples where the Greedy algorithm is used.<br><br>

### 5. Brute Force Algorithm
This is one of the simplest algorithms in the concept. A brute force algorithm blindly iterates all possible solutions to search one or more than one solution that may solve a function. Think of brute force as using all possible combinations of numbers to open a safe.<br><br>

### 6. Backtracking Algorithm
Backtracking is a technique to find a solution to a problem in an incremental approach. It solves problems recursively and tries to solve a problem by solving one piece of the problem at a time. If one of the solutions fail, we remove it and backtrack to find another solution.

In other words, a backtracking algorithm solves a subproblem, and if it fails to solve the problem, it undoes the last step and starts again to find the solution to the problem.

N Queens problem is one good example to see Backtracking algorithm in action.

