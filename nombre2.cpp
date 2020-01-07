#include<iostream>
int devuelve_longitud(char palabra[]){
    int longitud=0;
    int cont=0;
    while(palabra[cont]!='\0'){
    longitud++;
    cont++;
}
    return(longitud);
    }
int devuelve_nvocales(){
}




int main(){
    char salir;
    int cont;
    char vocales[]={'a','e','o','i','u'};
    char palabra[10];
    int nvocales;
    std::cout<<"Dime tu nombre: ";
    std::cin>>palabra;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){
    for(nvocales=0;nvocales<5;nvocales++){
    if(palabra[cont]==vocales[nvocales]){
    palabra[cont]='u';
                                         }
    
          }
}
std::cout<<"palabra troleada: ";
std::cout<<palabra;

    
    
    std::cin>>salir; 
}
