#include <iostream>
using namespace std;
#include <bits/stdc++.h>
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

Node *buildLevelOrderTree()
{
    int d;
    cin >> d;

    Node *root = new Node(d);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        Node *current = q.front();
        q.pop();

        int c1, c2;
        cin >> c1 >> c2;
        if (c1 != -1)
        {
            current->left = new Node(c1);
            q.push(current->left);
        }

        if (c2 != -1)
        {
            current->right = new Node(c2);
            q.push(current->right);
        }
    }
    return root;
}

void printLevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();

        if (temp == NULL)
        {
            q.pop();
            cout << endl;

            // inserting a new null at the end
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return;
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);

    return 1 + max(h1, h2);
}

int diameter(Node *root)
{ // order is O(N*N) ->not optimised
    if (root == NULL)
    {
        return 0;
    }

    int d1 = height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    int d = max(d1, max(d2, d3));

    return d;
}

//-----------------OPTIMISED DIAMETER----------------------
class HDPair
{
public:
    int height;
    int diameter;
};

HDPair optDiameter(Node *root)
{
    HDPair p;

    // base case
    if (root == NULL)
    {
        p.height = p.diameter = 0;
        return p;
    }

    // otherwise
    HDPair Left = optDiameter(root->left);
    HDPair Right = optDiameter(root->right);

    int height = max(Left.height, Right.height) + 1;

    int d1 = Left.height + Right.height;
    int d2 = Left.diameter;
    int d3 = Right.diameter;

    p.diameter = max(d1, max(d2, d3));

    return p;
}
int main()
{
    Node *root = buildLevelOrderTree();
    printLevelOrder(root); // 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1

    cout << endl
         << "Height of the Tree= " << height(root) << endl;
    cout << endl
         << "Diameter of the Tree= " << diameter(root) << endl;
    cout << endl
         << "Optimised Diameter of the Tree= " << optDiameter(root).diameter << endl;

    return 0;
}