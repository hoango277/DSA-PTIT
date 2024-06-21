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

bool check(Node* root1, Node* root2)
{
    if(root1 == NULL && root2 == NULL) return true;
    if(root1 && root2)
    {
        return (root1->val == root2->val) && (check(root1->left, root2->left)) && (check(root1->right, root1->right));
    }
    return false;
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
        Node *root1 = NULL;
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
            if(root1 == NULL)
            {
                root1 = new Node(x);
                makeNode(root1, y, tmp);
            }
            else
            {
                insert(root1, x, y, tmp);
            }
        }
        cin >> n;
        cin.ignore();
        Node *root2 = NULL;
        getline(cin, s);
        stringstream ss1(s);
        tmp.clear();
        while(ss1 >> tmp)
        {
            int x = stoll(tmp) ;
            ss1 >> tmp;
            int y = stoll(tmp);
            ss1 >> tmp;
            if(root2 == NULL)
            {
                root2 = new Node(x);
                makeNode(root2, y, tmp);
            }
            else
            {
                insert(root2, x, y, tmp);
            }
        }
        if(check(root1, root2))
            cout << "1\n";
        else
            cout <<"0\n";
    }  
}