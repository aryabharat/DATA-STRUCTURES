#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *root = NULL;
node *getNewNode(int data)
{
    node *temp = new node();
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void insert(node *root, int data)
{
    if (root == NULL)
    {
        root = getNewNode(data);
    }
    else if (data >= root->data)
    {
        insert(root->right, data);
    }
    else
    {
        insert(root->left,data);
    }
}
int main()
{
    insert(root, 10);
    return 0;
}
