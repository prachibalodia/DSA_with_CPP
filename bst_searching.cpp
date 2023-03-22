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
// complexity would be O(H) for most cases
// logN <= H <= N
// complexity is H and not logN or N as it depends on the structure of the tree
bool searchBST(Node *root, int key)
{

    if (root == NULL)
    {
        return false;
    }

    if (root->data == key)
    {
        return true;
    }
    if (key < root->data)
    {
        return searchBST(root->left, key);
    }
    return searchBST(root->right, key);
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
    cout << endl;
    int key;
    cin >> key;
    cout << searchBST(root, key) << endl;
    return 0;
}