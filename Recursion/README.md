# Recursion

*A function that calls itself is known as a recursive function. And, this technique is known as recursion.*
<br>
<br>
<br>
### Working of Recursion
```C++
void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}
```

![cpp-function-recursion-working](https://user-images.githubusercontent.com/83531337/162492546-01704bdb-fd41-479b-b0e9-e927229c78af.jpg)

The recursion continues until some condition is met, that condition is known as Base Condiion. The base condition returns a value which is then used by the remaining recursive calls.<br>
If the Base condition is not present in the recursive function, then there is a Stack Overflow condition.
<br>
<br>
Example for Recursion : <br>
```C++
// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

//Output
//Enter a non-negative number : 4
// Factorial of 4 = 24
```

<br>
<br>

### Working of Factorial Program
![cpp-function-recursion-example](https://user-images.githubusercontent.com/83531337/162493361-b9ba4c49-0ecd-4d3f-bd2a-8f73436b5ab8.jpg)

<br>
<br>

### Parts of Recursion

* Base Condition
* Processing
* Recursive Relation

**Based on the position of the part inside the function Recursion is classified into two parts : 

<details>
    <summary>Tail Recursion</summary>
    <p>
        In Tail Recursion the Recursive relation Part is at the end of the Function.<br>
        Base Condition<br>
        Processing<br>
        Recursive Relation<br>
    </p>
</details>






      
