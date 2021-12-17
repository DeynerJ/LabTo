#include <iostream>
#include "Object.cpp"

using namespace std;

class RecetaFactory {
public:
	static Receta *createReceta(int type) {
		Receta *Receta = NULL;

		switch (type)
		{
			case 1: {Receta = new Ceviche;
				break;
			}
			case 2: {Receta = new Chaufa;
				break;
			}
			case 3: {Receta = new Sopa;
				break;
			}
			default: {
				cout << "Receta invalida type, ingresa otra opcion" << endl;
				return NULL;
			}			
		}
		
		Receta-> registrarPorciones();
		Receta-> clasificarCategoria();
		Receta-> cargarRaciones();	
		Receta-> cargarIngredientes();
		Receta-> calcularPorciones();
		Receta-> registrandoPasos();
		Receta-> Presentar();
		return Receta;
	}
};
