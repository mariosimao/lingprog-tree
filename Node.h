#ifndef NODE_H
#define NODE_H

template <class T>
struct Node
{
    Node(T value) {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    };
    T value;
    Node<T>* left;
    Node<T>* right;
};

#endif
