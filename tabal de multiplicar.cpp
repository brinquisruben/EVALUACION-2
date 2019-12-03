#include<iostream>

int main(){
    int ntabla;
    char salir;
    int cont;
    std::cout<<"Que tabla deseas que muestre: ";
    std::cin>> ntabla;
    std::cout<<"***** Tabla del ";
    std::cout<< ntabla;
    std::cout<<" ******\n";
    for(cont=0;cont<=10;cont++){
                                std::cout<<ntabla;
                                std::cout<<" x ";
                                std::cout<<cont;
                                std::cout<<" = ";
                                std::cout<<ntabla*cont;
                                std::cout<<"\n";
                                }
    
        
        
        
        
std::cin >>salir;
}
