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
    std::stack<twoChieldsNode*> treeStack;
    std::vector<twoChieldsNode**> treeNodes;
    treeStack.push(root);
    while (!treeStack.empty())
    {
        auto iter = treeStack.top();
        treeStack.pop();
        if (!iter->right) treeStack.push(iter->right);
        if (!iter->left) treeStack.push(iter->left);
        treeNodes.push_back(&iter);
    }
    for (auto iter : treeNodes)
        delete* iter;
    //it hasn't tried yet it works or not.
}

void myBST::add(int key)
{
    
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
    throw std::exception("not implement yet");
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
    throw std::exception("not implement yet");
}

void myBST::treebreathFirstSearchAlgorithm()
{
    std::queue<twoChieldsNode*> myQueue;
    myQueue.push(root);
    while (!myQueue.empty())
    {
        auto iter = myQueue.front();
        myQueue.pop();
        traversedList.push_back(iter); // adding traversed list nodes to the list.
        if (!iter->left) myQueue.push(iter->left);
        if (!iter->right) myQueue.push(iter->right);
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
