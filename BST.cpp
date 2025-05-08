#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int k) : key(k), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int key) {
        if (node == nullptr) {
            return new Node(key);
        }
        if (key < node->key) {
            node->left = insert(node->left, key);
        } else if (key > node->key) {
            node->right = insert(node->right, key);
        }
        return node;
    }

    bool search(Node* node, int key) {
        if (node == nullptr) return false;
        if (node->key == key) return true;
        if (key < node->key) return search(node->left, key);
        else return search(node->right, key);
    }

    void inorder(Node* node) {
        if (node == nullptr) return;
        inorder(node->left);
        cout << node->key << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (node == nullptr) return;
        cout << node->key << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (node == nullptr) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->key << " ";
    }

public:
    BST() : root(nullptr) {}

    void insert(int key) {
        root = insert(root, key);
        cout << "Inserted " << key << " into BST.\n";
    }

    bool search(int key) {
        return search(root, key);
    }

    void inorder() {
        cout << "Inorder traversal: ";
        inorder(root);
        cout << endl;
    }

    void preorder() {
        cout << "Preorder traversal: ";
        preorder(root);
        cout << endl;
    }

    void postorder() {
        cout << "Postorder traversal: ";
        postorder(root);
        cout << endl;
    }
};

int main() {
    BST tree;
    int option, key;
    do {
        cout << "\nBST Operations Menu:\n";
        cout << "1. Insert\n2. Search\n3. Inorder Traversal\n4. Preorder Traversal\n5. Postorder Traversal\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;
        switch (option) {
            case 1:
                cout << "Enter key to insert: ";
                cin >> key;
                tree.insert(key);
                break;
            case 2:
                cout << "Enter key to search: ";
                cin >> key;
                if (tree.search(key))
                    cout << key << " found in BST.\n";
                else
                    cout << key << " not found in BST.\n";
                break;
            case 3:
                tree.inorder();
                break;
            case 4:
                tree.preorder();
                break;
            case 5:
                tree.postorder();
                break;
            case 0:
                cout << "Exiting BST menu.\n";
                break;
            default:
                cout << "Invalid option. Try again.\n";
        }
    } while (option != 0);
    return 0;
}
