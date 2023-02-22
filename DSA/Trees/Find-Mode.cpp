#include<iostream>
#include<stdlib.h>
#include<stack>
#include<cmath>

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

node *inorder(node *root)
{
    if(root==NULL)
    {
        // cout<<"the tree is empty:("<<endl;
        return root;
    }

    inorder(root->left);
    cout<<root->data<<"\t";
    // return root->data;
    inorder(root->right);
    return 0;
}


// void mode(struct node *root)
// {
//     if(root==NULL)
//     {
//         cout<<"the root is null:("<<endl;
//     }else if(root->left){

//     }

// }

int main()
{
    struct node *root=new struct node;
    root = create(root,100);

    struct node *ptr=root;

    ptr=insert(root,10);
    ptr=insert(root,60);
    ptr=insert(root,50);
    ptr=insert(root,50);
    ptr=insert(root,200);
    ptr=insert(root,19);
    ptr=insert(root,19);
    ptr=insert(root,19);

    // depthfirst(root);
    inorder(root);
    // mode(root);

    cout<<endl<<endl;
    return 0;
}