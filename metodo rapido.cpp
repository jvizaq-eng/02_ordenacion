#include <iostream>
using namespace std;

void quickSort(int A[], int n) {
	void Reduce(int A[], int inicio, int final);
}

void Reduce(int A[], int inicio, int final) {
	int izq, der, pos, cen, aux;
	izq = inicio;
	der = final;
	pos = izq;
	cen = 1;
	while (cen = 1) {
		cen = 0;
		while (A[pos] <= A[der] && (pos != der)) {
			der = der - 1;
		}
		if (pos != der) {
			aux = A[pos];
			A[pos] = A[der];
			A[der] = aux;
			pos = der;
			while (A[pos] >= A[izq] && (pos != izq)) {
				izq = izq + 1;
			}
			if (pos != izq) {
				aux = A[pos];
				A[pos] = A[izq];
				A[izq] = aux;
				pos = izq;
				cen = 1;
			}
		}
		if (pos - 1 > inicio) {
			Reduce(A, inicio, pos-1);
		}
		if (pos + 1 < final) {
			Reduce(A, pos+1, final);
		}
	}
}

int main () {
	int n;
	cout << "Ingrese la cantidad de elementos: ";
	cin >> n;
	
	int A[n];
	cout << "Ingresa los " << n << " numeros:" << endl;
	for(int i = 0; i < n; i++) {
		cout << "Elemento [" << i << "]: ";
		cin >> A[i];
	}
	
	void quickSort(int A[], int n);
	
	cout << "\nArreglo ordenado: " << endl;
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}
