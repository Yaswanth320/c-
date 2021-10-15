#include<iostream>
using namespace std;

class node{
public:
int key;
int data;
node* next;
node(){
    key = 0 ;
    data = 0;
    next = NULL;
}
node(int k, int d){
    key = k;
    data = d;
}
};
class circularlinkedlist{
public:
node* head;
circularlinkedlist(){
    head = NULL;
}
circularlinkedlist(node* n){
    head = n;
}
// 1. check if the node exists using key value
node* nodeexists(int k){
    node* temp = NULL;
    node* ptr = head;
    if(ptr == NULL){
        return temp;
    }
    else{
        // we use do while cause id we need to stop at head address if we start with head then the while loop doent execute atleat one
        do{                     
            if(ptr -> key == k){
                temp = ptr;
            } 
            ptr = ptr -> next;
        }while(ptr != head);   
        return temp;         
    }
}

// 2. append a node

void append(node* n){
    if(nodeexists(n -> key) != NULL){
        cout << " node already exists with the given key" << endl;  
    }else{
        {
            if(head == NULL){
                head = n;
                n -> next = head; // cause it an circular end pointer points to head
                cout <<"node is appended successfully"<< endl;
            }else{
                node* ptr = head;
                while(ptr -> next != head){
                    ptr = ptr->next;
                }
                ptr -> next = n;
                n -> next = head;
                cout << " node appended"<< endl;
            }
        }
    }
}

// 3. delete node

void prepend(node* n){
    if(nodeexists(n -> key) != NULL){
        cout << "node already exists with the given key value"<< endl;
    }
    else{
        node* ptr = head;
        node* temp = NULL;
        if(ptr -> next != head){
            ptr = ptr -> next;
        }
        ptr -> next = n;
        n -> next = head;
        head = n;
        cout << "node prepended" << endl;
    }
}

// 4. Insert a string after a particular node in the list
void insertnode(int k, node* n){
    node* ptr = nodeexists(k);
    if(ptr == NULL){
        cout << "no node exists with key value " << k << endl;
    }
    else{
        if(nodeexists(n -> key) != NULL){
            cout << "node already present with the given key value" << endl;
        }
        else{
            if(ptr -> next == head){
                n -> next = head;
                ptr -> next = n;
                cout << "node inserted at the end" << endl;
            }
            else{
                n -> next = ptr -> next;
                ptr -> next = n;
                cout << "node is inserted"<< endl;
            }
        }
    }
}

// 5. delete node by unique key

void deletenode(int k){
    node* ptr = nodeexists(k);
    if(ptr == NULL){
        cout << "no node exists with the key value k" << endl;
    }
    else{
    if(ptr == head){
        if(head -> next == NULL){ 
            head = NULL;
            cout << "head node unlinked"<< endl;
        }
        else{
            node* ptr = head;
            while(ptr -> next != head){
                ptr = ptr-> next;
            }
            ptr -> next = head -> next;
            head =head-> next;
            cout << " node is unlinked" << endl;
        }
    }
    else{
        node* temp = NULL;
        node* prevptr = head;
        node* currentptr = head -> next;
        while(currentptr != NULL){
            if(currentptr -> key == k){
                temp = currentptr;
                currentptr = NULL;
            }
            else{
                prevptr = prevptr-> next;
                currentptr = currentptr -> next;
            }
        } 
        prevptr -> next = temp -> next;
        cout << "node unlinked with key value" << k<< endl;
    }
    }
    
}

void update(int k, int d){
    node *ptr = nodeexists(k);
    if(ptr != NULL){
        ptr -> data = d;
        cout << " DATA is updated" << endl;
    }else{
        cout << " node doesnt exist with key value"<< endl;
    }
}

void printList(){
    if(head == NULL){
        cout << " no nodes in list"<< endl;
    }
    else{
        cout << "list:" << endl;
        node* temp = head;
        do{
            cout <<"("<<temp -> key << ","<<temp -> data<<") --> ";
            temp = temp -> next;
        }while(temp != head);
    }   
}
};

int main(){
    circularlinkedlist obj;
    int option;
    int key1, k1, data1;

do{
        cout << "opeartions" << endl;
        cout << "1. append()" << endl;
        cout << "2. prepend()" << endl;
        cout << "3. insert()" << endl;
        cout << "4. deletenode()" << endl;
        cout << "5. update()" << endl;
        cout << "6. print()" << endl;
        cout << "7. clear screen()" << endl;
    
    cin >> option;
    node* n1 = new node();
    // node n1;
    switch(option){
        case 0 :
            break;
        case 1:
            cout << " enter key" << endl;
            cin >> key1;
            cout << "enter data" << endl;
            cin >> data1;
             n1 -> key = key1;
             n1 -> data = data1;
             obj. append(n1);
             break;
        case 6:
            obj.printList();
            break;
        case 7:
            system("clear");  // doesnt work in terminal search for the thing which works
        default:
        cout << " enter the proper option number" << endl;
    }
    }while(option != 0);
    return 0;
}
