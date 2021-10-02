#ifndef TREE_H
#define TREE_H

#include <string>
#include <iostream>
#include "Node.h"

using namespace std;

template <class T>
class Tree
{
    friend ostream& operator<< (ostream& out, Tree<T>& tree) {
        tree.print(out, tree._root);
        return out;
    };

    private:
        Node<T>* _root;
        Node<T>* insert(Node<T>** node, T newValue);
        T* search(Node<T>** node, string searchedValue);
        ostream& print(ostream& out, Node<T>* node) {
            if (!node) {
                return out;
            }

            out << node->value << endl;

            this->print(out, node->right);

            this->print(out, node->left);

            return out;
        };
    public:
        Tree();
        Node<T>* operator += (T newValue);
        T* operator () (string name);
};

template<class T>
Tree<T>::Tree()
{
    this->_root = nullptr;
}

template<class T>
Node<T>* Tree<T>::operator += (T newValue) {
    return this->insert(&(this->_root), newValue);
}

template<class T>
Node<T>* Tree<T>::insert(Node<T>** node, T newValue)
{
    if (!(*node)) {
        Node<T>* newNode = new Node<T>(newValue);
        *node = newNode;
        return *node;
    }

    if (newValue < (*node)->value) {
        return this->insert(&(*node)->right, newValue);
    }

    if (newValue > (*node)->value) {
        return this->insert(&(*node)->left, newValue);
    }

    return nullptr;
}

template<class T>
T* Tree<T>::operator () (string searchedValue)
{
    return this->search(&(this->_root), searchedValue);
}

template<class T>
T* Tree<T>::search(Node<T>** node, string searchedValue)
{
    if (!(*node)) {
        return nullptr;
    }

    if ((*node)->value == searchedValue) {
        return &(*node)->value;
    }

    if ((*node)->value > searchedValue) {
        return this->search(&(*node)->right, searchedValue);
    }

    if ((*node)->value < searchedValue) {
        return this->search(&(*node)->left, searchedValue);
    }

    return nullptr;
}

#endif
