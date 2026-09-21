#include <iostream>
using namespace std;

void interDirectoSen(int A[], int n) {
    int aux;
    int cen = 1; 
    int i = 0;   

    while (i < n - 1 && cen == 1) {
        cen = 0; 
        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
                cen = 1; 
            }
        }
        i++;
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

    interDirectoSen(A, n);

    cout << "\nArreglo ordenado:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}