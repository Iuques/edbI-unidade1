#include <iostream>

using namespace std;

/*
    Proposta:
    Dado um vetor A, de tamanho N.
        - Implemente um algorítmo que verifica se o vetor está ordenado de forma crescente.
            - Caso esteja ordenado retorna verdadeiro, caso contrário retorna falso.
            - Demonstrar a complexidade para melhor e pior caso.
*/

bool isSorted(int n, int a[]) {
    int i = 1;
    while (i < n) {
        if (a[i] < a[i-1]){
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    // Declaração da variável n (tamanho do vetor)
    int n;

    // Declaração dos valores para o teste 1
    n = 6;
    int a[n] = { 2, 4, 6, 8, 10, 12 };
    // Saída para o teste 1
    cout << "Teste 1: " << isSorted(n, a) << endl;

    // Declaração dos valores para o teste 2
    n = 8;
    int b[n] = { 1, 3, 15, 7, 19, 11, 13, 15 };
    // Saída para o teste 2
    cout << "Teste 2: " << isSorted(n, b) << endl;

    // Declaração dos valores para o teste 3
    n = 10;
    int c[n] = { 1, 2, 3, 5, 6, 7, 8, 9, 11, 12 };
    // Saída para o teste 3
    cout << "Teste 3: " << isSorted(n, c) << endl;

    // Declaração dos valores para o teste 4
    n = 12;
    int d[n] = { 1, 2, 3, 4, 5, 7, 6, 8, 9, 10, 11, 12 };
    // Saída para o teste 4
    cout << "Teste 4: " << isSorted(n, d) << endl;
    
    return 0;
}