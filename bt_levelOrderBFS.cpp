#include <iostream>
using namespace std;
#include<bits/stdc++.h>
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

void printLevelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp= q.front();

        if(temp == NULL){
            q.pop();
            cout<<endl;

            //inserting a new null at the end
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return;
}

int main()
{
 Node* root= buildTree();
 printLevelOrder(root); //1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
return 0;
}