#include <iostream>
using namespace std;

void interDirectoBi(int A[], int n) {
    int aux;
    int izq = 1;     
    int der = n - 1; 
    int k = n - 1;  

    while (izq <= der) {
        for (int i = der; i >= izq; i--) {
            if (A[i - 1] > A[i]) {
                aux = A[i - 1];
                A[i - 1] = A[i];
                A[i] = aux;
                k = i; 
            }
        }
        izq = k + 1; 
        for (int i = izq; i <= der; i++) {
            if (A[i - 1] > A[i]) {
                aux = A[i - 1];
                A[i - 1] = A[i];
                A[i] = aux;
                k = i; 
            }
        }
        der = k - 1; 
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

    interDirectoBi(A, n);

    cout << "\nArreglo ordenado:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}