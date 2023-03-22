#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data= d;
        left= right= NULL;
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

    void printPostOrderTree(Node* root){
        if(root == NULL){
            return;
        }

        printPostOrderTree(root->left);
        printPostOrderTree(root->right);
        cout<<root->data<<" ";

    }

int main()
{
 Node* root= buildTree();
 printPostOrderTree(root); //1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

return 0;
}