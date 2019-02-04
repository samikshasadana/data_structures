#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * left;
	struct node * right;
};
node * create(int x){
	node * temp=new node;
	temp->data=x;
	temp->left=temp->right=NULL;
	return temp;
}
node * insert(int x,node * root){
	if(root==NULL){
		node * p=create(x);
		return p;
	}
	else{
		if(root->data>x)
		root->left=insert(x,root->left);
		else
		root->right=insert(x,root->right);
		return root;
	}
}
void in(node * p){
		if(p!=NULL){
		in(p->left);
		cout<<p->data;
		in(p->right);
	}
}
node* findmin(node * root){
	while(root->left!=NULL)
	root=root->left;
	return root;
}
node * delete1(int x,node * root){
	if (root==NULL)
	return NULL ;
	else if (root->data==x){
		if(root->left==NULL&& root->right==NULL){
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
		else if (root->left!=NULL && root->right!=NULL){
			node * temp;
			temp=findmin(root->right);
			root->data=temp->data;
			root->right=delete1(temp->data,root->right);
			
		}
	}
	else{
		if(x>root->data){
			root->right=delete1(x,root->right);
		}
		else if(x<root->data){
			root->left=delete1(x,root->left);
		}
		else
		cout<<"node not found";
		return root;
	}}
	int hie(node * root){
		if(root==NULL)
		return 0;
		else{
		
		int l,r;
		l=r=0;
		l=hie(root->left);
		r=hie(root->right);
	/*	if(l<r){
		return r+1;
		
		}
		else return l+1;*/
		return l+r+1;
	}}

int main(){
	node * root=NULL;
	int n,i,e;
	cin>>n;
	for ( i=0;i<n;i++){
		cin>>e;
		root=insert(e,root);
	}
	in(root);
	cout<<endl;
	//cin>>e;
	//delete1(e,root);
	//in(root);
	int h=hie(root);
	cout<<h;
	return 0;
}
