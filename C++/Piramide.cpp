#include<iostream>

int main(){
    //Definición de variables
    int nfilas=0,cont,columnas;
    char espacios[30];
    char asteriscos[30];
    char printespacios[100];
    char printasteriscos[100];
    char salir;
    std::cout<<"Introduzca numero de filas: ";
    std::cin>>nfilas;
    for(cont=0;cont<=nfilas;cont++){
      for(columnas=0;columnas<=nfilas+2;columnas++){
        espacios=' ';
        printespacios=espacios*(nfilas-cont-1);
        asteriscos= '*'
        asteriscos*(2*cont+1);
        std::cout<<espacios<<asteriscos<<"\n";
        }
    }
   
    std::cin>>salir;
}
        
    
    
