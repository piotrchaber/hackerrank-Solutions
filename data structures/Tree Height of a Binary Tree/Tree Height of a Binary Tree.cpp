// github.com/piotrchaber

    int height(Node* root) {
        if(root == nullptr) return -1;
        int leftHeight = height(root->left) + 1;
        int rightHeight = height(root->right) + 1;
        return std::max(leftHeight, rightHeight);
    }