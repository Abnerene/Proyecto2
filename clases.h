class Actor{
  private:
  int id;
  string nombre;

  public:
  void setId(int ID){id=ID;}
  void setNombre(string Nombre){nombre=Nombre;}

  int getId(){return id;}
  string getNombre(){return nombre;}

  Actor(){id=0;nombre="";}
  Actor(int Id, string Nombre){id=Id;nombre=Nombre;}


};


class Pelicula{
  private:
  string nombrePelicula;
  int numPeli;
  int anio;
  int duracion;
  string genero;
  int cantActores;
  array<Actor,10> listaActores;

  
  public:
  void setNumPeli(int num){numPeli=num;}
  void setAnio(int Anio){anio=Anio;}
  void setDuracion(int dura){duracion=dura;}
  void setGenero(string gene){genero=gene;}
  void setCantActores(int cant){cantActores=cant;}

  Actor getListaActores(int indice){return listaActores[indice];}
  string getNombrePelicula(){ return nombrePelicula; }
  int getNumPeli(){return numPeli;}
  int getAnio(){return anio;}
  int getDuracion(){return duracion;}
  string getGenero(){return genero;}
	int getCantidadActores(){return cantActores;}
  //Constructor default
  Pelicula(){
    numPeli=0;
    anio=0;
    duracion=0;
    genero=" ";
    cantActores=0;
    listaActores.fill(Actor());
    nombrePelicula="";
  }//Fin del constructor

  //Funcion de verificarion de número de película
  
//Contructor por parametros
  Pelicula(int Np,int An,int Du,string Ge,int Ca,Actor lista[10],string NombrePelicula){
    numPeli=Np;
    anio=An;
    duracion=Du;
    genero=Ge;
    cantActores=Ca;
    nombrePelicula=NombrePelicula;

    int s=0;
    
    while(s<10){
    listaActores[s]=lista[s];
    s++;
    }
}
//Fin del contructor por parametros

};


class Hora{
  private:
  int hh;
  int mm;

  public:
  void setHH(int h){hh=h;}
  void setMM(int m){mm=m;}

  int getHH(){return hh;}
  int getMM(){return mm;}
  Hora(){hh=0;mm=0;}
  Hora(int HH,int MM){hh=HH;mm=MM;}
  string mostrar(){
    string nm=to_string(mm);
    if(mm<10){nm="0"+nm;}
    return (to_string(hh)+":"+nm); 
    }

};

class Funcion{
  private:
  string cveFuncion;
  int numPeli;
  int sala;
  Hora hora;

  public:
  void setcveFuncion(string cveF){cveFuncion=cveF;}
  void setNumPeli(int numP){numPeli=numP;}
  void setSala(int nsala){sala=nsala;}
  void setHora(Hora h){hora=h;}

  string getcveFuncion(){return cveFuncion;}
  int getNumPeli(){return numPeli;}
  int getSala(){return sala;}
  Hora getHora(){return hora;}
  Funcion(){ cveFuncion="";numPeli=0;sala=0;hora=Hora();}


};


string Cortar(string x,int p){

  x=x.erase(p);

  return x;
}


//Funcion para la verificación de del número de pelicula
bool verificarNum(int num,int cantPeliculas,Pelicula obj[]){
int z=0;
while(z<cantPeliculas){
  if(num == obj[z].getNumPeli()){
    return true;
  }
  z++;
}
return false;
}

//Funcion multiString recibe un entero un un string(pensado para un caracter)
//Regresa un stringcon varios caracteres segun el entero 
string multiString(int n, string linea){
  int ze=0;
  string nLinea;
  
  while(ze<n){
     nLinea=nLinea+linea; 
    ze++;
  }
  return nLinea;

}


string multiString2(string lGenero,string lAnio,string lDuracion){
  int ze=0;
  string nLinea;
  nLinea=string((lGenero.size())+1,'_')+"_█_"+string(lAnio.size()+5,'_')+"_█_"+string(lDuracion.size()+14,'_')+"_█";
  
  return nLinea;

}

void impresion1(int f){
  cout<<"▄--------------------------------------------------▄"<<endl; 
  cout<<"▌ Ingresa los datos para cada una de las funciones ▐"<<endl;
  cout<<"▀--------------------------------------------------▀"<<endl;
  cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<endl;
  cout<<"▌Funciones Ingresadas: ";
  if(f<10){
  cout<<f<<" ▐"<<endl;  
  }
  else{
  cout<<f<<"▐"<<endl; 

  }
  cout<<"▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"<<endl;

}

