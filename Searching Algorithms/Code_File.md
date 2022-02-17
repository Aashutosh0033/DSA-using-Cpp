### Linear Search Algorithm

```C++

/Linear Search Algorithm.
//Time Complexity -> O(n) where n is the size of the data structure.


#include<iostream>
using namespace std;



int linearSearch(int arr[], int n , int k){
    for( int i=0;i<n;i++){
        if(arr[i] == k){
            return i;

        }
    }
    return -1;
}


int main(){

    int n; 
    cout<<"Enter the size of the Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your Array elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int key;
    cout<<endl<<"Enter the element you want to search : ";
    cin>>key;

    int a = linearSearch(arr, n , key);

    if(a == -1){
        cout<<"Element not found!"<<endl;
    }
    else{
        cout<<"The Element->"<<key<<" is at the index no. "<<a<<" in the array."<<endl;
    }

return 0;
}

```

### Binary Search Algorithm

```C++

//Binary Search Algorithm
//Time Complexity -> O(logn) where n is the size of the data structure.


#include<iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int k){
    
    
    while(left<=right){
        
        int mid = left + (right-left)/2;
        if(k == arr[mid]){
        
        return  mid;
        }

        else if(k < arr[mid] ){
            right = mid-1;
            
        }

        else{
            left = mid+1;


        }
    }

    return -1;

    
}



int main(){
    int n; 
    cout<<"Enter the size of the Array :";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements in Ascending order in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int key;
    cout<<endl<<"Enter the element you want to search : ";
    cin>>key;

    int a = binarySearch(arr , 0 , n-1, key);

    if( a == -1){
        cout<<"Element not found!"<<endl;
    }

    else{
        cout<<"Element->"<<key<<" found at index no. "<<a<<endl;
    }

return 0;
}

```
