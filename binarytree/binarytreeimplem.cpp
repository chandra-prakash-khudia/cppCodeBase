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
node *buildTree(node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "insert the data for  inserting in left of : " << data << endl;
    root->left = buildTree(root->left);

    cout << "insert the data for  inserting in right of : " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

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

void bulidFromLevelOrder(node *&root)
{
    queue<node *> q;
    cout << "enter the data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "enter left node for : " << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "enter right node for : " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;

    //     // create a tree
    //     root = buildTree(root);

        // cout<<"print the level order transversal "<<endl ;
        // levelOrderTraversal(root);

    //     cout<<"inorder Transversal is :"<<endl;
    //     inOrder(root);
    // cout<<endl;
    //     cout<<"preorder Transversal is :"<<endl;
    //     preOrder(root);
    // cout<<endl;
    //     cout<<"postorder Transversal is :"<<endl;
    //     postOrder(root);
    //     cout<<endl;
    bulidFromLevelOrder(root);
         cout<<"print the level order transversal "<<endl ;
        levelOrderTraversal(root);

        cout<<"inorder Transversal is :"<<endl;
        inOrder(root);
    cout<<endl;
        cout<<"preorder Transversal is :"<<endl;
        preOrder(root);
    cout<<endl;
        cout<<"postorder Transversal is :"<<endl;
        postOrder(root);
        cout<<endl;
        
        cout<<"print the level order transversal "<<endl ;
        levelOrderTraversal(root);

}

// 1 2 4 -1 -1 6 -1 -1 3 5 -1 -1 7 -1 -1