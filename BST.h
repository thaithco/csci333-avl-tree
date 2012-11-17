#ifndef __BST_H__
#define __BST_H__

#include "Node.h"
#include <string>
#include <list>

template <typename T>
class BST {
 private:
  Node<T>* root;
  void inOrderTraversal(Node<T>* root);
  void postOrderTraversal(Node<T>* root);
  void levelTraversal(std::list< Node<T>* >* parents, int level);
  int pow(int a, int p);
  int depth(Node<T>* root, int dpth, int maxDepth);
  void op(int& d, Node<T>**& Q, T v, Node<T>** P);

 public:
  BST<T>();
  ~BST<T>();

  bool find(T v);
  void remove(T v);
  void insert(T v);
  void print();
  void breadthPrint();
  void rotateRight(Node<T>** crit);
  void rotateLeft(Node<T>** crit);
};


#endif
