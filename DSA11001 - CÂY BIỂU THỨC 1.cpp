#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

struct Node{
    char val;
    Node  *left, *right;
    Node (char x)
    {
        val = x;
        left = right = NULL;
    }
};


bool check(char c)
{
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return 1;
    return 0;
}

void inOrder(Node* root)
{
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->val;
    inOrder(root->right);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<Node*> st;
        for(char i : s)
        {
            if(!check(i))
            {
                st.push(new Node(i));
            }
            else
            {
                Node* tmp = new Node(i);
                Node *t1 = st.top();
                st.pop();
                Node *t2 = st.top();
                st.pop();
                tmp -> left = t2;
                tmp -> right = t1;
                st.push(tmp);
            }
        }
        Node* root = st.top();
        inOrder(root);
        cout <<endl;
    }   
}