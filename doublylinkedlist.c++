#include <iostream>
using namespace std;

class node{
    public:
        int key, data;
        node* next;
        node* previous; // these have the same type as class cause they are going to point towards the objects of the same class
        
        node(){
            key = 0;
            data = 0;
            next  = NULL;
            previous = NULL;

        }

        node(int k, int d){
            key  = k;
            data = d;
        }
};

class doublylinkedlist{
    public:
        node* head; // head is the pointer of class node which points towards the first node
    
    doublylinkedlist(){
        head = NULL;
    }
    doublylinkedlist(node* n){
        head = n;
    }

    // 1. Check if the node exists in the list using key value
    node* checkifnodeexists(int k){
        node* temp = NULL;
        node* ptr = head;

        while(ptr != NULL){
            if(ptr -> key == k){
               temp = ptr;   
            }
            ptr = ptr -> next;
        }
        return temp;
    }

    // 2. Append the node to the list

    void append(node* n){
        // we need to check if the key of the node we want to append 
        // already exists or not
        // the nodes must have unique key values

        if(checkifnodeexists(n -> key) != NULL){
            cout << "node already exists with key value :" << n -> key << ". Append another node with another key value "<< endl; 
        }
        else{
            if(head == NULL){
                head = n;
                cout << "node append in head node" << endl;
            }
            else{
                node* ptr = head;
                while(ptr -> next != NULL){
                    ptr = ptr -> next;
                }
                ptr -> next = n;
                n -> previous = ptr;
                cout << "Node appended"<< endl;
            }
        }
    }
// prepend the node
    void prepend(node* n){
        if(checkifnodeexists(n->key) != NULL){
            cout << "node already exist with the given key try with another key"<< endl;
        }
        else{
             if(head == NULL){
                head = n;
                cout << "node prepended" << endl;
            }
            else{
                head -> previous = n;
                n -> next = head;

                head = n;
                cout << "node prepended" << endl;
            }
        }
    }
// 4. insert a node after a particular node in the list

void insert(int k,node* n){
    node* ptr = checkifnodeexists(k); // here we are checking for the node after which we want to insert the new node
    if(ptr == NULL){
        cout << "No node exists with key value:" << k << endl;
    }
    else{
        if(checkifnodeexists(n -> key) != NULL){
            cout << "node already exists with key value :"<< n -> key <<". Append the node with different key value"<< endl;
        }
        else{
            cout << "inserting"<< endl;
            node* nextnode = ptr -> next; // node after the given element after which the new node to be placed
            // appeding at the end
            if(nextnode == NULL){
                ptr -> next = n;
                n-> previous = ptr;
                cout << "node inserted at the end"<< endl;
            }
            // append in between
            else{
                n -> next = nextnode;
                nextnode -> previous = n;
                n -> previous = ptr;
                ptr -> next = n;

                cout << "node inserted in between" << endl; 
            }
        }
    }
}

// 5. deleting a node

void deletenode(int k, node* n){
    node* ptr = checkifnodeexists(k);
    if(ptr == NULL){
        cout << " no node exists with key value " << k << endl;
    }
    else{
        if(head == NULL){
            cout << "list is already empty";
        }
        else if(head != NULL){
            if(head -> key == k){
                head = head -> next;
                cout << "node is unlinked from the list" << k << endl;
            }
            else{
                node* nextnode = ptr -> next;
                node* prevnode = ptr -> previous;
                // deleting at the end
                if(nextnode == NULL){
                    prevnode -> next = NULL;
                    cout << "node deleted at the end" << endl;
                }
                // deleting in between
                else{
                    prevnode ->next = nextnode;
                    nextnode -> previous = prevnode;
                    cout << " node deleted in between" << endl;
                }
            }
        }
    }
}

// 6.  update node
    void update(int k, int d){
        node* ptr = checkifnodeexists(k);
        if(ptr != NULL){
            ptr -> data = d;
            cout << " Node data updated successfully" << endl;
        }
        else{
            cout << "Node doesnt exist with key value" << k << endl;
        }
    }

// 7. printing

    void printList(){
        if(head == NULL){
        cout << "no nodes in doubly linked list";
        }
        else{
            cout << endl <<" doubly linked list values:";
            node* temp = head;
            while(temp != NULL){
                cout << "(" << temp -> key <<","<<temp -> data<<") <-->";
                temp = temp -> next;
            }
            cout << endl;
            cout << endl;
            cout << endl;
        }
    }

};

int main(){

    doublylinkedlist obj;
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



























