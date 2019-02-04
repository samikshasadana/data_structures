#include<iostream>
using namespace std;
struct node{
   int data;
   struct node* left;
   struct node* right;
};
node* createnode(int a){
	node* temp= new node;
	temp->data=a;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node* insert(node* root,int a){
	node* p;
	if(root==NULL){
		p=createnode(a);
		return p;
	}
	else{
		if(a<root->data)
		root->left=insert(root->left,a);
		else
		root->right=insert(root->right,a);
		return root;
	}
}
node* search(node *root,int x){
	if(root==NULL)
	cout<<"tree empty";
	else if(root->data==x){
		cout<<"found";
	}
	 else if(x<root->data)
        root->left=search(root->left,x);
    else if(x>root->data)
        root->right=search(root->right,x);
  else
  cout<<"not found";
  return root;
}
void inorder( node * ptr){
	if(ptr!=NULL){
		inorder(ptr->left);
		cout<<ptr->data;
		inorder(ptr->right);
	}
}
void preorder( node * ptr){
	if(ptr!=NULL){
		
		cout<<ptr->data;
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void postorder( node * ptr){
	if(ptr!=NULL){
		postorder(ptr->left);
			postorder(ptr->right);
		cout<<ptr->data;
	
	}
}
int main(){
	int n,a,i,x;
	node* root=NULL;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		root=insert(root,a);
	}
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	cout<<"enter element to be searched";
	cin>>x;
	search(root,x);
}
