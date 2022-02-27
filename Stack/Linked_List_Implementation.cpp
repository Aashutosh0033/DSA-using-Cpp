//Implementing Stack using Linked List

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


class Stack{

    public:
        Node *top;

    Stack(){
        top = NULL;
    }

        bool checkNodeExists(Node *n){
            Node *temp = top;
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
            if(top == NULL){
                return true;
            }

            else{
                return false;
            }
        }


        void push(Node *n){


            if(top == NULL){
                top = n;
            }


            else if(checkNodeExists(n)){
                cout<<"Node with key value "<<n->key<<" already exists. Enter different value."<<endl;
            }

            else{
                Node *temp = top;
                
                top = n;
                n->next = temp;
                cout<<"Node PUSHED SUCCESSFULLY!"<<endl;
            }
        }

        Node *pop(){
            Node *temp = NULL;

            if(isEmpty()){
                cout<<"Stack Underflow!"<<endl;
                return temp;
            }

            else{
                temp = top;
                top = top->next;
                return temp;

            }

        }

        Node* peek(){
            if(isEmpty()){
                return NULL;

            }

            else{
                return top;
            }
        }


        int count(){
            Node* temp = top;
            int count = 0;
            while(temp != NULL){
                count++;
                temp = temp->next;
            }

            return count;
        }


        void display(){
            

            if(isEmpty()){
                cout<<"Stack is Empty!"<<endl;
            }

            else{
                Node *temp = top;
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
    Stack s1;

    int option, key, val;

    do{
        cout<<"\n\n***Welcome to Stack Operations***"<<endl<<endl;
        cout<<"1.isEmpty()\n2.Push()\n3.Pop()\n4.Peek()\n5.Count()\n6.Display()\n7.Clear Screen"<<endl;
        cout<<"Choose your option. Press 0 to exit."<<endl;
        cout<<"Option:";
        cin>>option;

        Node *new_node = new Node();

        switch(option){
            case 0 : break;

            case 1 :
                if(s1.isEmpty()){
                    cout<<"Stack is Empty!"<<endl;
                    
                }
                else{
                    cout<<"Stack is not Empty"<<endl;
                    
                }

                break;
                
            case 2 :
                cout<<"Enter the key and value of Node to push in the Stack"<<endl;
                cout<<"Key : ";
                cin>>key;
                cout<<"Value : ";
                cin>>val;
                new_node->key = key;
                new_node->val = val;
                s1.push(new_node);
                break;

            case 3 : 
                new_node  = s1.pop();
                cout<<"The Popped Node is : "<<"Key->"<<new_node->key<<" Value->"<<new_node->val<<endl;
                delete new_node;
                break;

            case 4 :
                new_node = s1.peek();
                if(new_node==NULL){
                    cout<<"Stack is Empty"<<endl;
                }
                else{
                    cout<<"The top node is : ";
                    cout<<"Key->"<<new_node->key<<" Value=>"<<new_node->val<<endl;
                }
                break;
                

            case 5 :
                cout<<"There are "<<s1.count()<<" nodes in the stack"<<endl;
                break;

            case 6 : 
                s1.display();
                break;

            case 7 : 
                system("cls");
                break;

        }
    }while(option!=0);

    
return 0;
}