//Implementing Insertion Sort
//Time Complexoty ->)O(n^2)


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



