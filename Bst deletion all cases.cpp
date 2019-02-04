#include<iostream>
using namespace std;
struct node
{
	int data;
	node *left;
	node *right;
	
};
struct node *createnode(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node *insert(node* root,int ele)
{

	if(root==NULL)
	{
			node *p;
	p=createnode(ele);
		return p;
	}
	else if(ele<root->data)
	{
		root->left=insert(root->left,ele);
	}
	else
	{
		root->right=insert(root->right,ele);
	}
	return root;
}
void inorder(struct node *ptr)
{
	if(ptr!=NULL)
	{
	inorder(ptr->left);
	cout<<ptr->data<<endl;
	inorder(ptr->right);
	}
}
struct node* findmin(node *root)
{
	node *min=root;
	if(root==NULL)
	{
		return 0;
	}
	else if(root->data<min->data)
	{
		root->right=findmin(root->right);
	}
	return root;
}
node *delete1(node *root,int b)
{
	if(root==NULL)
	{
		return 0;
	}
	if(root->data==b)
	{
		if(root->left==NULL&&root->right==NULL)
		{
			delete root;
			root=NULL;
			return root;
		}
		else if(root->left==NULL)
		{
			node *temp=root;
			root=root->right;
			delete temp;
			return root;
		}
		else if(root->right==NULL)
		{
			node *temp=root;
			root=root->left;
			delete temp;
			return root;
		}
		else
		{
			node *temp=findmin(root->right);
			root->data=temp->data;
			root->right=delete1(root->right,temp->data);
		}
	}
	else if(b<root->data)
	{
			root->left=delete1(root->left,b);
	}  
	else
	{
			root->right=delete1(root->right,b);
	}
	return root;
}
int main()
{
	struct node *root=NULL;
	int i,n,r,a,c;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		root=insert(root,a);
	}
	cin>>r;
	for(int j=0;j<r;j++)
	{
		cin>>c;
		delete1(root,c);
	}
	inorder(root);
}
