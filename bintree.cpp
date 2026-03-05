#include <iostream>
using namespace std;
#include <vector>
#include<queue>

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int val)
  {
    data = val;
    left = right = NULL;
  }
};

static int idx = -1;

Node *buildTree(vector<int> preorder)
{
  idx++;

  if (idx >= preorder.size() || preorder[idx] == -1)
  {
    return NULL;
  }

  Node *root = new Node(preorder[idx]);

  root->left = buildTree(preorder); // left node

  root->right = buildTree(preorder); // right node

  return root;
}

void preOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

void postOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  postOrder(root->left);
  
  postOrder(root->right);

  cout << root->data << " ";
}

void levelOrder(Node* root){
  queue<Node*> q;

  q.push(root);

  while(q.size() > 0){
    Node * curr=q.front();
    q.pop();
     
    cout<<curr->data<<" ";

    if(curr->left!=NULL){
      q.push(curr->left);
    }

    if(curr->right!=NULL){
      q.push(curr->right);
    }
  }


}


int main()
{

  vector<int> preorder = {1, 2, -1, 3, 4, -1, 5, -1, -1};

// idx=-1;
  Node *root = buildTree(preorder);

  // preOrder(root);

  // cout << endl;

  // inOrder(root);

  // cout << endl;

  // postOrder(root);

  // cout << endl;

  levelOrder(root);

  cout << endl;

  // cout<<root->data<<endl;

  // cout<<root->left->data<<endl;
  // cout<<root->right->data<<endl;
  return 0;
}
