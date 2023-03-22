#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

Node *insert(Node *root, int key)
{
    if (root == NULL)
    {
        return new Node(key);
    }

    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }

    return root;
}

// printing in an inorder manner
// as a bst is always inorder

void printInOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

void printRange(Node *root, int k1, int k2){
    if(root == NULL){
        return;
    }

    if(k1<= root->data and k2>= root->data){
        printRange(root->left, k1,k2);
        cout<<root->data<<" ";
        printRange(root->right, k1,k2);

    }

    else if(k2 < root->data){
        printRange(root->left, k1,k2);
    }

    else{
        //k1> root->data 
        printRange(root->right, k1,k2);
    }
}

int main()
{
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    Node *root = NULL;

    for (int x : arr)
    {
        root = insert(root, x);
    }

    printInOrder(root);

    cout<<endl;
    printRange(root, 8,14);

    return 0;
}