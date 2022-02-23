// Implementing Merge Sort Algorithm

// Implementing Merge Sort Algorithm 
// Time Complexity -> O(logn)

#include<iostream>
using namespace std;


void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1;i++){

        a[i] = arr[l+i];

    }

    for(int i=0;i<n2;i++){
        b[i] = arr[mid+1+i];

    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }

        else{
            arr[k] = b[j];
            j++;
            k++;

        }
    }

    while(i<n1){
        arr[k] = a[i];
        i++;
        k++;

    }
      while(i<n2){
        arr[k] = b[j];
        j++;
        k++;
        
    }


}

void mergeSort(int arr[], int l , int r){

    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1,r);

        merge(arr,l, mid , r );
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

    mergeSort(myArr, 0, size-1);

    cout<<endl<<"The sorted Array is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<myArr[i]<<" ";

    }

    
}