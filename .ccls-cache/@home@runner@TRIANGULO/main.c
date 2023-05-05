/*Realice un programa que permita calcular el perímetro y área de un triángulo. El triángulo está determinada por tres puntos en el plano cartesiano.  
Perimetro= a+b+c
distancia entre dos puntos = √((x2-x1)²+(y2-y1)²)
área = √(s(s-a)(s-b)(s-c))
semiperímetro s
s = (a+b+c)/2
  */
#include <stdio.h>


int main(void) {
  float x1,y1,x2,y2,x3,y3;
  float a,b,c;
  x1 = ingresarCoordenada();
  y1 = ingresarCoordenada();
  x2 = ingresarCoordenada();
  y2 = ingresarCoordenada();
  x3 = ingresarCoordenada();
  y3 = ingresarCoordenada();

  a = distanciaPunto(x1,y1,x2,y2);
  b = distanciaPunto(x1,y1,x3,y3);
  c = distanciaPunto(x2,y2,x3,y3);
  

  printf("\nLa superficie del triangulo es %f: ",superficie(a,b,c));
  area(a,b,c);
  
  return 0;
}