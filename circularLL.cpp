#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data= d;
        this->next= NULL;
    }

    ~Node(){
        int value= this->data;
        if(next != NULL){
            next= NULL;
            delete next;
        }
        cout<<"memory freed for the node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
   

    //for an empty list
    if(tail == NULL){
         Node* temp= new Node(d);
        tail= temp;
        temp->next= temp;
    }

    //for a non-empty list
    else{
        Node* curr= tail;
        Node* temp= new Node(d);
        while(curr->data != element){
            curr= curr->next;
        }

        //now curr is representing the node containing element
        temp->next = curr->next;
        curr->next= temp;
    }
}

void printLL(Node* &tail){
    Node* temp= tail;

    if(tail == NULL){
         cout<<"Tail is NULL, List is empty"<<endl;
    }
    //we are using do while loop because we need the loop to run atleast once
    //or else whenever there is a single node, it wont get printed
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int element){

    //empty list
    if(tail == NULL){
        cout<<"Deletion not possible, empty list"<<endl;
    }

    
    Node* prev= tail;
    Node* curr= prev-> next;

    //list with a single element
    if(curr == prev){
        tail = NULL;
    }

    while(curr->data != element){
        prev= curr;
        curr= curr->next;
    }

    prev->next= curr->next;
    if(tail == curr){
        tail= curr->next;
    }
    curr->next= NULL;
    delete curr;
}
int main()
{
    Node* tail= NULL;

    //inserting in an empty list
    insertNode(tail, 5,1);
    printLL(tail);
    insertNode(tail, 1,2);
    printLL(tail);
//     insertNode(tail, 2,3);
//     printLL(tail);
//     insertNode(tail, 3,4);
//     printLL(tail);
//      insertNode(tail, 4,6);
//     printLL(tail);
//      insertNode(tail, 6,7);
//     printLL(tail);
//      insertNode(tail, 4,5);
//     printLL(tail);
//      insertNode(tail, 4,4);
//     printLL(tail);
//      insertNode(tail, 4,50);
//     printLL(tail);
   
//    deleteNode(tail, 50);
//    printLL(tail);
//    deleteNode(tail, 4);
//    printLL(tail);
   deleteNode(tail, 1);
   printLL(tail);
 
return 0;
}