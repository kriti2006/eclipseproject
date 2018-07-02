/*
 * Tree.h
 *
 *  Created on: 02-Jul-2018
 *      Author: kriti
 */

#ifndef TREE_H_
#define TREE_H_
#include<map>
#include<iostream>
#include<string>
using namespace std;
class Node {
public:
	Node (string key, int value) {
		left = NULL;
		right = NULL;
		data.insert(pair<string, int>(key, value));
	}

	int getValue(string key) const {
		return data.at(key);
	}

	void setValue(string key, int value) {
		data.insert(pair<string, int>(key, value));
	}

	const Node*& getLeft() const {
		return left;
	}

	void setLeft(const Node*& left) {
		this->left = left;
	}

	const Node*& getRight() const {
		return right;
	}

	void setRight(const Node*& right) {
		this->right = right;
	}

private:
	map<string,int> data;
	Node *left;
	Node *right;
};


class Tree {
public:
	string MAIN_KEY = "data";
	Tree(int value) {
		this->root = new Node(MAIN_KEY, value);
	}
	virtual ~Tree();
	const Node*& getRoot() {
		return root;
	}
	virtual void insert(int key, int value)=0;
protected:
	Node * root;
};

#endif /* TREE_H_ */
