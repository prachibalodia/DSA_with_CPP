#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    // Constructor for initialisation
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    // creating the new node from the given new data
    Node *temp = new Node(d);
    // equating the address of the existing node to temp node
    temp->next = head;
    // now, the head is equal to address of temp node
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    // creating the new node from the given data
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

Node* reverse(Node* &head){
    Node* prev= NULL;
    Node* curr= head;
    Node* nextptr;

    while(curr != NULL){
        nextptr= curr -> next;
        curr->next= prev;

        prev= curr;
        curr= nextptr;
    }
    return prev;

}



void printLL(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    
    Node *head = NULL;
   
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    cout<<"Before reverse"<<endl;
    printLL(head);

    Node* newHead= reverse(head);
    cout<<"After reverse"<<endl;
    printLL(newHead);
   
    

    return 0;
}