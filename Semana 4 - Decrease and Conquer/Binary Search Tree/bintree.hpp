#ifndef BINTREE_HPP
#define BINTREE_HPP

#include <memory>
#include <concepts>
#include <string>
#include <sstream>

enum class InsertionInfo {NewInserted, AlreadyIn};
enum class SearchInfo {Found, NotFound};

/*
Estrutura de dados árvore de pesquisa binária
Possui os métodos públicos insert, show e search.

insert recebe um elemento T e o insere retornando OutputInfo::NewInserted.
Se o elemento já existir, não altera a árvore e retorna um OutputInfo::AlreadyIn.

show retorna um std::string contendo os elementos da árvore em caminhamento pré-ordem.

search procura pelo elemento na árvore, retornando SearchInfo::Found ou SearchInfo::NotFound
*/
template<std::totally_ordered T>
class BinaryTree;
#include "bintree.ipp"

#endif