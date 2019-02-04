#include<iostream>
using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
};node *root=NULL;

class tree
{
	int sum=0;
	public:
		void insertion(int data);
		node* deletion(node *root,int data);
		void pre(node *root);
		void post(node *root);
		void in(node *root);
		int sumleafcount(node *root);
		int addBT(node* root);
		int height(node *root);
		node* findmin(node *root);
		void findmax(node *root);
};
node* tree::findmin(node *root)
{
	while(root->left!=NULL)
	{
		root=root->left;
	}
	cout<<"min is: "<<root->data;
}

node* tree::deletion(node *root,int data)
{
	 node *temp;
	if(root == NULL) return root;
  else if(data < root->data)
   	root->left = deletion(root->left,data);
  else if(data > root->data) 
  	root->right = deletion(root->right, data);
  else
   {
	    // Case 1: No Child
	    if(root->left == NULL && root->right == NULL)
		{
	      delete root;
	      root = NULL;
	    // Case 2: one child
	    } 
		else if(root->left == NULL)
		{
	      struct node *temp = root;
	      root = root->right;
	      delete temp;
	    }
		 else if(root->right == NULL)
		 {
	      struct node *temp = root;
	      root = root->left;
	      delete temp;
	    } 
		else
		{ // Case 3: 2 Children
	     temp = findmin(root->right);
	      root->data = temp->data;
	      root->right = deletion(root->right, temp->data);
	    }
    }
  return root;
}

void tree::findmax(node *root)
{
	while(root->right!=NULL)
	{
		root=root->right;
	}
	cout<<"max is: "<<root->data;
}
int tree::height(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int l=height(root->left);
	int r=height(root->right);
	return max(l,r)+1;
}
int tree:: sumleafcount(node *root)
      {
       if(root == NULL)
          return 0;
       if(root->left==NULL && root->right==NULL)
       {
           sum=sum+root->data;
       }
       sumleafcount(root->left);
       sumleafcount(root->right);
       return sum;
      }
int tree:: addBT(node* root)
{
    if (root == NULL)
        return 0;
    return (root->data + addBT(root->left) + addBT(root->right));
}
void tree::insertion(int d)
{
	node *t,*temp,*p;
	t=new(node);
	t->data=d;
	t->left=NULL;
	t->right=NULL;
	if(root==NULL)
	{
		root=t;
		return;
	}
	else
	{
		temp=root;
		while(temp)
		{
			p=temp;
			if(t->data>temp->data)
			{
				temp=temp->right;
			}
			else
			{
				temp=temp->left;
			}
		}
		if(p->data<t->data)
		{
			p->right=t;	
		}	
		else
		{
			p->left=t;
		}
	}
}


void tree::pre(node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		cout<<root->data<<" ";
		pre(root->left);
		pre(root->right);
	}
}
void tree::post(node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		post(root->left);
		post(root->right);
		cout<<root->data<<" ";
	}
}
 void tree::in(node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		in(root->left);
		cout<<root->data<<" ";
		in(root->right);
	}
}

int main()
{
	int i,size,value,del;
	tree t;
	cin>>size;
	for(i=0;i<size;i++)
	{
		cin>>value;
		t.insertion(value);
	}
	cout<<"enter no. for deletion";
	cin>>del;
	cout<<"pre ";
	t.pre(root);
	cout<<endl;
	cout<<"post ";
	t.post(root);
	cout<<endl;
	cout<<"in ";
	t.in(root);
	cout<<endl;
    cout<<"sum of all nodes "<<t.addBT(root);
    cout<<"\n";
	cout<<"sum of leaf nodes "<<t.sumleafcount(root);
	cout<<"\n";
	cout<<"height of tree is : "<<t.height(root);
	cout<<"\n";
	t.findmax(root);
	cout<<"\n";
	t.findmin(root);
	t.deletion(root,del);
	cout<<endl;
	cout<<"in ";
	t.in(root);
	return 0;
}
