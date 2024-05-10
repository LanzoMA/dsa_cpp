#include "bst.hpp"
#include <iostream>

BST::BST() {}

bool BST::isEmpty() {
    return (root == nullptr) ? true : false;
}

Node* BST::getRoot() {
    return isEmpty() ? nullptr : root;
}

void BST::traverse(Node* node) {
    if (node->left != nullptr) traverse(node->left);

    std::cout << node->data << '\n';

    if (node->right != nullptr) traverse(node->right);
}

Node* BST::find(Node* node, Node* search) {
    if (node->data == search->data) return node;

    if (search->data < node->data ) 
        return (node->left == nullptr) ? nullptr : find(node->left, search);
    
    return (node->right == nullptr) ? nullptr : find(node->right, search);
}

void BST::add(Node* node) {
    if (isEmpty()) {
        root = node;
        return;
    }

    addLeafNode(root, node);
}

void BST::addLeafNode(Node* node, Node* newNode) {
    if (newNode->data == node->data) {
        std::cout << "Error: adding duplicate value to tree.\n";
        return;
    }

    if (newNode->data < node->data)
        (node->left == nullptr) ? 
            node->left = newNode : addLeafNode(node->left, newNode);

    if (newNode->data > node->data)
        (node->right == nullptr) ? 
            node->right = newNode : addLeafNode(node->right, newNode);
}


void BST::remove(Node* node) {
    if (isEmpty()) {
        std::cout << "Error: unable to remove items from an empty tree.\n";
        return;
    }

    Node* deletedNode = find(root, node);

    if (deletedNode == nullptr) {
        std::cout << "Error: no matching node to be deleted has been found.\n";
        return;
    }

    if (deletedNode->left == nullptr && deletedNode->right == nullptr) {
        std::cout << "Node with no children removed.\n";
        return;
    }

    if (deletedNode->left == nullptr || deletedNode->right == nullptr) {
        std::cout << "Node with one child removed.\n";
        return;
    }

    std::cout << "Node with two children removed.\n";
}