

class Tree
{
public:
    Tree(Tree* parent);
    ~Tree();
    Tree(int* vector, unsigned int size);

    Tree *insert(int value);
    Tree *remove(int value);
    Tree *find(int value);

    Tree *getLeftBranch();
    Tree *getRightBranch();
    int getValue();

private:

    int m_value;
    Tree *m_root;
    Tree *m_childLeft;
    Tree *m_childRight;
};