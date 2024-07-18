#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int data) {
        if (node == nullptr) {
            return new Node(data);
        }
        if (data < node->data) {
            node->left = insert(node->left, data);
        } else if (data > node->data) {
            node->right = insert(node->right, data);
        }
        return node;
    }

    Node* search(Node* node, int data) {
        if (node == nullptr || node->data == data) {
            return node;
        }
        if (data < node->data) {
            return search(node->left, data);
        }
        return search(node->right, data);
    }

    Node* findMin(Node* node) {
        while (node && node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* deleteNode(Node* node, int data) {
        if (node == nullptr) return node;

        if (data < node->data) {
            node->left = deleteNode(node->left, data);
        } else if (data > node->data) {
            node->right = deleteNode(node->right, data);
        } else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            Node* temp = findMin(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

    void inorder(Node* node) {
        if (node == nullptr) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (node == nullptr) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

public:
    BST() : root(nullptr) {}

    void insert(int data) {
        root = insert(root, data);
    }

    bool search(int data) {
        return search(root, data) != nullptr;
    }

    void deleteNode(int data) {
        root = deleteNode(root, data);
    }

    void inorder() {
        inorder(root);
        cout << endl;
    }

    void preorder() {
        preorder(root);
        cout << endl;
    }

    void postorder() {
        postorder(root);
        cout << endl;
    }
};

int main() {
    BST bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    cout << "In-order traversal: ";
    bst.inorder();

    cout << "Pre-order traversal: ";
    bst.preorder();

    cout << "Post-order traversal: ";
    bst.postorder();

    cout << "Search 40: " << (bst.search(40) ? "Found" : "Not Found") << endl;

    bst.deleteNode(20);
    cout << "In-order traversal after deleting 20: ";
    bst.inorder();

    bst.deleteNode(30);
    cout << "In-order traversal after deleting 30: ";
    bst.inorder();

    bst.deleteNode(50);
    cout << "In-order traversal after deleting 50: ";
    bst.inorder();

    return 0;
}
