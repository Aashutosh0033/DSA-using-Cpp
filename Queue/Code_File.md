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


### Implementing Normal Queue using Linked List

```C++

//Implementing Normal Queue using Linked List

#include<iostream>
using namespace std;

class Node{
    public:
        int  val,key;
        Node *next;

        Node(){
            key = 0;
            val = 0;
            next = NULL;
           
        }

        Node(int k,int v){
            key = k;
            val = v;
            next = NULL;
        }


};


class Queue{

    public:
        Node *front;
        Node* rear;

    Queue(){
        front = NULL;
        rear = NULL;
    }

        bool checkNodeExists(Node *n){
            Node *temp = rear;
            int check = 0;
            while(temp != NULL){
                if(temp->key == n->key){
                    check = 1;
                    break;
                }

                else{
                    temp = temp->next;
                }
            }

            if(check == 1){
                return true;
            }

            else{
                return false;
            }

        }


        bool isEmpty(){
            if(front == NULL){
                return true;
            }

            else{
                return false;
            }
        }


        void enqueue(Node *n){


            if(front == NULL){
                front = n;
                rear = n;
            }


            else if(checkNodeExists(n)){
                cout<<"Node with key value "<<n->key<<" already exists. Enter different value."<<endl;
            }

            else{
                Node *temp = rear;
                
                rear = n;
                n->next = temp;
                cout<<"Node ENQUEUED SUCCESSFULLY!"<<endl;
            }
        }

        Node *dequeue(){
            Node *current = NULL;
            Node* temp;

            if(isEmpty()){
                cout<<"Queue is Empty!"<<endl;
                return current;
            }


            else if(front == rear){
                current = front;
                front = NULL;
                rear = NULL;
                return current;
            }

            else{
                current = rear;
                do{
                    current = current->next;
                }while(current->next!=front);

                temp = front;
                front = current;
                front->next = NULL;

                return temp;
            }

        }

        Node* peek(){
            if(isEmpty()){
                return NULL;

            }

            else{
                return rear;
            }
        }


        int count(){
            Node* temp = rear;
            int count = 0;
            while(temp != NULL){
                count++;
                temp = temp->next;
            }

            return count;
        }


        void display(){
            

            if(isEmpty()){
                cout<<"Queue is Empty!"<<endl;
            }

            else{
                Node *temp = rear;
                cout<<"The nodes are..."<<endl;
                cout<<"(Key-Value)->"<<endl;

                while(temp!= NULL){
                    
                    cout<<"("<<temp->key<<"-"<<temp->val<<")->";
                    temp = temp->next;

                }
                
            }
            
        }

};




int main(){
    Queue q1;

    int option, key, val;

    do{
        cout<<"\n\n***Welcome to Queue Operations***\n***First in First Out***"<<endl<<endl;
        cout<<"1.isEmpty()\n2.enqueue()\n3.dequeue()\n4.Peek()\n5.Count()\n6.Display()\n7.Clear Screen"<<endl;
        cout<<"Choose your option. Press 0 to exit."<<endl;
        cout<<"Option:";
        cin>>option;

        Node *new_node = new Node();

        switch(option){
            case 0 : break;

            case 1 :
                if(q1.isEmpty()){
                    cout<<"Queue is Empty!"<<endl;
                    
                }
                else{
                    cout<<"Queue is not Empty"<<endl;
                    
                }

                break;
                
            case 2 :
                cout<<"Enter the key and value of Node to enqueue in the queue"<<endl;
                cout<<"Key : ";
                cin>>key;
                cout<<"Value : ";
                cin>>val;
                new_node->key = key;
                new_node->val = val;
                q1.enqueue(new_node);
                break;

            case 3 : 
                new_node  = q1.dequeue();
                if(new_node == NULL){
                    break;
                }

                else{
                    cout<<"The dequeued Node is : "<<"Key->"<<new_node->key<<" Value->"<<new_node->val<<endl;
                    delete new_node;
                    break;
                }
                

            case 4 :
                new_node = q1.peek();
                if(new_node==NULL){
                    cout<<"Queue is Empty"<<endl;
                }
                else{
                    cout<<"The rear node is : ";
                    cout<<"Key->"<<new_node->key<<" Value=>"<<new_node->val<<endl;
                }
                break;
                

            case 5 :
                cout<<"There are "<<q1.count()<<" nodes in the queue"<<endl;
                break;

            case 6 : 
                q1.display();
                break;

            case 7 : 
                system("cls");
                break;

        }
    }while(option!=0);
return 0;
}

```


### Implementing Circular Queue using Linked List

