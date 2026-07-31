#include <iostream>

/*
    Binary Search Tree (BST) - a binary tree with an ordering rule:
                                    left subtree  < node's value
                                    right subtree > node's value
                                This rule holds true for EVERY node, not just the root.
                                Makes search/insert/delete O(log n) on average,
                                same idea as binary search but on a tree.
                                Worst case O(n) if the tree becomes unbalanced
                                (e.g. inserting already-sorted data in a line).
*/

struct Node {
    int value;
    Node* left;
    Node* right;
};

Node* insert(Node* node, int value) {
    if (node == nullptr) {
        return new Node{value, nullptr, nullptr}; // found the empty spot
    }
    if (value < node->value) {
        node->left = insert(node->left, value);
    } else {
        node->right = insert(node->right, value);
    }
    return node;
}

bool contains(Node* node, int target) {
    if (node == nullptr) {
        return false; // fell off the tree, not found
    }
    if (node->value == target) {
        return true;
    }
    return (target < node->value) ? contains(node->left, target) : contains(node->right, target);
}

int main(){

    Node* root = nullptr;
    for (int value : {50, 30, 70, 20, 40, 60, 80}) {
        root = insert(root, value);
    }

    std::cout << contains(root, 40) << " <- is 40 in the tree?\n";  // 1 (true)
    std::cout << contains(root, 100) << " <- is 100 in the tree?\n"; // 0 (false)

    return 0;
}
