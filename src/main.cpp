#include "bst.hpp"
#include <iostream>

int main() {
    BST tree;

    tree.add(&Node(5));
    tree.add(&Node(2));
    tree.add(&Node(3));
    tree.add(&Node(8));

    tree.traverse(tree.getRoot());
    
    return 0;
}