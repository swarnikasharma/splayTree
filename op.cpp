#include <iostream>
#include "node.h"
#include <vector.h>

/**Function to insert in a BST rooted at root**/
void insertInBST(node *root,node *nd)
{
	if(root==NULL)
	{
		root=nd;
		return;
	}
	if(root->val>nd->val)
		insertInBST(root->left,nd);
	else if(root->val<nd->val)
		insertinBST(root->right,nd);
}
	
/**Function to build a Binary Search Tree **/
void buildTree(vector<int> elements)
{
	
	for(int i=0;i<elements.size();i++)
	{
			node *newNode=new node(elements[i]);
			insertInBST(root,newNode);
	}
}		
/**Function to splay the node to the root**/
void splay(node *root,node *nd)
{
	
}
	
