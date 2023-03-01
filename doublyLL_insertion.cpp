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

int main()
{
 
//  Node* node1= new Node(10);
 Node* head= NULL;
 Node* tail= NULL;

 printDoublyLL(head);
//  cout<<getLength(head)<<endl;

cout<<"Insertion at head"<<endl;
insertAtHead(head,tail, 20);
printDoublyLL(head);
cout<<"head= "<<head->data<<endl;
cout<<"tail= "<<tail->data<<endl;
cout<<endl;

insertAtHead(head,tail,30);
printDoublyLL(head);
cout<<"head= "<<head->data<<endl;
cout<<"tail= "<<tail->data<<endl;
cout<<endl;

insertAtHead(head,tail, 40);
printDoublyLL(head);
cout<<"head= "<<head->data<<endl;
cout<<"tail= "<<tail->data<<endl;
cout<<endl;

insertAtHead(head,tail, 50);
printDoublyLL(head);
cout<<"head= "<<head->data<<endl;
cout<<"tail= "<<tail->data<<endl;
cout<<endl;


cout<<"Insertion at tail"<<endl;
insertAtTail(tail,head, 60);
printDoublyLL(head);
cout<<"head= "<<head->data<<endl;
cout<<"tail= "<<tail->data<<endl;
cout<<endl;


cout<<"Insertion at the middle"<<endl;
insertAtPosition(head,tail, 2,100);
printDoublyLL(head);
cout<<"head= "<<head->data<<endl;
cout<<"tail= "<<tail->data<<endl;
cout<<endl;

insertAtPosition(head,tail, 1,300);
printDoublyLL(head);
cout<<"head= "<<head->data<<endl;
cout<<"tail= "<<tail->data<<endl;
cout<<endl;

insertAtPosition(head,tail, 8,200);
printDoublyLL(head);
cout<<"head= "<<head->data<<endl;
cout<<"tail= "<<tail->data<<endl;
cout<<endl;




return 0;
}