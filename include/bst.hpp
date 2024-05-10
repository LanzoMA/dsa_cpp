struct Node {
    int data;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(const int data) {
        this->data = data;
    }
};

class BST {
public:
    BST();

    bool isEmpty();

    Node* getRoot();
    
    void traverse(Node* node);
    Node* find(Node* node, Node* search);

    void add(Node* node);
    void remove(Node* node);

private:
    Node* root = nullptr;

    void addLeafNode(Node* node, Node* newNode);
};