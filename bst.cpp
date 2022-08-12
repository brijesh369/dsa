/*#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node *insertBST(Node *root, int val)
{
    if (root = NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }
}
int main()
{
    Node *root = NULL;
    root = insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    // print inorder
    inorder(root);
    return 0;
}*/
#include <iostream>
#include <vector>

using std::cout; using std::vector;
using std::endl; using std::string;

struct TreeNode {
    int key;
    struct TreeNode *left{};
    struct TreeNode *right{};
};

void insertNode(TreeNode *&root, const int k) {
    if (root == nullptr) {
        root = new TreeNode;
        root->key = k;
        root->left = nullptr;
        root->right = nullptr;
    } else {
        if (k < root->key)
            insertNode(root->left, k);
        else
            insertNode(root->right, k);
    }
}

void printTreeInorder(TreeNode *n) {
    if (n != nullptr) {
        printTreeInorder(n->left);
        cout << n->key << "; ";
        printTreeInorder(n->right);
    }
}

int main() {
    std::vector<int> v1 {11, 23, 3, 5, 9, 15, 2, 20};

    TreeNode *root = nullptr;

    for (const auto &item : v1) {
        insertNode(root, item);
    }

    printTreeInorder(root);
    cout << endl;

    return EXIT_SUCCESS;
}
