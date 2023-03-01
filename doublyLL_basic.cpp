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
void printDoublyLL(Node* head){
    Node* temp= head;

    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//gives length of the linked list
int getLength(Node* head){
     Node* temp= head;
     int l=0;

    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}
int main()
{
 
 Node* node1= new Node(10);
 Node* head= node1;

 printDoublyLL(head);
 cout<<getLength(head)<<endl;

return 0;
}