#include <vector>
#include <string>

class Node
{
public:
    Node(const std::string& label);
    ~Node();

private:
    std::string label;
};

class Edge
{
public:
    Edge(Node& firstNode, Node& secondNode);
    ~Edge();

private:
    std::vector<Node> connectedNodes;
};

class Graph
{
public:
    Graph();
    ~Graph();

    void addNode();
    void removeNode();

private:
    std::vector<Edge> edges;
};
