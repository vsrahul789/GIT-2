#include<iostream>
#include<queue>

using namespace std;

struct node {
    int data;
    node *left;
    node *right;
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
    }else if(data >= root->data){
        root->right=insert(root->right,data);
    }else{
        root->left=insert(root->left,data);
    }
    return root;
}

// level order

void levelorder(struct node *root){
    if(root==NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp=q.front();
        cout<<temp->data<<endl;

        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        q.pop();
    }
    
}

//preorder traversal

// struct node *preorder(struct node *root)
// {
//     if(root==NULL)
//     {
//         // cout<<"the tree is empty:("<<endl;
//         return root;
//     }

//     cout<<root->data<<endl;
//     preorder(root->left);
//     preorder(root->right);
// }

//postorder traversal

// struct node *postorder(node *root)
// {
//     if(root==NULL)
//     {
//         // cout<<"the tree is empty:("<<endl;
//         return root;
//     }

//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<endl;
// }

//inorder traversal or ascending order 
// node *inorder(node *root)
// {
//     if(root==NULL)
//     {
//         // cout<<"the tree is empty:("<<endl;
//         return root;
//     }

//     inorder(root->left);
//     cout<<root->data<<"\t";
//     inorder(root->right);
//     return 0;
// }

int main()
{
    root=create(root,25);

    struct node *ptr=root;

    // ptr=insert(root,10);
    // ptr=insert(root,20);
    // ptr=insert(root,12);
    // ptr=insert(root,19);
    // ptr=insert(root,24);
    // ptr=insert(root,26);
    // ptr=insert(root,28);
    // ptr=insert(root,29);
    // ptr=insert(root,100);
    // ptr=insert(root,3);
    // ptr=insert(root,11);
    ptr=insert(root,10);
    ptr=insert(root,60);
    ptr=insert(root,50);
    ptr=insert(root,50);
    ptr=insert(root,200);
    ptr=insert(root,19);
    ptr=insert(root,19);
    ptr=insert(root,19);

    levelorder(root);
    // preorder(root);
    // postorder(root);
    // inorder(root);

    cout<<endl<<endl;
    return 0;
}