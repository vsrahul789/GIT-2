#include<iostream>
#include<stdlib.h>

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

bool search(struct node *root,int key)
{
    struct node *temp=root;
    if(root==NULL)
    {
        cout<<"the tree is empty"<<endl;
        return 0;
    }
    else if(root->data==key){
        return true;
    }
    else if(key <= root->data){
        search(root->left,key);
    }
    else if(key > root->data){
        search(root->right,key);
    }else{
        return false;
    }
}

int main()
{
    struct node *root=new struct node;
    root = create(root,15);

    struct node *ptr=root;

    ptr=insert(root,10);
    ptr=insert(root,20);
    ptr=insert(root,3);
    ptr=insert(root,12);
    ptr=insert(root,19);
    ptr=insert(root,23);

    //searching

    int key;
    bool s;
    cout<<"enter the key to be searched:";
    cin>>key;
    cout<<endl;

    s=search(root,key);

    if(s==true)
    {
        cout<<"the key "<<key<<" is found"<<endl;
    }else{
        cout<<"the key "<<key<<" is not found"<<endl;
    }

    return 0;
}