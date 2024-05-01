#include <iostream>

using namespace std;

/*
    Proposta: 
    Dado um vetor A de tamanho N, ordenado de forma crescente:
        - Implemente um algoritmo de busca binária na forma iterativa.
            - Responder se complexidade temporal no pior caso e melhor caso é a mesma que a versão recursiva.
            - Responder qual a complexidade espacial e temporal para a versão
            recursiva e iterativa.
            - Testar o algoritmo para diferentes casos de entrada,
            variando o tamanho e conteúdo do vetor.
*/

int searchValue(int x, int n, int a[]){
    int low = 0;
    int high = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == x) {
            return mid;
        } else if (a[mid] < x){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    // Declaração das variáveis n (tamanho do vetor) e x (valor a ser buscado)
    int n;
    int x;

    // Declaração dos valores para o teste 1
    n = 5;
    int a[n] = { 2, 4, 6, 8, 10 };
    x = 6;
    // Saída para o teste 1
    cout << "Teste 1: " << searchValue(x, n, a) << endl;

    // Declaração dos valores para o teste 2
    n = 8;
    int b[n] = { 1, 3, 5, 7, 9, 11, 13, 15 };
    x = 1;
    // Saída para o teste 2
    cout << "Teste 2: " << searchValue(x, n, b) << endl;

    // Declaração dos valores para o teste 3
    n = 12;
    int c[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    x = 8;
    // Saída para o teste 3
    cout << "Teste 3: " << searchValue(x, n, c) << endl;
    
    return 0;
}