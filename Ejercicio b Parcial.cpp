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
		    cout << "La estacion del año es Primavera" << endl;
	    	break; 
		case VERANO: 
	    	cout << "La estacion del año es Verano" << endl;
	    	break;
		case OTONIO:
			cout << "La estacion del año es Otoño" << endl; 
			break;
		case INVIERNO: 
		    cout << "La estacion del año es Invierno" << endl;
		    break; 
		default: 
		    cout << "El numero que ingreso no está en el rango de 1 a 4" << endl;
		   break; 
			
	}
	return 0; 
}
