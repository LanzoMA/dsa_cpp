#include "graph.hpp"

Edge::Edge(Node* firstNode, Node* secondNode) {
    connectedNodes[0] = firstNode;
    connectedNodes[1] = secondNode;
}