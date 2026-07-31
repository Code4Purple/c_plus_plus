#include <iostream>

/*
    Tree Traversal - the order in which you visit every node in a tree.

        In-order   (left, node, right)  -> visits a BST in SORTED ascending order
        Pre-order  (node, left, right)  -> useful for copying/serializing a tree
        Post-order (left, right, node)  -> useful for safely deleting a tree
                                            (children processed before the parent)
*/

struct Node {
    int value;
    Node* left;
    Node* right;
};

void inOrder(Node* node) {
    if (node == nullptr) return;
    inOrder(node->left);
    std::cout << node->value << " ";
    inOrder(node->right);
}

void preOrder(Node* node) {
    if (node == nullptr) return;
    std::cout << node->value << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void postOrder(Node* node) {
    if (node == nullptr) return;
    postOrder(node->left);
    postOrder(node->right);
    std::cout << node->value << " ";
}

int main(){

    //         50
    //        /  \
    //       30    70
    //      /  \
    //     20   40
    Node n20{20, nullptr, nullptr};
    Node n40{40, nullptr, nullptr};
    Node n70{70, nullptr, nullptr};
    Node n30{30, &n20, &n40};
    Node n50{50, &n30, &n70};

    std::cout << "In-order:   "; inOrder(&n50);   std::cout << "\n"; // 20 30 40 50 70
    std::cout << "Pre-order:  "; preOrder(&n50);  std::cout << "\n"; // 50 30 20 40 70
    std::cout << "Post-order: "; postOrder(&n50); std::cout << "\n"; // 20 40 30 70 50

    return 0;
}
