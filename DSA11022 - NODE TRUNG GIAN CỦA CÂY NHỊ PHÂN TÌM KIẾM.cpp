#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
struct Node{
    int val;
    Node* left , *right;
    Node (int x)
    {
        val = x;
        left = right = NULL;
    }
};

void insert(Node* &root, int x)
{
    if(!root) root = new Node(x);
    else if(root->val > x) insert(root->left, x);
    else if (root-> val <= x) insert(root->right, x);
}

int cnt = 0;
void pre(Node *root)
{
    if(root == NULL) return;
    if(root && (root->left || root->right))
        cnt++;
    pre(root->left);
    pre(root->right);
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
        cnt = 0;
        cin >> n;
        Node *root = NULL;
        while(n--)
        {
            int x;
            cin >> x;
            insert(root, x);
        }
        pre(root);
        cout << cnt << endl;
    }   
}