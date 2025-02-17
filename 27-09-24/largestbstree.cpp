#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int ans = 0; 
int res = 0;  

void check(Node* node) {
    if (!node) return; 
    if (!node->left && !node->right) {
        ans = max(ans, 1);
        return;
    }
    bool chkleft = !node->left || (node->left->data < node->data);
    bool chkRight = !node->right || (node->right->data > node->data);

    if (!chkleft || !chkRight) {
        res = max(res, ans); 
        return;
    }
    ans++;
    check(node->left);
    check(node->right);
    ans += 2;
    res = max(res, ans);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(20);
    check(root);
    cout<<res<<'\n';

    return 0;
}
