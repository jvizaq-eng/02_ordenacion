#include <iostream>
using namespace std;

void insercionBin(int A[], int n) {
    int aux, izq, der, m;

    for (int i = 1; i < n; i++) {
        aux = A[i]; 
        izq = 0;   
        der = i - 1;

        while (izq <= der) {
            m = (izq + der) / 2; 
            
            if (aux < A[m]) {
                der = m - 1; 
            } else {
                izq = m + 1; 
            }
        }
        int j = i - 1;
        while (j >= izq) {
            A[j + 1] = A[j];
            j--;
        }
        A[izq] = aux;
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

    insercionBin(A, n);
    cout << "\nArreglo ordenado:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}