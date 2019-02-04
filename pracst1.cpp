#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *createnode(int x)
{
    node *temp=new node;
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
node *insert(node *root,int x)
{
    if(root==NULL)
    {
        node *p=createnode(x);
        return p;
    }
    else if(x<root->data)
        root->left=insert(root->left,x);
    else
        root->right=insert(root->right,x);
    return root;
}
node *search(node *root,int x)
{
    if(root==NULL)
        cout<<"root is null";
    if(root->data==x)
        cout<<"found";
    else if(x<root->data)
        root->left=search(root->left,x);
    else
        root->right=search(root->right,x);
    return root;
}
void inorder(node *ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        cout<<ptr->data<<" ";
        inorder(ptr->right);
    }
}
void postorder(node *ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->data<<" ";
    }
}
void preorder(node *ptr)
{
    if(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
int main()
{
    int n,i,a,r;
    node *root=NULL;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        root=insert(root,a);
    }
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<"enter the number of elements u want to search";
    cin>>r;
    for(i=0;i<r;i++)
    {
        cin>>a;
        search(root,a);
    }
}
