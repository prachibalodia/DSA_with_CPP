#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data=d;
        left = right = NULL;
    }
};

Node* buildTree(){
    int d;
    cin>>d;
    if(d == -1){
        return NULL;
    }

    Node* n= new Node(d);
    n->left= buildTree();
    n->right= buildTree();
    return n;
}

void printInOrderTree(Node *root){
    if(root == NULL){
        return;
    }

        printInOrderTree(root->left);
        cout<<root->data<<" ";
        printInOrderTree(root-> right);

}
int main()
{
 Node* root= buildTree();
 printInOrderTree(root); 
 cout<<endl; //1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
return 0;
}