#include "myBST.h"

twoChieldsNode** myBST::find(int &key, twoChieldsNode** iter)
{
    if(!(*iter)) return NULL;
    if ((*iter)->key == key) return iter;
    else if (key < (*iter)->key) return find(key, &(*iter)->left);
    else return find(key, &(*iter)->right);
}

void myBST::eraseAll(twoChieldsNode* root)
{
}

myBST::myBST(bool deneme)
{
    root = new twoChieldsNode(4);

    root->left = new twoChieldsNode(6);
    root->right = new twoChieldsNode(12);

    root->left->left = new twoChieldsNode(45);
    
    root->right->left = new twoChieldsNode(7);
    root->right->right = new twoChieldsNode(1);
}

myBST::~myBST()
{
}

void myBST::add(int key)
{
    twoChieldsNode** iter = find(key, &root);
    (*iter) ? (*iter) = new twoChieldsNode(key) : NULL;
}

void myBST::remove(int key)
{

}

void myBST::treePreorderTraverser(twoChieldsNode* iter)
{
    if (iter==NULL) return;
    traversedList.push_back(iter);
    treePreorderTraverser(iter->left);
    treePreorderTraverser(iter->right);
}

void myBST::treePreorderTraverserWithStack()
{
    twoChieldsNode* iter = root;
    std::stack<twoChieldsNode*>myStack;
    myStack.push(iter);
    while (!myStack.empty())
    {
        if (!myStack.empty()) {
            traversedList.push_back(myStack.top());
            iter = myStack.top();
            myStack.pop();
        }
        if(!iter->right) myStack.push(iter->right);
        if(!iter->left)  myStack.push(iter->left);
    }
}

void myBST::treeInorderTraverser(twoChieldsNode* iter)
{
    if (!iter) return;
    treeInorderTraverser(iter->left);
    traversedList.push_back(iter);
    treeInorderTraverser(iter->right);
}

void myBST::treeInorderTraverseWithStack()
{
    twoChieldsNode* iter = root;
    
}

void myBST::treePostorderTraverser(twoChieldsNode* iter)
{
    if (!iter) return;
    treePostorderTraverser(iter->left);
    treePostorderTraverser(iter->right);
    traversedList.push_back(iter);
}

void myBST::treePostorderTraverseWithStack()
{
    twoChieldsNode* iter = root;
    std::stack<twoChieldsNode*>myStack;
    //post order stack kullanilarak yazilacak.
    while (true)
    {

    }
}

twoChieldsNode* myBST::find(int key)
{
    return NULL;
}

twoChieldsNode* myBST::min()
{
    if (!root) return NULL;
    twoChieldsNode* iter = root;
    while (iter->left)
        iter = iter->left;
    return iter;
}

twoChieldsNode* myBST::max()
{
    if (!root) return NULL;
    auto iter = root;
    while (iter->right)
        iter = iter->right;
    return iter;
}
