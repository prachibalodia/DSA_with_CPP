#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data= d;
        this->next= NULL;
        this->prev= NULL;
    }

    ~Node(){
        int value= this->data;
        if(next != NULL){
            delete next;
            next= NULL;
        }
        cout<<"memory freed for node with data "<<value<<endl;
    }
};

//traversing
void printDoublyLL(Node* &head){
    Node* temp= head;

    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    
    cout<<endl;
}

//gives length of the linked list
int getLength(Node* &head){
     Node* temp= head;
     int l=0;

    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

//insertion at head
void insertAtHead(Node* &head, Node* &tail, int d){
    Node* temp= new Node(d);
    if(head == NULL){
        head= temp;
        tail= temp;
    }
    else{
        temp->next= head;
        head->prev= temp;
        head= temp;
    }
   
}

//insertion at tail
void insertAtTail(Node* &tail, Node* &head, int d){
    Node* temp= new Node(d);
    if(tail == NULL){
        tail= temp;
        head= temp;
    }
    else{
        tail->next= temp;
        temp->prev= tail;
        tail= temp;
    }
   
}

//insertion at any given position
void insertAtPosition(Node* &head, Node* &tail, int pos, int d){
    
    //for start
    if(pos == 1){
        insertAtHead(head, tail,d);
        return;
    }

    int c=1;
    Node* temp= head;
    while(c < pos-1){
        temp= temp->next;
        c++;
    }

    //for end
    if(temp->next == NULL){
        insertAtTail(tail,head, d);
        return;
    }

    //for middle
    Node* nodeToInsert= new Node(d);
    nodeToInsert->next= temp->next;
    temp->next->prev= nodeToInsert;
    temp->next= nodeToInsert;
    nodeToInsert->prev= temp;

}
//deletion of nodes
void deleteNode(Node* head, int pos){
    if(pos == 1){
        Node* temp= head;
        temp->next->prev= NULL;
        head= temp->next;
        //memory free
        temp->next= NULL;
        delete temp;
    }
    else{
        int c=1;
        Node* previ;
        Node* curr=head;

        while(c<pos){
            previ= curr;
            curr= curr->next;
            c++;
        }

        curr->prev = NULL;
        previ->next = curr->next;
        // curr->next->prev = previ;
        curr->next= NULL;

        delete curr;
    }
}

int main()
{
 
 Node* head= NULL;
 Node* tail= NULL;

 printDoublyLL(head);

cout<<"Insertion at head"<<endl;
insertAtHead(head,tail, 20);
printDoublyLL(head);
cout<<endl;

insertAtHead(head,tail,30);
printDoublyLL(head);
cout<<endl;

insertAtHead(head,tail, 40);
printDoublyLL(head);
cout<<endl;

insertAtHead(head,tail, 50);
printDoublyLL(head);
cout<<endl;


cout<<"Insertion at tail"<<endl;
insertAtTail(tail,head, 60);
printDoublyLL(head);
cout<<endl;


cout<<"Insertion at the middle"<<endl;
insertAtPosition(head,tail, 2,100);
printDoublyLL(head);
cout<<endl;

insertAtPosition(head,tail, 1,300);
printDoublyLL(head);
cout<<endl;

insertAtPosition(head,tail, 8,200);
printDoublyLL(head);
cout<<"head= "<<head->data<<endl;
cout<<"tail= "<<tail->data<<endl;
cout<<endl;

deleteNode(head, 1);
cout<<"head= "<<head->data<<endl;
cout<<"tail= "<<tail->data<<endl;
printDoublyLL(head);
cout<<endl;



return 0;
}