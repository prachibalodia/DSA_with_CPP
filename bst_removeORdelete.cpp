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

Node *findMin(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
Node *removeBST(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (key < root->data)
    {
        root->left = removeBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = removeBST(root->right, key);
    }
    else
    {
        // when root = key

        // case 1: no children
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }

        // case 2: single child
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }

        // case 3: 2 children
        else
        {
            Node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = removeBST(root->right, temp->data);
        }
        return root;
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
    cout << endl;
    int key;
    cin >> key;

    root = removeBST(root, key);

    printInOrder(root);
    return 0;
}