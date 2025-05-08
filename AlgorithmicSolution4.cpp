#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to find LCA
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    while (root != nullptr) {
        if (p->val < root->val && q->val < root->val) {
            root = root->left; // both are on the left
        } else if (p->val > root->val && q->val > root->val) {
            root = root->right; // both are on the right
        } else {
            return root; // split point = LCA
        }
    }
    return nullptr;
}

int main() {
    // Constructing this BST:
    //        6
    //       / \
    //      2   8
    //     / \ / \
    //    0  4 7  9
    //      / \
    //     3   5

    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    TreeNode* p = root->left;        // Node 2
    TreeNode* q = root->left->right; // Node 4

    TreeNode* lca = lowestCommonAncestor(root, p, q);
    cout << "LCA of " << p->val << " and " << q->val << " is: " << lca->val << endl;

    return 0;
}
