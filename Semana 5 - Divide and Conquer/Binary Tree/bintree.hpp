#ifndef BINTREE_HPP
#define BINTREE_HPP

#include <memory>
#include <vector>

enum class InsertionInfo { Success, NodeNotEmpty };

/*
Estrutura de dados árvore binária. Qualquer tipo de dado pode ser usado.
(Assume-se que não é uma ordered tree)

Possui os métodos públicos preorder, postorder, inorder e height.

preorder retorna um arranjo contendo os elementos em caminhamento pré-ordem.
recebe: nada    retorna: std::vector<T>

inorder retorna um arranjo contendo os elementos em caminhamento central.
recebe: nada    retorna: std::vector<T>

postorder retorna um arranjo contendo os elementos em caminhamento pós-ordem.
recebe: nada    retorna: std::vector<T>

height retorna a altura da árvore.
recebe: nada    retorna: int
*/
template<typename T>
class BinaryTree;
#include "bintree.ipp"

#endif