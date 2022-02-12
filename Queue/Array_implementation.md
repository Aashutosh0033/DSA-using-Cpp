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
                rear = -1;
                front = -1;
            }

            else{
                cout<<"The dequeued value is "<<arr[front]<<endl;
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
                for(int i = front;i<=rear;i++){
                cout<<arr[i]<<endl;
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
            
            case 1: cout<<"Enter the value to be pushed"<<endl;
                    cin>>value;
                    q.enqueue(value);
                    break;
            
            case 2: q.dequeue();
                    break;

            case 3: if(q.isEmpty()){
                    cout<<"Stack is Empty"<<endl;
                    }

                    else{
                        cout<<"Stack is not empty"<<endl;
                    }
                    break;

            case 4: if(q.isFull()){
                    cout<<"Stack is Full"<<endl;
                    }
                    else{
                        cout<<"Stack is not Full"<<endl;
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
