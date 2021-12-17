#include <iostream>
#include <string>
using namespace std;

class Receta {
protected:
	string name;
	float price;
	int codigo;
	int porciones;
	string categoria;
public:
	virtual void registrarPorciones()=0;
	virtual void clasificarCategoria() =0;
	virtual void cargarRaciones() = 0;
	virtual void cargarIngredientes() = 0;
	virtual void calcularPorciones() = 0;
	virtual void registrandoPasos() = 0;
	virtual void Presentar() = 0;
};

class Ceviche : public Receta {
protected:
	string name="Ceviche";
	int porciones;
	float price=0.5;
	int codigo = 01;
	string categoria="Peruano";
	
public:
	void registrarPorciones(){ 
		cout <<"Ingrese cantidad de Porciones: "<< endl;
		cin >> porciones;
		price *= porciones;
	};
	void clasificarCategoria() { cout << "Clasificando por Categoria: " << categoria << endl; };
	void cargarRaciones() { cout << "Cantidad de Personas: " << porciones << endl; };
	void cargarIngredientes() { cout << "Calculando los ingredientes" << endl; };
	void calcularPorciones() { cout << "Calculando peso de ingredientes por cantidad de porciones" << endl; };
	void registrandoPasos() { cout << "Calculando los pasos de acuerdo al peso de ingredientes "<<endl; };
	void Presentar(){ cout <<"Nombre de receta: "<< name << endl <<"Precio: "<< price <<endl <<"Porciones: "<< porciones <<endl; };
};

class Chaufa : public Receta {
protected:
	string name="Chaufa";
	int porciones;
	float price=0.8;
	int codigo = 02;
	string categoria="Peruano";

public:
	void registrarPorciones(){ 
		cout <<"Ingrese cantidad de Porciones: "<< endl;
		cin >> porciones;
		price *= porciones;;
	};
	void clasificarCategoria() { cout << "Clasificando por Categoria" << categoria << endl; };
	void cargarRaciones() { cout << "Cantidad de Personas: " << porciones << endl; };
	void cargarIngredientes() { cout << "Calculando los ingredientes" << endl; };
	void calcularPorciones() { cout << "Calculando peso de ingredientes por cantidad de porciones" << endl; };
	void registrandoPasos() { cout << "Calculando los pasos de acuerdo al peso de ingredientes "<<endl; };
	void Presentar(){ cout <<"Nombre de receta: "<< name << endl <<"Precio: "<< price <<endl <<"Porciones: "<< porciones <<endl; };
};

class Sopa : public Receta {
protected:
	string name="Ceviche";
	int porciones;
	float price=0.10;
	int codigo = 03;
	string categoria="Peruano";
	
public:
	void registrarPorciones(){ 
		cout <<"Ingrese cantidad de Porciones: "<< endl;
		cin >> porciones;
		price *= porciones;
	};
	void clasificarCategoria() { cout << "Clasificando por Categoria" <<categoria << endl; };
	void cargarRaciones() { cout << "Cantidad de Personas: " << porciones << endl; };
	void cargarIngredientes() { cout << "Calculando los ingredientes" << endl; };
	void calcularPorciones() { cout << "Calculando peso de ingredientes por cantidad de porciones" << endl; };
	void registrandoPasos() { cout << "Calculando los pasos de acuerdo al peso de ingredientes "<<endl; };
	void Presentar(){ cout <<"Nombre de receta: "<< name << endl <<"Precio: "<< price <<endl <<"Porciones: "<< porciones <<endl; };
};
