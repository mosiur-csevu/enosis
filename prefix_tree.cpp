#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char data;
    Node *left;
    Node *right;

    Node(char data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


void traverse_node(Node* node) { /// prefix
    if(node->left!=NULL) {
        traverse_node(node->left);
        cout << node->data;
    }
    if(node->right != NULL) {
        traverse_node(node->right);
    }
    if(node->left==NULL)
        cout << node->data;
}

int main()
{
    string postfix = "26*38/+";

    int len = postfix.size()-1;
    stack<Node*>st;

    /// create expression tree
    Node* parent = new Node(postfix[len]);
    st.push(parent);

    for(int i=len-1; i>=0; i--)
    {
        Node* node = new Node(postfix[i]);

        if(postfix[i]=='+' || postfix[i]=='-' || postfix[i]=='*' || postfix[i]=='/')
        {
            if(st.top()->right==NULL)
            {
                //cout << st.top()->data << " -right- " << node->data << endl;
                st.top()->right = node;

                st.push(node);
            }
            else if(st.top()->left==NULL)
            {
                st.top()->left = node;
                //cout << st.top()->data << " -left- " << node->data << endl;
                st.pop();
                st.push(node);
            }
        }

        else
        {
            if(st.top()->right==NULL)
            {
                st.top()->right = node;
                //cout << st.top()->data << " -right- " << node->data << endl;
            }
            else if(st.top()->left==NULL)
            {
                st.top()->left = node;
                //cout << st.top()->data << " -left- " << node->data << endl;
                st.pop();
            }

        }
    }

    traverse_node(parent);
    return 0;
}

