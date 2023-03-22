#include <iostream>
using namespace std;
#include<vector>
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

void printRootToLeafPath(Node* root, vector<int> path){
    //base case
    if(root == NULL){
        return;
    }
    if(root->left == NULL and root->right == NULL){
        for(int n:path){
            cout<<n<<"->";
        }
        cout<<root->data<<"->";
        cout<<endl;
        return;
    }

    //recursive case
    path.push_back(root->data);
    printRootToLeafPath(root->left, path);
    printRootToLeafPath(root->right, path);

    //backtracking
    path.pop_back();
    return;
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

    vector<int> v;
    printRootToLeafPath(root, v);
    return 0;
}