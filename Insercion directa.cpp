#include <iostream>
using namespace std;

void insercionDir(int A[], int n) {
    int aux, k;

    for (int i = 1; i < n; i++) {
        aux = A[i]; 
        k = i - 1;  
   
        while (k >= 0 && aux < A[k]) {
            A[k + 1] = A[k]; 
            k--;            
        }
        A[k + 1] = aux;
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

    insercionDir(A, n);

    cout << "\nArreglo ordenado:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}