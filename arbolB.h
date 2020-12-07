//Andrea Aguirre, Andres Eger, Camilo Ferrera y Diego Ramos 
#ifndef ARBOLB_H
#define ARBOLB_H

#include <utility>
#include <iostream>


class ArbolB{

   private:

      struct Nodo{
         Nodo* padre = nullptr;
         unsigned int num_de_llaves = 0;
         bool es_nodo_hoja = true;

         Nodo** hijos;
         int* llaves;
      }*raiz = nullptr;

      void split(Nodo* padre, Nodo* hijo, int key, int indice);
      void splitWithBuffer(Nodo* padre, Nodo* hijo, int key, int indice, Nodo* buffer_node);
      void insertNonFull(int key, Nodo* x);
      void printTree_rec(Nodo* x, int current_height);

      const unsigned char max_hijos;
      const unsigned char max_llaves;
      const unsigned char min_llaves;

   public:
      ArbolB();
      ArbolB(int orden);
      void insert(int key);
      void printTree();
};

#endif

