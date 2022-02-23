### Selection Sort

```C++

//Implementing Selection Sort
//Time Complexity ->)O(n^2)


#include<iostream>
using namespace std;


void selectionSort(int arr[], int n){
    int min, swap;

    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                 swap = arr[i];
                 arr[i] = arr[j];
                 arr[j] = swap;
            }
        }

    }
       
    cout<<endl<<"Sorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
        

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements in unsorted manner in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The unsorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
    selectionSort(arr, n);
    

return 0;
}

```


### Insertion Sort


```C++

//Implementing Insertion Sort
//Time Complexity ->)O(n^2)


#include<iostream>
using namespace std;


void insertionSort(int arr[], int n){
    int current, j;

    for(int i=1;i<n;i++){
        current = arr[i];
        j = i-1;

        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = current;
        
    }
    

    cout<<endl<<"Sorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
        

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements in unsorted manner in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The unsorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
    insertionSort(arr, n);
    

return 0;
}

```


### Bubble Sort


```C++

//Implementing Bubble Sort
//Time Complexity ->)O(n^2)


#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n){
    int counter = 1;
    int swap;

    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i+1]<arr[i]){
                swap = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = swap;
            }
        }
        counter++;
    }

    cout<<endl<<"Sorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
        

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements in unsorted manner in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The unsorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
    bubbleSort(arr, n);
    

return 0;
}

```

### Optimised Bubble Sort


```C++

//Implementing Optimised Bubble Sort
//Time Complexity -> O(n^2)


#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n){
    int counter = 1;
    int swap;
    bool flag;

    while(counter<n){
        flag = false;   
        for(int i=0;i<n-counter;i++){
            if(arr[i+1]<arr[i]){
                flag = true;
                swap = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = swap;
            }
        }

        if(flag == false){
            break;
        }
        counter++;
    }

    cout<<endl<<"Sorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
        

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements in unsorted manner in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The unsorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
    bubbleSort(arr, n);
    

return 0;
}

```


### Quick Sort 

```C++

//Implementing Quick Sort
//Time Complexity -> θ(nlog(n))

#include<iostream>
using namespace std;


int Partition(int arr[], int s, int e){
    int pivot = arr[e];
    int pIndex = s;
    int i=s;
    int j = e;
    while(i<j){
        if(arr[i]<pivot){
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
            
        }

        i++;

    }

    int temp = arr[pIndex];
    arr[pIndex] = arr[e];
    arr[e] = temp;
    return pIndex;
}

void Quicksort(int arr[], int s, int e){
    
    if(s<e){
        int p = Partition(arr,s,e);
        Quicksort(arr,s,p-1);
        Quicksort(arr,p+1,e);
    }
}



int main(){

    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int myArr[size];
    cout<<"Enter the elements in unsorted manner"<<endl;
    for(int i=0;i<size;i++){
        cin>>myArr[i];
    }


    cout<<"The unsorted Array is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<myArr[i]<<" ";

    }

    Quicksort(myArr, 0, size-1);

    cout<<endl<<"The sorted Array is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<myArr[i]<<" ";

    }

return 0;
}

```













