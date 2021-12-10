#include<bits/stdc++.h>

using namespace std;

class node 
{
public:
    int data;
    node * left;
    node * right;

    node(int d) 
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node * insertnode(node * root, int x)
{
    if(!root)
    {
        return new node(x);
    }

    if(root->data > x) root->left = insertnode(root->left, x);
    if(root->data <= x) root->right = insertnode(root->right, x);

    return root;
}

node * removenode(node * root, int x)
{
    if(root == NULL) return NULL;

    if(x < root->data) root->left = removenode(root->left, x);
    else if(x > root->data) root->right = removenode(root->right, x);
    else
    {
        if(root->left == NULL && root->right == NULL) // if root has two childs
        {
            delete(root);
            return NULL;
        }

        if(root->left == NULL) // if root has one child ie right
        {
            node * temp = root->right;
            delete(root);
            return temp;
        }

        if(root->right == NULL) // if root has one child ie left
        {
            node * temp = root->left;
            delete(root);
            return temp;
        }

        // if root has two childs

        node * temp = root->right; 
        while(temp->left) temp = temp->left;

        root->data = temp->data;
        root->right = removenode(root->right, root->data);
    }

    return root;
}

void levelorder(node * root)
{   
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node * temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            if(!q.empty()) q.push(NULL);
            cout << endl;
            continue;
        }
        
        cout << temp->data << " ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

int main()
{
    node * bst = new node(100);

    insertnode(bst, 50);
    insertnode(bst, 150);
    insertnode(bst, 25);
    insertnode(bst, 75);
    insertnode(bst, 10); 

    bst = removenode(bst, 50);

    levelorder(bst);

}