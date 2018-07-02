/*
 * Tree.cpp
 *
 *  Created on: 02-Jul-2018
 *      Author: kriti
 */

#include "Tree.h"

class BST : Tree {

	void insert(int value) {
		Node * node = new Node(MAIN_KEY, value);
		insert(root, node);
	}

private:
	void insert(Node *parent, Node* node) {
		if (parent == NULL) {
			return;
		}
		if (parent->getValue(MAIN_KEY) < node->getValue(MAIN_KEY)) {
			if (parent->left == NULL) {
				parent->left = node;
			}
			else {
				insert(parent->left, node);
			}
		} else {
			if (parent->right == NULL) {
				parent->right = node;
			}
			else {
				insert(parent->right, node);
			}
		}
	}
};

Tree::~Tree() {
	// TODO Auto-generated destructor stub
}

