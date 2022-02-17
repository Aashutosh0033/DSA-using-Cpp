//Linear Search Algorithm.
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