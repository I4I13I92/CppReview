#pragma once

#include "TreeNode.h"

class BSTree
{
	friend class TreeNode;
private:
	TreeNode* root;
	int members;
public:
	BSTree(int val);
	~BSTree();
	void insert(TreeNode* node, int value);
	int remove(int value);
	bool isEmpty();
	void preOrder();
	void inOrder();
	void postOrder();
};

