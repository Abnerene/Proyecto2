#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
#include <cstring>


using namespace std;
int f=0,a=0,p=0;
#include "decoracion.h"
#include "clases.h"
int main() {
  ifstream ArchivoPeliculas,ArchivoActores;
  ArchivoActores.open("actores.txt");
  ArchivoPeliculas.open("peliculas.txt"); 
  int id;string nombre;
  int d=0;
  string x;

  Actor actor[20];
  
  while(getline(ArchivoActores,x)){

  id=stoi(Cortar(x,x.find(" ")));
  nombre=x.erase(0,x.find(" ")+1);

  actor[a]=Actor(id,nombre);
  a++;
  }

  int numPeli,anio,duracion,canActores=0,listaActores[10];
 
  string genero,nombrePelicula;
  Pelicula pelicula[20];

  while(getline(ArchivoPeliculas,x)){ 
  Actor listaActoresArray[10];
  
  numPeli=stoi(Cortar(x,x.find(" ")));
  anio=stoi(Cortar(x.erase(0,x.find(" ")+1),x.find(" ")));
  duracion=stoi(Cortar(x.erase(0,x.find(" ")+1),x.find(" ")));
  genero=Cortar(x.erase(0,x.find(" ")+1),x.find(" "));  
  canActores=stoi(Cortar(x.erase(0,x.find(" ")+1),x.find(" ")));
  
  
  


  int s=0;
  while(s<canActores)
  {
    listaActores[s]=stoi(Cortar(x.erase(0,x.find(" ")+1),x.find(" ")));
   
 int r=0;
  while(r<a){
    if(listaActores[s] == actor[r].getId()){
      listaActoresArray[s]=actor[r];
    }
    r++;
  }
  
  s++;
  }
  

  nombrePelicula=x.erase(0,x.find(" ")+1);

  pelicula[p]=Pelicula(numPeli,anio,duracion,genero,canActores,listaActoresArray,nombrePelicula);

  
  for(int w=0;w==10;w++){
  delete &listaActoresArray[w];
  }

  p++;
  }


   
    //cout<<"Actor: "<<pelicula[3].getListaActores(2).getNombre()<<endl;
     
  
  ArchivoActores.close(),ArchivoPeliculas.close();

  //variables
  string cveFuncion;
  
  system("clear");
  
  //Crear Objeto función
  Funcion funciones[20];
  ifstream  archivoFunciones;
  archivoFunciones.open("funciones.txt");
  
  string aClaveFuncion;
  int aNumPeli,aHora,aMinuto,aSala,counter=0;
  while(archivoFunciones>>aClaveFuncion>>aNumPeli>>aHora>>aMinuto>>aSala){
  Hora horaTest(aHora,aMinuto);  
  funciones[counter].setcveFuncion(aClaveFuncion);
  funciones[counter].setNumPeli(aNumPeli); 
  funciones[counter].setSala(aSala);
  funciones[counter].setHora(horaTest);
    counter++;
    f++;
  }
  archivoFunciones.close();
  
  cinema();
  wait();
  system("clear");
  //Empieza el menú
  menu(actor,pelicula,funciones);
  
 




}