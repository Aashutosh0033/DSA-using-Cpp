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



