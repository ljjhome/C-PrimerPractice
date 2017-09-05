#include <string>
#include <iostream>
using namespace std;
class TreeNode{
private:
    std::string value;
    int count;
    TreeNode *left;
    TreeNode *right;
public:
    TreeNode(const string &s,TreeNode &tnleft, TreeNode &tnright):value(s),left(&tnleft),right(&tnright){}
    TreeNode(const string& s = string()):value(s),count(0),left(nullptr), right(nullptr){}
    TreeNode(const TreeNode &tn):value(tn.value),count(tn.count),left(tn.left),right(tn.right){}
    TreeNode & operator=(const TreeNode &tn){
        value = tn.value;
        count = tn.count;
        left = tn.left;
        right = tn.right;
        return *this;
    }
};
class BinStrTree{
private:
    TreeNode *root;
public:
    BinStrTree(TreeNode& rt):root(&rt){}
    BinStrTree(const BinStrTree& bs):root(bs.root){}
    BinStrTree& operator=(const BinStrTree& bs){
        root = bs.root; 
        return *this;
    }
};
