#include "Tree.h"

Tree::Tree(Tree *parentNode) : m_root(parentNode), m_childLeft(nullptr), m_childRight(nullptr),
                               m_value(0) {}

Tree::Tree(int *vector, unsigned int size) : m_root(nullptr), m_childLeft(nullptr), m_childRight(nullptr)
{
    for (unsigned int i = 0; i < size; i++)
    {
        insert(vector[i]);
    }
}

// TODO
Tree *Tree::insert(int value)
{
    if (!m_root && !m_childLeft && !m_childRight)
    {
        m_value = value;
        return this;
    }

    Tree *child = value > m_value ? 
}

Tree *Tree::remove(int value)
{
}

Tree *Tree::find()
{
}

//////////////////////////////////
// Private //

Tree *Tree::getLeftBranch()
{
    return m_childLeft;
}

Tree *Tree::getRightBranch()
{
    return m_childRight;
}

int Tree::getValue()
{
    return m_value;
}
