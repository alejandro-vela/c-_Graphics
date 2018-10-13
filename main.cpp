#include "miniwin.h"

using namespace miniwin;
int main(){
    int a = 20;
    vredimensiona(500,500);
    circulo(240,40,25);
    linea(215,30,150,67);
    circulo(150,90,25);
    linea(262,30,320,67);
    circulo(330,90,25);
    
    texto(50,50, " ");
    
   
    
    refresca();
    
    return 0;
}