//Funcion para pausar el proceso
void wait(){
  cin.ignore();
  cout<<"PRESIONE ENTER PARA CONTINUAR";
  cin.get();
}


string cleanR(string linea){
  linea=linea.erase(linea.size() - 1); 
  return linea;
}

void ingresarFunciones(Pelicula pelicula[],Funcion funciones[]){
  string cveFuncion="";
  int numPeli=-1;
  int HH=-1,MM=-1;
  int nsala;
 
  while(f<a){
	again1:;
  impresion1(f);
  
  if(cveFuncion!=""){
    cout<<"Clave para la función: "<<cveFuncion<<endl;  
    cout<<"______________________"<<endl<<endl;
  }
  else{
    cout<<"Clave para la función: ";
    cin>>cveFuncion;
    cout<<"______________________"<<endl<<endl;
  }
  if(numPeli>-1){
		cout<<"Número de película: "<<numPeli<<endl;
		cout<<"______________________"<<endl;

	}
	else{
  cout<<"Número de película: ";
  cin>>numPeli;
  cout<<"______________________"<<endl;
	}
  
  if(verificarNum(numPeli,a,pelicula)){
    cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<endl;
    cout<<"█ Ingrese la hora y minutos por separado █"<<endl;
    cout<<"▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"<<endl;
    
		if(HH>=0 && HH<24)
		{
		cout<<"Hora: "<<HH<<endl;
		}
		else{
    cout<<"Hora: ";
    cin>>HH;
		}
    if(HH>=0 && HH<24){
    
    cout<<"Minutos: ";
    cin>>MM;
    if(MM>-1 && MM<60){
      Hora hora(HH,MM);
      cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<endl;
      cout<<"█ Ingrese el número de sala █"<<endl;
      cout<<"▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"<<endl;
      cout<<"N°: ";
      cin>>nsala;
      //creo el objeto de funcion ya que se han cumplido las opciones
      funciones[f].setcveFuncion(cveFuncion);
      funciones[f].setNumPeli(numPeli);
      funciones[f].setHora(hora);
      funciones[f].setSala(nsala);


    }

		else{
			errorText();
      cout<<"Los minutos deben ser entre 0 y 59"<<endl<<endl;
      wait();
      system("clear");
			goto again1;
		}
    
    }
		else{
			errorText();
      cout<<"La hora debe ser entre 0 y 23"<<endl<<endl;
      wait();
      system("clear");
			goto again1;
		}

    cveFuncion="";
    numPeli=-1;
    HH=-1,MM=-1;
    nsala=-1;
    system("clear");
    f++;
    cout<<"Desea ingresar otra funcion 1:si o 2:no"<<endl;
    int opi;
    cin>>opi;
    if(opi==2){
     break;
    }
  }
  else{
    errorText();
    cout<<"La pelicula no existe"<<endl;
    wait();
    system("clear");
		numPeli=-1;
		goto again1;
    
    
  }
   system("clear");
  }
   
  system("clear");
    
  }



