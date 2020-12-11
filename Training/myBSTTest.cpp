#include "myBSTTest.h"

void myBSTTest::bstAddTest()
{
    std::vector<bool> addAccuracy;
    addAccuracy.push_back(addTest1());
    addAccuracy.push_back(addTest2());
    addAccuracy.push_back(addTest3());

    new printValidity(&addAccuracy);//this writes all tests reasons.
}

bool myBSTTest::addTest1()
{
    myBst.add(4);
    correctList.insert(4);
    int i = 0;
    for (auto iter : correctList)
        if (iter != myBst.traversedList[i++]) return false;
    return true;
}

bool myBSTTest::addTest2()
{
    myBst.add(6);
    correctList.insert(6);
    int i = 0;
    for (auto iter : correctList)
        if (iter != myBst.traversedList[i++]) return false;
    return true;
}

bool myBSTTest::addTest3()
{
    myBst.add(3);
    correctList.insert(3);
    int i = 0;
    for (auto iter : correctList)
        if (iter != myBst.traversedList[i]) return false;
    return true;
}

bool myBSTTest::addTest4()
{
    return false;
}

void myBSTTest::allTest()
{   
    //bstAddTest();
}

void myBSTTest::traversesTests()
{
    std::string testsNames[6] = { "preorder Traverse", "Preorder Traverse With Stack", "inorder Traverse", "inorder Traverse With Stack", "postorder Traverse", "postorder Traverse With Stack" };
    std::vector<bool>traverseAccuracy;
    traverseAccuracy.push_back(treePreorderderTraverseTest());
    traverseAccuracy.push_back(treetPreorderTraverseWithStackTest());
    traverseAccuracy.push_back(treeInorderTraverseTest());
    traverseAccuracy.push_back(treeInorderTraverseWithStackTest());
    traverseAccuracy.push_back(treePostOrderTraverseTest());
    traverseAccuracy.push_back(treePostorderTraverseWithStackTest());

    int i = 0;
    for (auto iter : traverseAccuracy)
        (iter) ? std::cout << "\t" << testsNames[i++] << " test is succesfull!\n" : std::cout << "\t! " << testsNames[i++] << " test is failed \n";
}

bool myBSTTest::treePreorderderTraverseTest()
{
    int correctList[6] = { 4,6,45,12,7,1 };
    myBst2.clearTraversedList();
    myBst2.treePreorderTraverser(myBst2.getRoot());
    int i = 0;
    for (auto iter : myBst2.getTraversedList())
        if (iter->key != correctList[i]) return false;
    return true;
}

bool myBSTTest::treetPreorderTraverseWithStackTest()
{
    int correctList[6] = { 4,6,45,12,7,1 };
    myBst2.clearTraversedList();
    myBst2.treePreorderTraverserWithStack();
    int i = 0;
    for (auto iter : myBst2.getTraversedList())
        if (iter->key != correctList[i]) return false;
    return true;
}

bool myBSTTest::treeInorderTraverseTest()
{
    int correctList[6] = { 45,6,4,7,12,1 };
    myBst2.clearTraversedList();
    myBst2.treeInorderTraverser(myBst2.getRoot());
    int i = 0;
    for (auto iter : myBst2.getTraversedList())
        if (iter->key != correctList[i]) return false;
    return true;
}

bool myBSTTest::treeInorderTraverseWithStackTest()
{
    int correctList[6] = { 45,6,4,7,12,1 };
    myBst2.clearTraversedList();
    myBst2.treeInorderTraverseWithStack();
    int i = 0;
    for (auto iter : myBst2.getTraversedList())
        if (iter->key != correctList[i]) return false;
    return true;
}

bool myBSTTest::treePostOrderTraverseTest()
{
    int correctList[6] = { 45,6,7,1,12,4 };
    myBst2.clearTraversedList();
    myBst2.treePostorderTraverser(myBst2.getRoot());
    int i = 0;
    for (auto iter : myBst2.getTraversedList())
        if (iter->key != correctList[i]) return false;
    return true;
}
bool myBSTTest::treePostorderTraverseWithStackTest()
{
    int correctList[6] = { 45,6,7,1,12,4 };
    myBst2.clearTraversedList();
    myBst2.treePostorderTraverseWithStack();
    int i = 0;
    for (auto iter : myBst2.getTraversedList())
        if (iter->key != correctList[i]) return false;
    return true;
}
