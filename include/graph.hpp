#include <vector>
#include <string>

class Node {
public:
    Node(const std::string& label);
    ~Node();

private:
    std::string label;
};

class Edge {
public:
    Edge(Node* firstNode, Node* secondNode);

private:
    Node* connectedNodes[2];
};

class Graph {
public:
    Graph();

    void addNode(const Node& node);
    void removeNode();

private:
    std::vector<Edge> edges;
    int numberOfNodes = 0;
};
