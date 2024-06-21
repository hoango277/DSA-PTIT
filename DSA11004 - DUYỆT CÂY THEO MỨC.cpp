#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
struct Node{
    int val;
    Node *left, *right;
    Node (int x)
    {
        val = x;
        left = right = NULL;
    }
};

void makeNode(Node *root, int u, int v, char c)
{
    if(c == 'L')
    {
        root->left = new Node(v);
    }
    else
        root->right = new Node(v);
}

void insert(Node *root, int u, int v, char c)
{
    if(root == NULL)
        return;
    if(root -> val == u)
    {
        makeNode(root, u, v, c);
    }
    insert(root->left, u, v, c);
    insert(root->right, u, v,c);
 }


void levelOrder(Node *root)
{
    queue<Node*> q;
    q.push(root);
    while(q.size())
    {
        Node* tmp = q.front(); q.pop();
        cout << tmp-> val << ' ';
        if(tmp->left != NULL)
            q.push(tmp->left);
        if(tmp->right != NULL)
            q.push(tmp->right);
    }
    cout << endl;
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
        Node *root = NULL;
        while(n--)
        {
            int x, y;
            char c;
            cin >> x >> y >> c;
            if(root == NULL)
            {
                root = new Node(x);
                makeNode(root, x, y, c);
            }
            else
            {
                insert(root, x, y, c);
            }
        }
        levelOrder(root);
    }   
}