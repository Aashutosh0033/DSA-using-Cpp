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



