#include <fstream>
#include <iostream>
#include <string.h>
using namespace std; 
using std::cout;
using std::cin;
using std::endl;

//Programa 1: arreglo dinámico 
void rellenar(int col, int fil, float **M);
int main(int argc, char **argv){
	//Se declaran variables
	int n = 0;
	int* factorial = NULL; 
	int i;
	int n_side;
	//Se piden los parámetros de ingreso
	cout << "Ingrese un número al arreglo "<< endl;
	cin >> n;
	//Este loop recorre el arreglo de n y calcula el factorial para cada elemento
	for(i=0;i<n;i++){
		 factorial[i] = fact(i);}
	 //Se convierte de string a entero
	n_side = atoi(argv[1]);
	lista  = new double[n_side * n_side];
	}

/*int fact (int num){
	
}*/
void rellenar (int col, int fil, float **M){
	int a,b;
		for (b =0;b<=col; b++){
			M[a][b]=a+b;}
		} 


//Programa 2: Archivos de datos 

	
//A continuación se leen los archivos .txt
  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);
