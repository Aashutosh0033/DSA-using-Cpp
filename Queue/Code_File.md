### Queue Implementation using Arrray


```C++ 
//Implementing Queue using Array

#include<iostream>
using namespace std;

int arr[5];

class Queue{
    int rear, front, n;
    public:
        Queue(int size){
            n = size;
            rear = -1;
            front = -1;

            for(int i=0;i<n;i++){
                arr[i] = 0;
            }
            

        }

        //Standard Queue operations
        bool isEmpty(){
            if(rear == -1 && front == -1){
                return true;
            }
            else{
                return false;
            }
        }


       
        bool isFull(){
            if(rear == (n-1) && front == 0){
                return true;
            }
            else{
                return false;
            }

        }


        
        void enqueue(int val){
            if(isFull()){
                cout<<"The Queue is full, cannot insert the value."<<endl;
            }

            else if(isEmpty()){
                rear = 0 ;
                front = 0;
            }

            else{
                rear ++;
            }

            arr[rear] = val;
                
        }



        void dequeue(){
            if(isEmpty()){
                cout<<"The Queue is empty, nothing to dequeue."<<endl;
            }

            else if(rear == front){
                cout<<"The dequeued value is "<<arr[front]<<endl;
                arr[front] = 0;
                rear = -1;
                front = -1;
            }

            else{
                cout<<"The dequeued value is "<<arr[front]<<endl;
                arr[front] = 0;
                front++;
            }
        }


        void count(){
            cout<<"There are "<<(rear-front)+1<<" elements in the queue."<<endl;
        }


        void display(){

            if(isEmpty()){
                cout<<"The Queue is Empty"<<endl;
            }

            else{
                cout<<"The elements in the Queue are: "<<endl;
                for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            }
           
        }
};



//Menu Driven Program
int main(){
    int option1,option2,position,value,size;

    cout<<"\n\n***Welcome to the implementation of Queue***"<<endl<<endl;

     cout<<"1. Enter the size of Queue\n2. Exit"<<endl;
     cout<<"Option: ";
     cin>>option1;

     switch (option1)
     {
     case 1:cout<<"Size: ";
            cin>>size;
            system("cls");
            break;

    case 2: system("cls");
            break;
     
     default: cout<<"Enter correct option"<<endl;
              break;
     }
    
    Queue q(size);

    do{

        
        
        cout<<"\n\nWhich operation do you want to perform? Select the correct option. Press 0 to Exit"<<endl;
        cout<<"1. enqueue()\n2. dequeue()\n3. isEmpty()\n4. isFull()\n5. count()\n6. display()\n7. Clear Screen\n"<<endl;
        cout<<"Option: ";
        cin>>option2;
        switch(option2){

            case 0: break;
            
            case 1: cout<<"Enter the value to be enqueued"<<endl;
                    cin>>value;
                    q.enqueue(value);
                    break;
            
            case 2: q.dequeue();
                    break;

            case 3: if(q.isEmpty()){
                    cout<<"Queue is Empty"<<endl;
                    }

                    else{
                        cout<<"Queue is not empty"<<endl;
                    }
                    break;

            case 4: if(q.isFull()){
                    cout<<"Queue is Full"<<endl;
                    }
                    else{
                        cout<<"Queue is not Full"<<endl;
                    }
                    break;

            case 5: q.count();
                    break;

            case 6: q.display();
                    break;
            
            case 7: system("cls");
                    break;

            default : cout<<"Enter correct option"<<endl;
                    break;
                    
     }

}while(option2!=0);

return 0;
}
    
```


### Circular Queue Implementation using Arrays

```C++
//Implementing Circular Queue using Array

#include<iostream>
using namespace std;

int arr[5];

class Queue{
    int rear, front, n;
    public:
        Queue(int size){
            n = size;
            rear = -1;
            front = -1;

            for(int i=0;i<n;i++){
                arr[i] = 0;
            }
            

        }

        //Standard Circular Queue operations
        bool isEmpty(){
            if(rear == -1 && front == -1){
                return true;
            }
            else{
                return false;
            }
        }


       
        bool isFull(){
            if((rear+1)%n == front){
                return true;
            }
            else{
                return false;
            }

        }


        
        void enqueue(int val){
            if(isFull()){
                cout<<"The Queue is full, cannot insert the value."<<endl;
            }

            else if(isEmpty()){
                rear = 0 ;
                front = 0;
            }

            else{
                rear = (rear+1)%n;
            }

            arr[rear] = val;
                
        }



        void dequeue(){
            if(isEmpty()){
                cout<<"The Queue is empty, nothing to dequeue."<<endl;
            }

            else if(rear == front){
                cout<<"The dequeued value is "<<arr[front]<<endl;
                arr[front] = 0;
                rear = -1;
                front = -1;
            }

            else{
                cout<<"The dequeued value is "<<arr[front]<<endl;
                arr[front] = 0;
                front = (front+1)%n;
            }
        }


        void count(){

            if(rear>front){
                cout<<"There are "<<(rear-front)+1<<" elements in the queue."<<endl;
            }
            else if(isEmpty()){
                cout<<"The Queue is Empty"<<endl;
            }

            else{
                cout<<"There are "<<(rear+front)<<" elements in the queue."<<endl;
            }

        }


        void display(){
            cout<<"The elements in the Queue are: "<<endl;
            for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
            }
            
        }

            
           
        
};



//Menu Driven Program
int main(){
    int option1,option2,position,value,size;

    cout<<"\n\n***Welcome to the implementation of Circular Queue***"<<endl<<endl;

     cout<<"1. Enter the size of Queue\n2. Exit"<<endl;
     cout<<"Option: ";
     cin>>option1;

     switch (option1)
     {
     case 1:cout<<"Size: ";
            cin>>size;
            system("cls");
            break;

    case 2: system("cls");
            break;
     
     default: cout<<"Enter correct option"<<endl;
              break;
     }
    
    Queue q(size);

    do{

        
        
        cout<<"\n\nWhich operation do you want to perform? Select the correct option. Press 0 to Exit"<<endl;
        cout<<"1. enqueue()\n2. dequeue()\n3. isEmpty()\n4. isFull()\n5. count()\n6. display()\n7. Clear Screen\n"<<endl;
        cout<<"Option: ";
        cin>>option2;
        switch(option2){

            case 0: break;
            
            case 1: cout<<"Enter the value to be enqueued"<<endl;
                    cin>>value;
                    q.enqueue(value);
                    break;
            
            case 2: q.dequeue();
                    break;

            case 3: if(q.isEmpty()){
                    cout<<"Queue is Empty"<<endl;
                    }

                    else{
                        cout<<"Queue is not empty"<<endl;
                    }
                    break;

            case 4: if(q.isFull()){
                    cout<<"Queue is Full"<<endl;
                    }
                    else{
                        cout<<"Queue is not Full"<<endl;
                    }
                    break;

            case 5: q.count();
                    break;

            case 6: q.display();
                    break;
            
            case 7: system("cls");
                    break;

            default : cout<<"Enter correct option"<<endl;
                    break;
                    
     }

}while(option2!=0);

return 0;
}
    
```
