#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
struct Node{
    int val;
    Node *left, *right;
    Node(int x)
    {
        val = x;
        left = right = NULL;
    }
};

void insert(Node * &root, int x)
{
    if(root == NULL) root = new Node(x);
    else if (root->val > x) insert(root->left, x);
    else if (root->val <= x) insert(root->right, x);
}

void preOrder(Node *root)
{
    if(root == NULL) return;
    preOrder(root->left);
    preOrder(root->right);
    cout << root->val << ' ';
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        Node* root = NULL;
        while(n--)
        {
            int x;
            cin >> x;
            insert(root, x);
        }
        preOrder(root);
        cout << endl;
    }   
}