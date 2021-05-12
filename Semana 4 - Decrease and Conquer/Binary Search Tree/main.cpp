#include <iostream>
#include "bintree.hpp"

int main(){

    BinaryTree<int> tree;

    tree.insert(9);
    tree.insert(5);
    tree.insert(12);
    tree.insert(1);
    tree.insert(7);
    tree.insert(10);
    tree.insert(7); // returns AlreadyIn
    tree.insert(4);

    std::cout << tree.show() << std::endl;
    std::cout << (tree.search(7) == SearchInfo::Found ? "found" : "not found") << std::endl;
    std::cout << (tree.search(8) == SearchInfo::Found ? "found" : "not found") << std::endl;
}