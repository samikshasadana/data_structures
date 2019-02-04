#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * left;
	struct node * right;
};
struct tree{
	node * create(int x){
		node * temp=new node;
		temp->data=x;
		temp->right=NULL;
		temp->left=NULL;
		return temp;
	}
	node* insert(node * root ,int x){
		if(root==NULL)
		{
		node *p=create(x);
		return p;
	}

		if(x<root->data)
		root->left=insert(root->left,x);
		else if(x>root->data)
		root->right=insert(root->right,x);
		return root;
	
	}
	void in(node * root){
		if(root==NULL)
		return;
		in(root->left);
		cout<<root->data;
		in(root->right);
	}
	node * findmin(node * root){
		while(root->left!=NULL){
			root=root->left;
		}
		return root;
	}
	node * delete1(node * root,int d){
		if(root==NULL){
			return root;
		}
		else{
			if(root->data==d){
				if(root->left==NULL&&root->right==NULL){
					cout<<"delete";
					delete root;
					return NULL;
				}
				else if(root->left==NULL){
					node * temp=root;
					root=root->right;
					delete temp;
					return root;
				}
				else if(root->right==NULL){
					node * temp=root;
					root=root->left;
					delete temp;
					return root;
				}
				else
				{
					node*temp=findmin(root->right);
					root->data=temp->data;
					root->right=delete1(root->right,temp->data);
				}
			}
			else{
				if(d<root->data)
				root->left=delete1(root->left,d);
				root->right=delete1(root->right,d);

			}
		}
	}
	
	int h(node * root){
		//
		node * ptr=root;
		int l,r;
		if(root==NULL)
		return 0;
		l=h(root->left);
		r=h(root->right);
		return max(l,r)+1;
	}
};
int main(){
	int i;
	node * root=NULL;
	tree t;
	int n,e;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>e;
		root=t.insert(root,e);
	}
	t.in(root);
	cout<<"\n";
	/*t.delete1(root,8);
	t.in(root);
	cout<<"\n";
	t.delete1(root,2);
	t.in(root);*/
	int h=t.h(root);
	cout<<h;
	int d=0;
//	t.topview(root,d,h);
//	t.display();
	
}
