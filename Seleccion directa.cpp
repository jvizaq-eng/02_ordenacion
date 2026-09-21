#include <iostream>
using namespace std;

void seleccionDir(int A[], int n) {
    int menor, k;

    for (int i = 0; i < n - 1; i++) {
        menor = A[i]; 
        k = i;      
        for (int j = i + 1; j < n; j++) {
            if (A[j] < menor) {
                menor = A[j];
                k = j;       
            }
        }
        A[k] = A[i];
        A[i] = menor;
    }
}

int main() {
    int n;
    cout << "Ingresa la cantidad de elementos: ";
    cin >> n;

    int A[n];
    cout << "Ingresa los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> A[i];
    }

    seleccionDir(A, n);

    cout << "\nArreglo ordenado:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}