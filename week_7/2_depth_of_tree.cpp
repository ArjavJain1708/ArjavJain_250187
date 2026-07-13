class solution{
    public:
int height(Node *root) {
    if (root == nullptr)
        return -1;
        
    int lHeight = height(root->left);
    int rHeight = height(root->right);

    return max(lHeight, rHeight) + 1;
}
};
