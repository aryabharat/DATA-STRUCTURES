#include <bits/stdc++.h>
using namespace std;
#define COUNT 10

struct node
{
  node* left;
  node* right;
  int data;
};

node* get_new_node(int data)
{
  node* temp =  new node;
  temp->data = data;
  temp -> left = NULL;
  temp -> right = NULL;
}

node* insert(node* root, int data)
{

    if(root == NULL)
    {
        root = get_new_node(data);
        return root;
    }
    else if(data <= root -> data)
        root -> left = insert(root -> left, data);

    else
        root -> right = insert(root -> right, data);

    return root;
}


void print2DUtil(node *root, int space)
{
    // Base case
    if (root == NULL)
        return;

    // Increase distance between levels
    space += COUNT;

    // Process right child first
    print2DUtil(root->right, space);

    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);

    // Process left child
    print2DUtil(root->left, space);
}

// Wrapper over print2DUtil()
void print2D(node *root)
{
   // Pass initial space count as 0
   print2DUtil(root, 0);
}

int height(node*root)
{
  if(root == NULL)
    return -1;
  int l_tree = height(root -> left);
  int r_tree  = height(root -> right);
  return max(l_tree, r_tree)+1;
}

pair <int, int> heightDiameter(node* root)
{
    if (root == NULL)
      {
        pair <int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
      }
     pair <int, int> leftans = heightDiameter(root -> left);
     pair <int, int>  rightans = heightDiameter(root -> right);
     int ld = leftans.second;
     int lh = leftans.first;
     int rd = rightans.second;
     int rh = rightans.first;

     int height = 1 + max(lh, rh);
     int diameter = max(lh + rh, max(ld, rd));
     pair <int, int> p;
     p.first = height;
     p.second = diameter;
     return p;
}

int main()
{
  node * root = NULL;
  root =  insert(root, 50);
  root =  insert(root, 61);
  root =  insert(root, 52);
  root =  insert(root, 53);
  root =  insert(root, 54);
  root =  insert(root, 49);
  root =  insert(root, 51);
  root =  insert(root, 62);
  root =  insert(root, 63);
  pair <int, int> p = heightDiameter(root);

  cout << "height= " << p.first;
  //cout << height(root);
  print2D(root);
  return 0;

}
