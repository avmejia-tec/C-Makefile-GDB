#include "claseA.h"
#include "claseB.h"
#include <iostream>

int main(void)
{
  ClaseA obj1 = ClaseA();
  ClaseB obj2 = ClaseB();

   int a;
   std::cout << " Introduce un numero : " ;
   std::cin >> a;

  obj1.imprimir();
  obj2.imprimir();
}
