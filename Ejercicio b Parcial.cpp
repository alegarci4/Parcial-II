#include <iostream>
using namespace std;
int main () {
	enum Estaciones {
		PRIMAVERA = 1, 
		VERANO,
		OTONIO,
		INVIERNO,  
	};
	int numero; 
	cout << "Ingrese un numero del 1 al 4: "; 
	cin >> numero; 
	
	switch (numero) {
		case PRIMAVERA: 
		    cout << "La estacion del a�o es Primavera" << endl;
	    	break; 
		case VERANO: 
	    	cout << "La estacion del a�o es Verano" << endl;
	    	break;
		case OTONIO:
			cout << "La estacion del a�o es Oto�o" << endl; 
			break;
		case INVIERNO: 
		    cout << "La estacion del a�o es Invierno" << endl;
		    break; 
		default: 
		    cout << "El numero que ingreso no est� en el rango de 1 a 4" << endl;
		   break; 
			
	}
	return 0; 
}
