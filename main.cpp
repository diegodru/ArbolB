//Compilar con std=c++17
#include "arbolB.h"
#include <string.h>

int main(int argc, char* argv[]){
   ArbolB* arbol;
   if(std::string(argv[1]) == "-m"){
      arbol = new ArbolB(atoi(argv[2]));
      arbol->insert(10);
      arbol->insert(1);
      arbol->printTree();
      arbol->insert(5);
      arbol->printTree();
      arbol->insert(9);
      arbol->printTree();
      arbol->insert(8);
      arbol->printTree();
      arbol->insert(7);
      arbol->printTree();
   }
}
