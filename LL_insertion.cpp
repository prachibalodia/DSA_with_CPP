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

void insertAtPosition(Node* &tail, Node* &head, int d, int position){

    //inserting if position is equal to 1, or at start
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    
    //creating a Node
    Node* temp = head;
    int count =1;
    while(count < position-1){
        temp = temp -> next;
        count++;
    }

      if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;

    }

    //for middle
    //creating a node for the new node data d
    Node* nodeToInsert= new Node(d);
    nodeToInsert -> next= temp -> next;
    temp -> next= nodeToInsert;

    //insertion at last position, or if position is equal to tail's position 
  
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

    Node *node1 = new Node(10);

    // inserting at head
    cout << "Inserting at head" << endl;
    // head pointing to node1
    Node *head = node1;
    printLL(head);

    insertAtHead(head, 12);
    printLL(head);

    insertAtHead(head, 15);
    printLL(head);

    // inserting at tail
    cout << "Inserting at Tail" << endl;
    Node *tail = node1;
    printLL(head);

    insertAtTail(tail, 16);
    printLL(head);

    insertAtTail(tail, 18);
    printLL(head);

    // inserting at a position
    cout << "Inserting at a position" << endl;

    insertAtPosition(tail,head, 200, 4);
    printLL(head);   

    //verifying head and tail
    cout<< "Head"<< head -> data <<endl;
    cout<< "Tail"<< tail -> data <<endl;


    return 0;
}