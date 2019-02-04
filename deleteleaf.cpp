#include<iostream>
using namespace std; 
  
struct Node { 
    int data; 
    struct Node* left;  
    struct Node* right; 
}; 
struct Node* newNode(int data) 
{ 
    struct Node* temp = new Node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
struct Node* insert(struct Node* root, int data) 
{ 
    if (root == NULL) 
        return newNode(data); 
    if (data < root->data) 
        root->left = insert(root->left, data); 
    else if (data > root->data) 
        root->right = insert(root->right, data); 
    return root; 
} 
   
void inorder(struct Node* root) 
{ 
    if (root != NULL) { 
        inorder(root->left); 
        cout << root->data << " "; 
        inorder(root->right); 
    } 
} 
   
struct Node* leafDelete(struct Node* root) 
{ 
    if (root->left == NULL && root->right == NULL) { 
        delete(root); 
        return NULL; 
    } 
	else{
	
    root->left = leafDelete(root->left); 
    root->right = leafDelete(root->right); 
}
    return root; 
} 
   
int main() 
{ 
    struct Node* root = NULL; 
    root = insert(root, 20); 
    insert(root, 10); 
    insert(root, 5); 
    insert(root, 15); 
    insert(root, 30); 
    insert(root, 25); 
    insert(root, 35); 
    cout << "Inorder before Deleting the leaf Node." << endl; 
    inorder(root); 
    cout << endl; 
    leafDelete(root); 
    cout << "INorder after Deleting the leaf Node." << endl; 
    inorder(root); 
    return 0; 
} 
