#include "BSTree.h"

BSTree::BSTree(int val)
{
	this->root = new TreeNode(val);
	this->members = 1;
}
BSTree::~BSTree()
{
}
void BSTree::insert(TreeNode* node, int value)
{
	if (this->isEmpty())																//check to make sure tree is not empty first, if so, set root's val to value
	{
		this->root = new TreeNode(value);
	}
	else if(this->root->getValue() < value && this->root->getRightChild != nullptr)		//check to see if value passed is greater than the current node's value 
	{																					//and to see if the right child is not null
		this->insert(this->root->getRightChild(), value);								//call insert to with right child and value   
	}
	else if(this->root->getValue() < value && this->root->getRightChild == nullptr)		//check to see if node's value is less than value passed and if its
	{																					//right child is null
		TreeNode* node = new TreeNode(value);											//dynamically allocate a new TreeNode
		this->root->setRightChild(node);												//have the right child of the current node point to the dynamically allocated node
	}
	else if(this->root->getValue() > value && this->root->getLeftChild != nullptr)		//check to see if the value passed is smaller than the current noed's value
	{																					//and that its left child is pointing to nullptr
		this->insert(this->root->getLeftChild(), value);								//pass the current's node left child and value into insert
	}
	else
	{
		TreeNode* node = new TreeNode(value);											//dynamically allocate a new TreeNode with value set as the node's value
		this->root->setLeftChild(node);													//have the dynamically allocated node become the left child of the current node 
	}
}
int BSTree::remove(int value)
{}
void BSTree::preOrder()
{}
void BSTree::inOrder()
{}
void BSTree::postOrder()
{}
bool BSTree::isEmpty()
{
	if (this->members == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}