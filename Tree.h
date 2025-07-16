#include

class Tree
{
public:
    Tree();
    Tree* insert();
    Tree* remove();
    Tree* getLeftBranch();
    Tree* getRightBranch();
    
private:
    unsigned int sort();
    Tree* m_root;
    Tree* m_branchL;
    Tree* m_branchR;

};