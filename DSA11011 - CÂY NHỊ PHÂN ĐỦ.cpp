#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
struct Node{
    int val;
    Node *left, *right;
    Node(int x)
    {
        val  = x;
        left = right = NULL;
    }
};

void makeNode(Node *root, int v, string tmp)
{
    if(tmp == "L")
        root->left = new Node(v);
    else
        root->right = new Node(v);
}

void insert(Node *root, int u, int v, string tmp)
{
    if(root == NULL) return;
    if(root-> val == u)
        makeNode(root, v, tmp);
    insert(root->left, u, v, tmp);
    insert(root->right, u, v, tmp);
}

bool isFullTree(Node *root)
{
    if(root == NULL)
        return true;
    if((root->left && root->right == NULL) || (root->left == NULL && root->right))
        return false;
    return isFullTree(root->left) && isFullTree(root->right);
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
        cin.ignore();
        Node *root = NULL;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp = "";
        while(ss >> tmp)
        {
            int x = stoll(tmp) ;
            ss >> tmp;
            int y = stoll(tmp);
            ss >> tmp;
            if(root == NULL)
            {
                root = new Node(x);
                makeNode(root, y, tmp);
            }
            else
            {
                insert(root, x, y, tmp);
            }
        }
        if(isFullTree(root))
            cout << "1\n";
        else
            cout <<"0\n";
    }  
}