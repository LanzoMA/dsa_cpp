#include "bst.hpp"
#include <iostream>

int main() {
    BST tree;
    tree.add(Node(5));
    tree.traverse(tree.getRoot());
    return 0;
}