```C++

//Implementing Circular Queue using Linked List

#include<iostream>
using namespace std;

class Node{
    public:
        int  val,key;
        Node *next;

        Node(){
            key = 0;
            val = 0;
            next = NULL;
           
        }

        Node(int k,int v){
            key = k;
            val = v;
            next = NULL;
        }


};


class Queue{

    public:
        Node *front;
        Node* rear;

    Queue(){
        front = NULL;
        rear = NULL;
    }

        bool checkNodeExists(Node *n){
            Node *temp = rear;
            int check = 0;
            do{
                if(temp->key == n->key){
                    check = 1;
                    break;
                }

                else{
                    temp = temp->next;
                }
            }while(temp != rear);

            if(check == 1){
                return true;
            }

            else{
                return false;
            }

        }


        bool isEmpty(){
            if(front == NULL){
                return true;
            }

            else{
                return false;
            }
        }


        void enqueue(Node *n){


            if(front == NULL){
                front = n;
                rear = n;
                front->next = rear;
            }


            else if(checkNodeExists(n)){
                cout<<"Node with key value "<<n->key<<" already exists. Enter different value."<<endl;
            }

            else{
                Node *temp = rear;
                
                rear = n;
                n->next = temp;
                front->next = rear;
                cout<<"Node ENQUEUED SUCCESSFULLY!"<<endl;
            }
        }

        Node *dequeue(){
            Node *current = NULL;
            Node* temp;

            if(isEmpty()){
                cout<<"Queue is Empty!"<<endl;
                return current;
            }


            else if(front == rear){
                current = front;
                front = NULL;
                rear = NULL;
                return current;
            }


            else{
                current = rear;
                do{
                    current = current->next;
                }while(current->next!=front);

                temp = front;
                front = current;
                front->next = rear;

                return temp;
            }

            

        }

        Node* peek(){
            if(isEmpty()){
                return NULL;

            }

            else{
                return front;
            }
        }


        int count(){
            Node* temp = rear;
            if(temp == NULL){
                return 0;
            }
            else{
                int count = 0;
                do{
                    count++;
                    temp = temp->next;
                }while(temp != rear);

                return count;
            }
            
        }


        void display(){
            

            if(isEmpty()){
                cout<<"Queue is Empty!"<<endl;
            }

            else{
                Node *temp = rear;
                cout<<"The address of rear queue is "<<rear<<endl;
                cout<<"The nodes are..."<<endl;
                cout<<"(Key-Value)->"<<endl;

                do{
                    
                    cout<<"("<<temp->key<<"-"<<temp->val<<"-"<<temp->next<<")->";
                    temp = temp->next;

                }while(temp!= rear);
                
            }
            
        }

};




int main(){
    Queue q1;

    int option, key, val;

    do{
        cout<<"\n\n***Welcome to Circular Queue Operations***"<<endl<<endl;
        cout<<"1.isEmpty()\n2.enqueue()\n3.dequeue()\n4.Peek()\n5.Count()\n6.Display()\n7.Clear Screen"<<endl;
        cout<<"Choose your option. Press 0 to exit."<<endl;
        cout<<"Option:";
        cin>>option;

        Node *new_node = new Node();

        switch(option){
            case 0 : break;

            case 1 :
                if(q1.isEmpty()){
                    cout<<"Queue is Empty!"<<endl;
                    
                }
                else{
                    cout<<"Queue is not Empty"<<endl;
                    
                }

                break;
                
            case 2 :
                cout<<"Enter the key and value of Node to enqueue in the queue"<<endl;
                cout<<"Key : ";
                cin>>key;
                cout<<"Value : ";
                cin>>val;
                new_node->key = key;
                new_node->val = val;
                q1.enqueue(new_node);
                break;

            case 3 : 
                new_node  = q1.dequeue();
                if(new_node == NULL){
                    break;
                }

                else{
                    cout<<"The dequeued Node is : "<<"Key->"<<new_node->key<<" Value->"<<new_node->val<<endl;
                    delete new_node;
                    break;
                }
                

            case 4 :
                new_node = q1.peek();
                if(new_node==NULL){
                    cout<<"Queue is Empty"<<endl;
                }
                else{
                    cout<<"The front node is : ";
                    cout<<"Key->"<<new_node->key<<" Value=>"<<new_node->val<<endl;
                }
                break;
                

            case 5 :
                cout<<"There are "<<q1.count()<<" nodes in the queue"<<endl;
                break;

            case 6 : 
                q1.display();
                break;

            case 7 : 
                system("cls");
                break;

        }
    }while(option!=0);
return 0;
}

```

