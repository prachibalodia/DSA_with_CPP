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

Node* buildLevelOrderTree(){
    int d;
    cin>>d;
    
    Node* root = new Node(d);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* current= q.front();
        q.pop();

        int c1,c2;
        cin>>c1>>c2;
        if(c1!= -1){
            current->left= new Node(c1);
            q.push(current->left);
        }

        if(c2!= -1){
            current->right= new Node(c2);
            q.push(current->right);
        }
    }
    return root;
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

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int h1= height(root->left);
    int h2= height(root->right);

    return 1+max(h1, h2);
}

int main()
{
 Node* root= buildLevelOrderTree();
 printLevelOrder(root); //1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1

 cout<<endl<<"Height of the Tree= "<<height(root)<<endl;
return 0;
}