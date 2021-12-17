#include <iostream>
#include <string>
#include "RecetaFactory.cpp"
using namespace std;

int main()
{
	int type;
	while (1) {
		cout << endl << "Ingresa un tipo (1 a 3) o '0' para salir" << endl;
		cin >> type;
		if (!type) {
			break;
		}
		Receta *v = RecetaFactory::createReceta(type);
		if (v) {
			v->Presentar();
			delete v;
		}
	}
	cout << "Saliendo..." << endl;

	return 0;
}
