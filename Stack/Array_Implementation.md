### Implementing Stack using Arrays

```C++
#include<iostream>
using namespace std;

class Stack{
    private:
        int top, n;
        int arr[5];
    
    public:
        Stack(int size){
            n = size;
            top = -1;
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



int main(){

 
 int option1,option2,position,value, size;


//***Menu Driven Program***

 
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
            
            case 2: cout<<"The popped value is "<<s.pop()<<endl;
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