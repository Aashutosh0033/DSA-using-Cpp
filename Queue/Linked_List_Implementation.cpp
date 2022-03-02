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
            Node *temp = NULL;

            if(isEmpty()){
                cout<<"Queue is Empty!"<<endl;
                return temp;
            }


            else if(front == rear){
                temp = front;
                front = NULL;
                rear = NULL;
                return temp;
            }

            else{
                temp = rear;
                rear = rear->next;
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