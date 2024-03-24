#include <iostream>
using namespace std;

main()
{

    int edad=25, *p_edad; //declaración de variables y puntero a edad
    p_edad= &edad;      //asignación del valor de la variable al puntero
  
    cout << "Variable edad es: " << edad << endl;
    cout << "Puntero edad: "<< *p_edad << endl; 

    cout << "----- Cambiar valores ----- " << endl;  
    *p_edad=40;

    cout << "Variable edad es: " << edad << endl;
    cout << "Puntero edad: "<< *p_edad << endl; 

    cout << "----- Otra variable a p_edad valores ----- " << endl;  
    int edad2=100;
    p_edad=&edad2;
	edad=400;     //cambio de dirección de memoria para el puntero

    cout << "Variable edad es: " << edad << endl;
    cout << "Puntero edad: "<< *p_edad << endl; 
	cout << "Variable edad2: "<< edad2 << endl; 

//    cout << "El Puntero es: " << &p_edad << endl;  


/*
//ejemmplo 1
    int edad=25, *p_edad; //declaración de variables y puntero a edad
    p_edad= &edad;      //asignación del valor de la variable al puntero
    cout << "La edad es: " << edad << endl;
    cout << "El Puntero es: "<< *p_edad << endl; 
    cout << "El Puntero es: " << &p_edad << endl;  

*/    
    system ("pause");

}
