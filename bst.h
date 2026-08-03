struct Node { int val; Node* l; Node* r; };
class BST {
    Node* root;
public:
    BST() : root(nullptr) {}
    void insert(int v) { root = new Node{v, nullptr, nullptr}; }
};