// github.com/piotrchaber

    Node* insert(Node* root, int data) {
        if(root == nullptr) {
            Node* inserted = new Node{data};
            root = inserted;
        }
        if(root->data > data) root->left = insert(root->left, data);
        if(root->data < data) root->right = insert(root->right, data);
        return root;
    }