#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
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

struct node *min(struct node *root)
{

    if(root==NULL)
    {
        cout<<"the tree is empty:("<<endl;
        return 0;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
struct node *max(struct node *root)
{

    if(root==NULL)
    {
        cout<<"the tree is empty:("<<endl;
        return 0;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}

int main()
{
    root=create(root,25);
    //find min or max term
    struct node *ptr=root;

    ptr=insert(root,10);
    ptr=insert(root,20);
    ptr=insert(root,12);
    ptr=insert(root,19);
    ptr=insert(root,24);
    ptr=insert(root,26);
    ptr=insert(root,28);
    ptr=insert(root,29);
    ptr=insert(root,100);
    ptr=insert(root,3);
    ptr=insert(root,11);

    struct node *minimum=NULL;
    struct node *maximum=NULL;
    minimum=min(root);
    maximum=max(root);

    cout<<"the minimum element is "<<minimum->data<<endl<<endl<<endl;
    cout<<"the maximum element is "<<maximum->data<<endl<<endl<<endl;
    return 0;
    
}