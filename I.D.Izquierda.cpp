#include <iostream>
using namespace std;

void interDirectoIzq(int A[], int n) {
    int aux;

    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            if (A[j] < A[j - 1]) {
                aux = A[j - 1];
                A[j - 1] = A[j];
                A[j] = aux;
            }
        }
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

    interDirectoIzq(A, n);

    cout << "\nArreglo ordenado:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}