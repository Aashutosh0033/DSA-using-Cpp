//  Implementing Circular Linked List

#include<iostream>
using namespace std;


class Node{
    public:
        int key, val;
        Node *next;

        Node(){
            key = 0;
            val = 0;
            next  = NULL;
        }

        Node(int k, int v){
            key = k;
            val = v;
        }
    
};
    

class circularLinkedList{
    public:
        Node *head;
        circularLinkedList(){
            head = NULL;
        }

        circularLinkedList(Node *n){
            head = n;
        }


//***Standard Linked List Functions***


// 1. Check is the node exists using key value
        Node* nodeExists(int k){
            Node* temp = NULL;
            Node* ptr = head;

            if(ptr == NULL){
                    return temp;
            }
            else{
                do{
                    if(ptr == NULL){
                        return temp;
                    }
                    else{
                        if(ptr->key==k){
                            temp = ptr;
                        }
                        ptr = ptr->next;
                    }
                }while(ptr!=head);

                return temp;
            }
        }

// 2. Append a node at the end of the list

        void appendNode(Node* n){
            if(nodeExists(n->key)!=NULL){
                cout<<"Node already exits with key value "<<n->key<<". Append anotehr node with different Key value"<<endl;

            }

            else{
                if(head == NULL){
                    head = n;
                    n->next = head;
                    cout<<"Node appended"<<endl;
                }

                else{
                    Node* ptr = head;
                    do{
                        ptr = ptr->next;
                    }while(ptr->next!=head);

                    ptr->next = n;
                    n->next = head;
                    cout<<"Node appended"<<endl;
                }
            }
        }

//3. Prepend Node at the start of the list
        void prependNode(Node* n){
            if(nodeExists(n->key)!=NULL){
                cout<<"Node already exits with key value "<<n->key<<". Append anotehr node with different Key value"<<endl;

            }

            else{

                if(head == NULL){
                    head = n;
                    n->next = head;
                    cout<<"Node Prepended"<<endl;
                }
                else{
                    Node *ptr = head;

                    while(ptr->next!=head){
                        ptr = ptr->next;
                    }
                    n->next = head;
                    ptr->next = n;
                    head = n;
                    cout<<"Node Prepended"<<endl;
                    

                }
                

            }
        }

//4. Insert a node after a particular node in the list
        void insertNodeAfter(int k, Node* n){
            
            Node* ptr = nodeExists(k);
            if(ptr == NULL){
                cout<<"No node exists with key value "<<k<<endl;

            }

            else{
                if(nodeExists(n->key)!=NULL){
                cout<<"Node already exits with key value "<<n->key<<". Append anotehr node with different Key value"<<endl;
                }

                else{
                    if(ptr->next == head){
                        ptr->next = n;
                        n->next = head;
                        cout<<"Node inserted"<<endl;
                    }

                    else{
                        n->next = ptr->next;
                        ptr->next = n;
                        cout<<"Node inserted"<<endl;
                    }
                
                }


            }
        }


                    



//5. Delete Node by key 

        void deleteNodeByKey(int k){

                Node * ptr = nodeExists(k);
                if (ptr == NULL) {
                cout << "No node exists with key value OF : " << k <<
                    endl;
                } else {

                if (ptr == head) {
                    if (head -> next == NULL) {
                    head = NULL;
                    cout << "Head node Unlinked... List Empty";
                    } else {
                    Node * ptr1 = head;
                    while (ptr1 -> next != head) {
                        ptr1 = ptr1 -> next;
                    }
                    ptr1 -> next = head -> next;
                    head = head -> next;
                    cout << "Node UNLINKED with keys value : " << k << endl;
                    }
                } else {
                    Node * temp = NULL;
                    Node * prevptr = head;
                    Node * currentptr = head -> next;
                    while (currentptr != NULL) {
                    if (currentptr -> key == k) {
                        temp = currentptr;
                        currentptr = NULL;
                    } else {
                        prevptr = prevptr -> next;
                        currentptr = currentptr -> next;
                    }
                    }

                    prevptr -> next = temp -> next;
                    cout << "Node UNLINKED with keys value : " << k << endl;

                }

                }


}
            


                    


//6. Update a node

        void updateNodeByKey(int k, int v){
            Node* ptr = nodeExists(k);
            if(ptr!=NULL){
                ptr->val = v;
                cout<<"Node value updated successfully"<<endl;

            }

            else{
                cout<<"Node doesn't exist with key value : "<<k<<endl;

            }
        }

//7. Printing of the list

    void printList() {
        if (head == NULL) {
        cout << "No Nodes in Circular Linked List";
        } else {
        cout << endl << "head address : " << head << endl;
        cout << "Circular Linked List Values : " << endl;

        Node * temp = head;

        do {
            cout << "(" << temp -> key << "," << temp -> val << "," << temp -> next << ") --> ";
            temp = temp -> next;
        } while (temp != head);
        }

    }


};
                    






//Menu Driven Program

int main(){

    circularLinkedList s;
    int option;
    int key1,k1,val1;

     do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    Node* n1 = new Node();

        switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> val1;
      n1 -> key = key1;
      n1 -> val = val1;
      s.appendNode(n1);
      
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> val1;
      n1 -> key = key1;
      n1 -> val = val1;
      s.prependNode(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> val1;
      n1 -> key = key1;
      n1 -> val = val1;

      s.insertNodeAfter(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      s.deleteNodeByKey(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> val1;
      s.updateNodeByKey(key1,val1);

      break;
    case 6:
      s.printList();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);
    


return 0;
}



                


