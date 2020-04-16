#pragma once
#include "BSTree.h"
class TreeNode
{
	//friend class BSTree;
private:
	int value;
	TreeNode* leftChild;
	TreeNode* rightChild;
public:
	TreeNode();
	TreeNode(int val);
	void setValue(int value);
	int getValue();
	TreeNode* getLeftChild();
	TreeNode* getRightChild();
	void setLeftChild(TreeNode* left);
	void setRightChild(TreeNode* right);
};

