#include <iostream>
#include <vector>
#include "bintree.hpp"

void print_v(std::vector<int> v){

    for(auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main(){

    BinaryTree<int> tree;

    tree.insertIn(9,  tree.root);
    tree.insertIn(5,  tree.root->left);
    tree.insertIn(12, tree.root->right);
    tree.insertIn(1,  tree.root->left->left);
    tree.insertIn(7,  tree.root->left->right);
    tree.insertIn(10, tree.root->right->left);
    tree.insertIn(4,  tree.root->left->left->right);

    std::cout << "preorder: \t";
    print_v(tree.preorder());
    std::cout << "postorder: \t";
    print_v(tree.postorder());
    std::cout << "inorder: \t";
    print_v(tree.inorder());
    std::cout << "height: \t" << tree.height() << std::endl;
}