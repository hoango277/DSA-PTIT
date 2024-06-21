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


int height(Node* root)
{
    if(root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}

bool check(Node *root, int level, int h)
{
    if(root == NULL) return true;
    if(!root->left && !root->right && level < h)
         return false;
    return check(root->left, level+1, h) && check(root->right, level+1, h);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        // ans = 0;
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
        if(check(root, 1, height(root)))
            cout << "1\n";
        else
            cout <<"0\n";
    }  
}