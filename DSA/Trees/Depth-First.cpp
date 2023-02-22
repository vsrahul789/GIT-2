#include<iostream>
#include<stdlib.h>
#include<stack>

using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

struct node *create(struct node *root,int data)
{
    struct node *temp=new struct node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

struct node *insert(struct node *root,int data)
{
    struct node *temp=root;
    struct node *temp1=create(root,data);

    if(root==NULL)
    {
        root=create(root,data);
    }else if(data <= root->data){
        root->left=insert(root->left,data);
    }else{
        root->right=insert(root->right,data);
    }
    return root;
}

void depthfirst(node *root)
{
    if(root==NULL)
    {
        return;
    }
    stack <node *> s;
    s.push(root);

    while(!s.empty())
    {
        node *temp=s.top();
        cout<<temp->data<<endl;
        s.pop();
        if(temp->left!=NULL)
        {
            s.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            s.push(temp->right);
        }
    }
}

int main()
{
    struct node *root=new struct node;
    root = create(root,100);

    struct node *ptr=root;

    ptr=insert(root,10);
    ptr=insert(root,60);
    ptr=insert(root,50);
    ptr=insert(root,200);
    // ptr=insert(root,19);
    // ptr=insert(root,23);
    depthfirst(root);

    return 0;
}