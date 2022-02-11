// Implementing Stack using Arrays 

#include<iostream>
using namespace std;

class Stack{
    private:
        int top;
        int arr[5];
    
    public:
        Stack(){
            top = -1;
            for(int i=0;i<5;i++){
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
        if(top == 4){
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

    int pop(){
        if(isEmpty()){
            cout<<"Stack Underflow!"<<endl;
            return 0;

        }
        else{
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }

    int count(){
        return (top+1);
    }

    int peek(int pos){
        if(isEmpty()){
            cout<<"Stack Underflow!"<<endl;
            return 0;
        }
        else{
            return arr[pos];
        }
    }

    void change(int pos, int val){
        arr[pos] = val;
        cout<<"Value at position "<<pos<<" updated successfully"<<endl;

    }

    void display(){
        cout<<"All values in the stack are: "<<endl;
        for(int i=4; i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }
            

};



int main(){

 Stack s;
 int option,position,value;


//***Menu Driven Program***

 do{
     cout<<"\n\n***Welcome to the implementation of Stack***"<<endl<<endl;
     cout<<"Which operation do you want to perform? Select the correct option. Press 0 to Exit"<<endl;
     cout<<"1. push()\n2. pop()\n3. isEmpty()\n4. isFull()\n5. peek()\n6. count()\n7. change()\n8. display()\n9.Clear Screen\n"<<endl;
     cout<<"Option: ";
     cin>>option;
     switch(option){

         case 0: break;
        
        case 1: cout<<"Enter the value to be pushed"<<endl;
                cin>>value;
                s.push(value);
                break;
        
        case 2: cout<<"The popped value is "<<s.pop()<<endl;

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
                cout<<"The value at position "<<position<<" is "<<s.peek(position);
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
                 
     }

 }while(option!=0);

return 0;
}









