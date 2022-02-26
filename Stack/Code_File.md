### Implementing Stack using Arrays

```C++
#include<iostream>
using namespace std;

int arr[5];

class Stack{
    private:
        int top, n;
        
        
    
    public:
        Stack(int size){
            n = size;
            top = -1;
            arr[n];
            
            for(int i=0;i<n;i++){
                arr[i] = 0;
            }
        }


    //***All Stack Operations***

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
             return false;
            }
    }

    bool isFull(){
        if(top == (n-1)){
            return true;
        }
        else{
            return false;
        }

    }

    void push(int val){
        if(isFull()){
            cout<<"Stack Overflow!"<<endl;
        }
        else{
            top++;
            arr[top] = val;
            cout<<"Element successfully pushed onto stack"<<endl;
        }

    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack Underflow!"<<endl;
            

        }
        else{
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            cout<<"The popped value is "<<popvalue;
        }
    }

    int count(){
        return (top+1);
    }

    void peek(int pos){
        if(isEmpty()){
            cout<<"Stack Underflow!"<<endl;
            
        }
        else{

            if(pos>(n-1)){
                cout<<"Position value out of index"<<endl;
            }
            else{
                cout<<"The value at position "<<pos<<" is "<<arr[pos]<<endl;
            }
        }
    }

    void change(int pos, int val){
        if(isEmpty()){
            cout<<"Stack is Empty cannot change any element"<<endl;
        }

        else{
            if(pos>(n-1)){
                cout<<"Position value out of index"<<endl;
            }

            else{
                arr[pos] = val;
                cout<<"Value at position "<<pos<<" updated successfully"<<endl;
            }
            

        }
        

    }

    void display(){
        cout<<"All values in the stack are: "<<endl;
        for(int i=(n-1); i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }
            

};


//***Menu Driven Program***


int main(){
 
 int option1,option2,position,value, size;


     cout<<"\n\n***Welcome to the implementation of Stack***"<<endl<<endl;

     cout<<"1. Enter the size of Stack\n2. Exit"<<endl;
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
    
    Stack s(size);

    do{
        
        cout<<"\n\nWhich operation do you want to perform? Select the correct option. Press 0 to Exit"<<endl;
        cout<<"1. push()\n2. pop()\n3. isEmpty()\n4. isFull()\n5. peek()\n6. count()\n7. change()\n8. display()\n9.Clear Screen\n"<<endl;
        cout<<"Option: ";
        cin>>option2;
        switch(option2){

            case 0: break;
            
            case 1: cout<<"Enter the value to be pushed"<<endl;
                    cin>>value;
                    s.push(value);
                    break;
            
            case 2: s.pop();
                    break;

            case 3: if(s.isEmpty()){
                    cout<<"Stack is Empty"<<endl;
                    }

                    else{
                        cout<<"Stack is not empty"<<endl;
                    }
                    break;

            case 4: if(s.isFull()){
                    cout<<"Stack is Full"<<endl;
                    }
                    else{
                        cout<<"Stack is not Full"<<endl;
                    }
                    break;

            case 6: cout<<"There are "<<s.count()<<" elements in the stack"<<endl;
                    break;

            case 5: cout<<"Enter the position of the element to be printed"<<endl;
                    cin>>position;
                    s.peek(position);
                    break;
            
            case 7: cout<<"Enter the position of the value to be changed and the new value"<<endl;
                    cout<<"Position: ";
                    cin>>position;
                    cout<<"New value: ";
                    cin>>value;
                    s.change(position,value);
                    break;

            case 8: s.display();
                    break;

            case 9: system("cls");
                    break;

            default : cout<<"Enter correct option"<<endl;
                    break;
                    
     }

}while(option2!=0);

return 0;
}

```


### Linked List Implementation

```C++

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

```

 

        
