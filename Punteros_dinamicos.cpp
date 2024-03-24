#include <iostream>
using namespace std;

main(){
    int total = 0;
    int notas[total];
    char res;
do {
    cout << "Ingrese la cantidad de notas: " << total << ": "; 
    cin >> notas[total];
    total++;
    cout<<"Desea ingresar otro valor (s/n):";
    cin>>res;
}while (res=='s'||res=='S');
cout << "-----Mostrar notas-----"<<endl;
for(int i=0;i<total;i++){
    cout<<"Nota ("<<i<<"): "<<notas[i]<<endl;
}




/*
//primer ejemplo
int edad, *p_edad;
p_edad=&edad; //Asignamos la direccion de memoria a la variable p_edad
cout<<"Ingrese su edad: ";
cin>>edad;  //Le
cout<<*p_edad<<endl;//Imprimimos el valor que tiene la variable edad por medio de la variable puntero p_edad. Es como si escribieramos cout<<edad

if(*p_edad>18){
    cout<<"Mayor de edad"<<endl;
}//Acced
else{
	cout<<"Menor de edad"<<endl;
}
*/

system("pause");


}