void menu(Actor actor[],Pelicula pelicula[],Funcion funciones[]){
  int op=0;
  while(op!=7){
  system("clear");
  cinemaText();
  cout<<"  ▄▄▄▄▄----------------------------▄"<<endl;
  cout<<"  █ 0 █ Ingresar Funciones         █"<<endl;
  cout<<"  ▀▀▀▀▀----------------------------▀"<<endl;  
  cout<<"  ▄▄▄▄▄----------------------------▄"<<endl;
  cout<<"  █ 1 █ Lista de Actores           █"<<endl;
  cout<<"  ▀▀▀▀▀----------------------------▀"<<endl;
  cout<<"  ▄▄▄▄▄----------------------------▄"<<endl;
  cout<<"  █ 2 █ Lista de Películas         █"<<endl;
  cout<<"  ▀▀▀▀▀----------------------------▀"<<endl;
  cout<<"  ▄▄▄▄▄----------------------------▄"<<endl;
  cout<<"  █ 3 █ Funciones disponibles      █"<<endl;
  cout<<"  ▀▀▀▀▀----------------------------▀"<<endl;
  cout<<"  ▄▄▄▄▄----------------------------▄"<<endl;
  cout<<"  █ 4 █ Buscar funciones por hora  █"<<endl;
  cout<<"  ▀▀▀▀▀----------------------------▀"<<endl;
  cout<<"  ▄▄▄▄▄----------------------------▄"<<endl;
  cout<<"  █ 5 █ Buscar funcion por clave   █"<<endl;
  cout<<"  ▀▀▀▀▀----------------------------▀"<<endl;
	cout<<"  ▄▄▄▄▄----------------------------▄"<<endl;
  cout<<"  █ 6 █ Buscar películas por actor █"<<endl;
  cout<<"  ▀▀▀▀▀----------------------------▀"<<endl;
  cout<<"  ▄▄▄▄▄----------------------------▄"<<endl;
  cout<<"  █ 7 █ Salir                      █"<<endl;
  cout<<"  ▀▀▀▀▀----------------------------▀"<<endl;
  cout<<endl;
 
  cout<<" Número de la opción: ",cin>>op;
  system("clear");
  int re=0;
    if(op==0){
      ingresarFunciones(pelicula,funciones);
    }

   else if(op==1){
     re=0;
     actoresText();
     cout<<"ID ▐ NOMBRE" <<endl;
     cout<<"▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"<<endl;
      while(re<a){
        
        cout<<actor[re].getId()<<" ▐ "<<actor[re].getNombre()<<endl;      
        re++;
      
     
    }
     cout<<endl;
     wait();
    
  }

     else if(op==2){
     re=0;
     peliculasText();
 
    while(re<p){
     
      int multi=(pelicula[re].getNombrePelicula()).size();
      
      string linea2=pelicula[re].getGenero()+" █ Año: "+ to_string(pelicula[re].getAnio())+" █ Duración: "+ to_string(pelicula[re].getDuracion())+" min";
      string centrar1=multiString(((linea2.size()-2-multi)/2)," ");
      string centrar2=multiString(((linea2.size()-10)/2)," ");
     

      
      cout<<centrar1<<cleanR(pelicula[re].getNombrePelicula())<<endl;
      cout << multiString((linea2.length())-2,"▄") <<endl;  
      cout<<"█ "<<linea2<<" █"<<endl;
      cout<<"█"<<multiString2(pelicula[re].getGenero(),to_string(pelicula[re].getAnio()),to_string(pelicula[re].getDuracion()))<<endl;
      cout<<"█"+centrar2<<"Actores";
      
      if((linea2.size()-(centrar2.size()*2))==10 )
      {
        centrar2=multiString(((linea2.size()-10)/2)-1," "); 
      
      }
      
      cout<<centrar2<<"█"<<endl;
     
      
      
      cout<<"█"<<multiString((linea2.length())-4,"-")<<"█"<<endl;  

      
      int i=0;
      while((pelicula[re].getListaActores(i).getId()) !=0){
      int lNombre=(pelicula[re].getListaActores(i).getNombre()).size();
      string actor = pelicula[re].getListaActores(i).getNombre();
      string centrar3=multiString(((linea2.size()-2-(actor.size()))/2)," "); 
      
      int largo1=(cleanR(actor)).size() +((centrar3.size()-2)*2);
      int largo2=linea2.size()-4;  
      int diferencia;
      
    

      cout<<"█"<<centrar3<<cleanR(actor);
      if((largo2-largo1)==3)
      {
        diferencia=1;
        centrar3=multiString(((linea2.size()-2-(cleanR(actor).size()))/2)-diferencia," "); 
      }

      
      cout<<centrar3<<"█"<<endl;
      
      i++;
      }
      cout << multiString((linea2.length())-2,"▀") <<endl;
      cout<<endl;

     
      re++;       
   }
    cout<<endl<<endl;
    wait();
  }


  else if(op==3){
    int listF=0;
    int listP=0;
    string peliculaN;
    //obteniendo el largo de los elementos;
    int lClave,lPelicula,lHora,lSala;
    int lClave2=5,lPelicula2=8,lHora2=4,lSala2=4;
    while(listF<f){
    peliculaN=funciones[listF].getcveFuncion();
    lClave=(funciones[listF].getcveFuncion()).size();
     listP=0;
     while(listP<p){
        if(funciones[listF].getNumPeli() == pelicula[listP].getNumPeli()){
          peliculaN=pelicula[listP].getNombrePelicula();
        }
        listP++;
      }
    lPelicula=cleanR(peliculaN).size();
    lHora=((funciones[listF].getHora()).mostrar()).size();
    lSala=to_string((funciones[listF].getSala())).size();
    if (lClave>lClave2)
    {
      lClave2=lClave;
    }

     if (lPelicula>lPelicula2)
    {
      lPelicula2=lPelicula;
    }
     if (lHora>lHora2)
    {
      lHora2=lHora;
    }

     if (lSala>lSala2)
    {
      lSala2=lSala;
    }
  
    listF++;
    }
  

    listF=0;

  funcionesText();   
    cout<<multiString(lClave2+lPelicula2+lHora2+lSala2+13,"▄")<<endl;
    cout<<"█"<<" Clave "<<multiString(lClave2-5," ")<<"▌ Película "<<multiString(lPelicula2-8," ")<<"▌ Hora "<<multiString(lHora2-4," ")<<"▌ Sala "<<multiString(lSala2-4," ")<<"█"<<endl;
    cout<<"█"<<multiString(lClave2+2,"▀")<<"█"<<multiString(lPelicula2+2,"▀")<<"█"<<multiString(lHora2+2,"▀")<<"█"<<multiString(lSala2+2,"▀")<<"█ "<<endl;

 

    while(listF<f){
      string clave=funciones[listF].getcveFuncion();
      Hora obHora=funciones[listF].getHora();
      string hora=obHora.mostrar();
      string sala=to_string(funciones[listF].getSala());
      listP=0;
      while(listP<p){
        if(funciones[listF].getNumPeli() == pelicula[listP].getNumPeli()){
          peliculaN=cleanR(pelicula[listP].getNombrePelicula());
        }
        listP++;
      }
     
      cout<<"█ "<<clave<<multiString(lClave2-clave.size()," ")<<" █ "<<peliculaN<<multiString(lPelicula2-peliculaN.length()," ")<<" █ "<<hora<<multiString(lHora2-hora.size()," ")<<" █ "<<sala<<multiString(lSala2-sala.size()," ")<<" █"<<endl;
      cout<<"█"<<multiString(lClave2+2,"═")<<"█"<<multiString(lPelicula2+2,"═")<<"█"<<multiString(lHora2+2,"═")<<"█"<<multiString(lSala2+2,"═")<<"█ "<<endl;

      listF++;
    }
    
    cout<<endl;
    wait();
  }//Fin de la opcion 3 Mostrar Funciones

 //Inicio de la opcion 4 Buscar funciones por hora
   
  else if(op==4){
    
    int HH=-1,MM,active=0;
    while(active==0){ 
    buscarHoraText();
    cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<endl;
    cout<<"█ Ingrese la hora y minutos por separado █"<<endl;
    cout<<"▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"<<endl;
    
    if(HH>0 && HH<24){
    cout<<"Hora: "<<HH<<endl;
    
    }
    else{
    cout<<"Hora: ";
    cin>>HH;
    }

    if(HH>-1 && HH<=24){
    
      cout<<"Minutos: ";
      cin>>MM;
      if(MM>-1 && MM<60){
        //Validada la hora empieza el preoceso de obtener las funciones
        int listF=0;
        int listP=0;
        string peliculaN;
        //obteniendo el largo de los elementos;
        int lPelicula,lSala;
        int lPelicula2=8,lSala2=4;
        int hora,minutos;
        string horaFormato; 

        while(listF<f){
          listP=0;
          peliculaN=funciones[listF].getcveFuncion();
          hora=(funciones[listF].getHora()).getHH();
          minutos=(funciones[listF].getHora()).getMM();
       
         if(HH==hora && MM==minutos){
          while(listP<p){

              if(funciones[listF].getNumPeli() == pelicula[listP].getNumPeli()){
                peliculaN=pelicula[listP].getNombrePelicula();
              }
              listP++;
           }
            lPelicula=cleanR(peliculaN).size();
            lSala=to_string((funciones[listF].getSala())).size();
            if (lPelicula>lPelicula2)
            {
              lPelicula2=lPelicula;
            }
         
            if (lSala>lSala2)
            {
              lSala2=lSala;
            }
            horaFormato=(funciones[listF].getHora()).mostrar();
        }
    listF++;
    }
    //Fin de la obtencion del largo
    system("clear");
    if(listP==0){
					int prop;
					HH=-1;
					funcionesText();
					cout<<"No hay funciones en este horario"<<endl;
					cout<<"¿Desea buscar de nuevo? Si(1) o No(2)"<<endl;
					cin>>prop;
					if(prop==1){
						system("clear");
					}
					else{
						break;
					}
		}
		
		else{
		funcionesText();
    cout<<"▄▄▄▄▄▄▄▄"<<multiString(horaFormato.size()+2,"-")<<"▄"<<endl;      
    cout<<"█ Hora ║ "<<horaFormato<<" ║"<<endl;
    cout<<"▀▀▀▀▀▀▀▀"<<multiString(horaFormato.size()+2,"-")<<"▀"<<endl;
    cout<<endl;
    listF=0;     
 cout<<multiString(lPelicula2+lSala2+7,"▄")<<endl;
    cout<<"█ Película "<<multiString(lPelicula2-8," ")<<"▌ Sala "<<multiString(lSala2-4," ")<<"█"<<endl;
    cout<<"█"<<multiString(lPelicula2+2,"▀")<<"█"<<multiString(lSala2+2,"▀")<<"█ "<<endl;

        while(listF<f){
          int hora=(funciones[listF].getHora()).getHH();
          int minutos=(funciones[listF].getHora()).getMM();
          string sala=to_string(funciones[listF].getSala());
          listP=0;

            if(HH==hora && MM==minutos){
              
            while(listP<p){
              if(funciones[listF].getNumPeli() == pelicula[listP].getNumPeli()){
                peliculaN=cleanR(pelicula[listP].getNombrePelicula());
              }
              listP++;
            }
     
      cout<<"█ "<<peliculaN<<multiString(lPelicula2-peliculaN.length()," ")<<" █ "<<sala<<multiString(lSala2-sala.size()," ")<<" █"<<endl;
      
      cout<<"█"<<multiString(lPelicula2+2,"═")<<"█"<<multiString(lSala2+2,"═")<<"█ "<<endl;

    
            
            }
          listF++;					
        }

					int prop;
					HH=-1;
					cout<<endl<<"¿Desea buscar de nuevo? Si(1) o No(2)"<<endl;
					cin>>prop;
					if(prop==1){
						system("clear");
					}
					else{
						break;
					}
      }
			}
      else{
      errorText();
      cout<<"Los minutos deben de ser entre 0 y 59"<<endl<<endl;
      wait();
      system("clear");
      }
    }
    else{
      errorText();
      cout<<"La hora debe ser entre 0 y 23"<<endl<<endl;
      wait();
      system("clear");
    }
    }
  }//Fin de la Opcion 4 busqueda por Hora

	//Inicio de la opcion 5 Busqueda por clave
	else if(op==5){
    again5:;
		string clave;
		buscarClaveText();
    		cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<endl;
    		cout<<"█ Ingrese la clave de funcion █"<<endl;
    		cout<<"▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"<<endl;
		cout<<endl<<"Clave: ";
		cin>>clave;
		
	 	int listF=0;
		string claveFuncion;
		 //Encuentro la posicion dentro del arreglo la funcion 
		 while(listF<f){
			claveFuncion=funciones[listF].getcveFuncion();
			if(clave == claveFuncion){//La posición se queda en listF
				break;
			}
			listF++; 	
		 }
		 if(clave != claveFuncion){//Verifico si es igual
				cout<<"La clave no existe";
			}

		else{
			system("clear");
			funcionText();
		//Comienzo con la obtención de los datos para la impresión
			  int listP=0;
				while(listP<p){
					if(pelicula[listP].getNumPeli() == funciones[listF].getNumPeli()){
					break;
					}
					listP++;
					
				}
		  int multi=(pelicula[listP].getNombrePelicula()).size();
      
      string linea2=pelicula[listP].getGenero()+" █ Año: "+ to_string(pelicula[listP].getAnio())+" █ Duración: "+ to_string(pelicula[listP].getDuracion())+" min";
      string centrar1=multiString(((linea2.size()-2-multi)/2)," ");
      string centrar2=multiString(((linea2.size()-10)/2)," ");
			string sala=to_string(funciones[listF].getSala());
			string hora=(funciones[listF].getHora()).mostrar();

		  cout << multiString(sala.size()+hora.size()+19,"▄") <<endl;  
			cout<<"█ Sala: "<<sala<<" █ "<<"Hora: "<<hora<<" █"<<endl;
			cout << multiString(sala.size()+hora.size()+19,"▀") <<endl;
      cout<<centrar1<<cleanR(pelicula[listP].getNombrePelicula())<<endl;
      cout << multiString((linea2.length())-2,"▄") <<endl;  
      cout<<"█ "<<linea2<<" █"<<endl;
      cout<<"█"<<multiString2(pelicula[listP].getGenero(),to_string(pelicula[listP].getAnio()),to_string(pelicula[listP].getDuracion()))<<endl;
      cout<<"█"+centrar2<<"Actores";
      
      if((linea2.size()-(centrar2.size()*2))==10 )
      {
        centrar2=multiString(((linea2.size()-10)/2)-1," "); 
      
      }
      
      cout<<centrar2<<"█"<<endl; 
      cout<<"█"<<multiString((linea2.length())-4,"-")<<"█"<<endl;      
      int i=0;
      while((pelicula[listP].getListaActores(i).getId()) !=0){
      int lNombre=(pelicula[listP].getListaActores(i).getNombre()).size();
      string actor = pelicula[listP].getListaActores(i).getNombre();
      string centrar3=multiString(((linea2.size()-2-(actor.size()))/2)," "); 
      
      int largo1=(cleanR(actor)).size() +((centrar3.size()-2)*2);
      int largo2=linea2.size()-4;  
      int diferencia;
  
    
      cout<<"█"<<centrar3<<cleanR(actor);
      if((largo2-largo1)==3)
      {
        diferencia=1;
        centrar3=multiString(((linea2.size()-2-(cleanR(actor).size()))/2)-diferencia," "); 
      }

      
      cout<<centrar3<<"█"<<endl;
      
      i++;
      }
      cout << multiString((linea2.length())-2,"▀") <<endl;
      cout<<endl;
		
		}//Fin de la Impresión de los datos
					int prop;
				 	cout<<endl<<"¿Desea buscar de nuevo? Si(1) o No(2)"<<endl;
					cin>>prop;
					if(prop==1){
						system("clear");
			  	goto again5;//Regreso al inicio de la opcion 
					}
		
	}//Fin de la opcion 5 busqueda de funcion por Clave

	//Inicion de la opcion 6 buscar Peliculas por Actor

	else if(op == 6){
	  again6:;
	  buscarActorText();
	  int id;
	  cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<endl;
	  cout<<"█ Ingrese el id del actor █"<<endl;
	  cout<<"▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"<<endl;
	  cout<<endl<<"Id: ";
	  cin>>id;
	  int countA=0;
		while(countA<a){
			if(id == actor[countA].getId()){
				break;
			}
			countA++;
		}
		if(id != actor[countA].getId()){
		cout<<"El id no existe"<<endl;
		
		}
		else{
		  int listP=0;
			int listaPeliculas[p];
			int alist=0;
			while(listP<p){
				int cantActores=pelicula[listP].getCantidadActores();
			
				int ca=0;
				while(ca<cantActores){
				int actId=(pelicula[listP].getListaActores(ca)).getId();

				if(actId == id){
					listaPeliculas[alist]=listP;
				  alist++;
				}
				ca++;
				}
				listP++;
			}

			
      int x=0;
			int lPelicula=0,lPelicula2=8;
			int lAnio=0,lAnio2=4;


		 while(x<alist){
				lPelicula=(pelicula[x].getNombrePelicula()).size();
				if(lPelicula>lPelicula2){
					lPelicula2=lPelicula;
				}
				if(lAnio>lAnio2){
					lAnio2=lAnio;
				}
				x++;
			}
			system("clear");
			peliculasText();
			cout<<"▄"<<multiString((actor[countA].getNombre()).size()+1,"═")<<"▄"<<endl;
			cout<<"█ "<<cleanR(actor[countA].getNombre())<<" █"<<endl;
			cout<<"▀"<<multiString((actor[countA].getNombre()).size()+1,"═")<<"▀"<<endl;

			cout<<multiString(lPelicula2+lAnio2+7,"▄")<<endl;
			cout<<"█ Pelicula "<<multiString(lPelicula2-8," ")<<"█ Año "<<multiString(lAnio-4," ")+" █"<<endl;

			cout<<"█"+multiString(lPelicula2+2,"▀")<<"█"<<multiString(lAnio2+2,"▀")+"█"<<endl;
			x=0;
			while(x<alist){
				string peliculaN=cleanR(pelicula[x].getNombrePelicula());
				string anio=to_string(pelicula[x].getAnio());
					cout<<"█ "<<peliculaN<<multiString(lPelicula2-peliculaN.size()," ")<<" █ "<<multiString(lAnio2-anio.size()," ")<<anio<<" █"<<endl;

					cout<<"█"<<multiString(lPelicula2+2,"═")<<"█"<<multiString(lAnio2+2,"═")<<"█"<<endl;
				x++;
			}

		}
			int prop;
				 	cout<<endl<<"¿Desea buscar de nuevo? Si(1) o No(2)"<<endl;
					cin>>prop;
					if(prop==1){
						system("clear");
			  	goto again6;//Regreso al inicio de la opcion 
					}

	}//Fin de la opcion 6 Busqueda por actor

	


}

}


