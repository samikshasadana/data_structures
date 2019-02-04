#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct tree{
	node*p;
	node* create(int x){
		node * temp=new node;
		temp->data=x;
		temp->right=NULL;
		temp->left=NULL;
		return temp;
	}
	node* insert(node *root ,int x){
	
		if(root==NULL){
				p=create(x);
			return p;
			
		}
		else{
			if(x<root->data)
			root->left=insert(root->left,x);
			else
			root->right=insert(root->right,x);
			return root;
		}
	}
	void in(node * ptr){
		if(ptr!=NULL)
		{
		
		in(ptr->left);
		cout<<ptr->data<<" ";
		in(ptr->right);
	}
	}
	
};
int main(){
	node * root=NULL;
    tree t;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		root = t.insert(root,x);
	}
	t.in(root);
}
