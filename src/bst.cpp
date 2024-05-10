#include "bst.hpp"
#include <iostream>

BST::BST() {}

bool BST::isEmpty() {
    (root == nullptr) ? true : false;
}

Node* BST::getRoot() {
    isEmpty() ? nullptr : root;
}

void BST::traverse(Node* node) {
    std::cout << node->data << '\n';

    if (node->left != nullptr) traverse(node->left);
    if (node->right != nullptr) traverse(node->right);
}

Node* BST::find(Node* node, Node* search) {
    if (node->data == search->data) return node;

    if (search->data < node->data ) {
        if (node->left == nullptr) return nullptr;
        else return find(node->left, search);
    }

    if (node->right == nullptr) return nullptr;
    else return find(node->right, search);
}

void BST::add(Node* node) {
    if (isEmpty()) {
        root = node;
        return;
    }

    addLeafNode(root, node);
}

void addLeafNode(Node* node, Node* newNode) {
    if (newNode->data == node->data) {
        std::cout << "Error: adding duplicate value to tree.\n";
        return;
    }

    if (newNode->data < node->data) {
        if (node->left == nullptr) node->left = newNode;
        else addLeafNode(node->left, newNode);
    }

    if (newNode->data > node->data) {
        if (node->right == nullptr) node->right = newNode;
        else addLeafNode(node->right, newNode);
    }
}


void BST::remove(Node& searchNode) {
    if (isEmpty()) {
        std::cout << "Error: unable to remove items from an empty tree\n";
        return;
    }
}