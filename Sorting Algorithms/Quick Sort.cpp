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