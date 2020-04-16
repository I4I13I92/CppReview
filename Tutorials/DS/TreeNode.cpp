#include <iostream>

#include "TreeNode.h"

TreeNode::TreeNode()
{
	this->value = 0;
	this->leftChild = nullptr;
	this->rightChild = nullptr;
}
TreeNode::TreeNode(int val)
{
	this->value = val;
	this->leftChild = nullptr;
	this->rightChild = nullptr;
}

void TreeNode::setValue(int val)
{
	this->value = val;
}

int TreeNode::getValue()
{
	if (this != nullptr)
	{
		return this->value;
	}
	else
	{
		std::cout << "no value, node is null.\n";
		return 0;
	}
}
void TreeNode::setLeftChild(TreeNode* left)
{
	this->leftChild = left;
}
void TreeNode::setRightChild(TreeNode* right)
{
	this->rightChild = right;
}
TreeNode* TreeNode::getLeftChild()
{
	return this->leftChild;
}
TreeNode* TreeNode::getRightChild()
{
	return this->rightChild;
}