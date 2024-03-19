#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        // purana level complete ho chuka h
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            { // it has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
    }
}
void inOrder(node *root)
{ // LNR
    // base case

    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node *root)
{ //  NLR
    // base case

    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root)
{ //  LRN
    // base case

    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
node *insertIntoBST(node *&root, int d)
{
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}
node *minValue(node *root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
node *maxValue(node *root)
{
    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
node *deleteFromBST(node *root, int d)
{
    // base case
    if (root == NULL)
        return root;
    if (root->data == d)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child
        if (root->left != NULL && root->right == NULL)
        {
            node* temp = root->left;
            delete root;
            return temp;
        }
          if (root->left == NULL && root->right != NULL)
        {
            node* temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
         if (root->left != NULL && root->right != NULL)
        {
            int mini = minValue(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right , mini);
            return root;
        }
    }
    else if (root->data > d)
    {
        root->left = deleteFromBST(root->left, d);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, d);
        return root;
    }
}

void takeInput(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        insertIntoBST(root, data);
        cin >> data;
    }
}
int main()
{
    node *root = NULL;
    cout << "Enter data to create BST " << endl;
    takeInput(root);
    cout << "print the level order transversal " << endl;
    levelOrderTraversal(root);

    cout << "inorder Transversal is :" << endl;
    inOrder(root);
    cout << endl;
    cout << "preorder Transversal is :" << endl;
    preOrder(root);
    cout << endl;
    cout << "postorder Transversal is :" << endl;
    postOrder(root);
    cout << endl;
}
// 10 8 21 7 27 5 4 3 -1