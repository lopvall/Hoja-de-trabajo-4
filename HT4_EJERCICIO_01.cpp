#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
int main (){

float malahierba=10.00;
float langostas=20;
float gusanos=30;
float todoloant=50.00;
int tipodeservicio=0;
float nohectareas=0;
float subtotal=0;
float total=0;
int contador=0;
int i=0;

cout<<"\nIngrese la cantidad de fumigaciones a registrar: "<<endl; cin>>contador;
cout<<"Ingrese el tipo de servicio: \n1=Mala_Hierba \n2=Langosta \n3=Gusanos \n4=Todo_lo_anterior"<<endl; cin>>tipodeservicio;
cout<<"Ingrese la cantidad de Hectareas fumigadas: "<<endl; cin>>nohectareas;

for(int i=1; i<=contador; i=i+1);
{
	if(tipodeservicio == 1){
	subtotal= malahierba*nohectareas;
}
	else if(subtotal >= 1500){
	total= (subtotal*0.10)-subtotal;
}
	else if(nohectareas >= 500){
	total= (subtotal*0.05)-subtotal;
}
	else if(tipodeservicio == 2){
	subtotal= langostas*nohectareas;
}
	else if(subtotal >= 1500){
	total= (subtotal*0.10)-subtotal;
}
	else if(nohectareas >= 500){
	total= (subtotal*0.05)-subtotal;
}
	else if(tipodeservicio == 3){
	subtotal= gusanos*nohectareas;
}
	else if(subtotal >= 1500){
	total= (subtotal*0.10)-subtotal;
}
	else if(nohectareas >= 500){
	total= (subtotal*0.05)-subtotal;
}
	else if(tipodeservicio == 4){
	subtotal= todoloant*nohectareas;
}
	else if(subtotal >= 1500){
	total= (subtotal*0.10)-subtotal;
}
	else if(nohectareas >= 500){
	total= (subtotal*0.05)-subtotal;
}
}
	ofstream registrofumigacion;
	system("PAUSE");
	try {
		registrofumigacion.open("seguro.txt",ios::out);
		registrofumigacion<<tipodeservicio<<"\t"<<nohectareas<<"\t"<<subtotal<<"\t"<<total<<endl;
		registrofumigacion.close();
		cout<<"Datos grabados en el archivo";
	}
	catch(exception X){
		cout<<"Error al grabar en el archivo";
		system("PAUSE");
	} //fin try/catch
	system("CLS"); 
	ifstream leerarchivo;
	leerarchivo.open("registrofumigacion.txt",ios::in);
	leerarchivo>>ltipodeservicio>>lnohectareas>>lsubtotal>>ltotal;	
	leerarchivo.close();

return 0;

}