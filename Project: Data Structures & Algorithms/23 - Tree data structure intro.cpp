#include <iostream>

/*
    Tree - a special kind of graph: connected, no cycles, and has one "root"
           node that everything branches down from.

        root     - the top node, no parent
        parent   - a node one level up from another
        child    - a node one level down from another
        leaf     - a node with no children
        height   - number of edges on the longest path from root to a leaf
        depth    - number of edges from the root down to a specific node

    A "binary tree" is a tree where every node has at most 2 children,
    usually called "left" and "right".
*/

struct Node {
    int value;
    Node* left;
    Node* right;
};

int main(){

    //         10          <- root
    //        /  \
    //       5    15       <- children of root, both leaves
    Node root{10, nullptr, nullptr};
    Node left{5, nullptr, nullptr};
    Node right{15, nullptr, nullptr};
    root.left = &left;
    root.right = &right;

    std::cout << root.value << " <- root\n";                 // 10
    std::cout << root.left->value << " <- left child\n";      // 5
    std::cout << root.right->value << " <- right child\n";    // 15
    std::cout << (root.left->left == nullptr) << " <- left child is a leaf\n"; // 1 (true)

    return 0;
}
