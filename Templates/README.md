# Templates

## What are Templates?
Templates are very simple and powerful tool in C++. The idea behind using it is to pass data types as parameters so we don't need to write code for different data types. Declaring different classes for every other data types violates the very first rule of C++ 'DRY' (Do not Repeat Yourself) and on the other hand doesn't completely utilize the true potentials of C++. <br>
<br>

**Generic Programming** :
This technique is termed as Generic Programming, because we declare a generic template at once. It becomes general and works all along for all the data types. 
<br>
<br>

## Syntax
Let's understand the syntax to declare a template.<br>

1. First declare a template of class and pass a variable T as its paramter.<br>
2. Define a class of your choice and replace all the data types with the parameter T of templates. The data types of the class becomes of the type we pass in the template.<br>
<br>

For Ex: <br>
```C++
#include <iostream>
using namespace std;
 
template <class T>
class vector {
    T *arr;
    int size;
    public:
        vector(T* arr)[
            //code
        ]
        //and many other methods
    
};
 
int main() {
    vector<int> myVec1();
    vector<float> myVec2();
    return 0;
}
```
<br>

