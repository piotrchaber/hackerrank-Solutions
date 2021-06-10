// github.com/piotrchaber

    void levelOrder(Node * root) {
        queue<Node*> qn;
        qn.push(root);
        while(!qn.empty()) {
            std::cout << qn.front()->data << " ";
            if(qn.front()->left) qn.push(qn.front()->left);
            if(qn.front()->right) qn.push(qn.front()->right);
            qn.pop();
        }
    }