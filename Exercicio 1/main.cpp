#include <iostream>

using namespace std;

/*
    Proposta:
    Dado um vetor A de tamanho N, com valores inteiros e um valor inteiro X.
        - Implemente um algoritmo de busca sequencial recursivo que retorne o índice do vetor caso X seja encontrado e -1 caso contŕario.
            - Demonstrar matemáticamente a complexidade de busca no pior caso.
            - Responder se a complexidade no pior caso é a mesma da versão iterativa.
            - Testar o algoritmo para diferentes casos de entrada, variando o tamanho e conteúdo do vetor.
*/

int searchValue(int x, int n, int a[]) {
    if(n <= 0) {
        return -1;
    }
    if(a[n-1] == x) {
        return n - 1;
    }
    return searchValue(x, --n, a);
}

int main() {
    // Declaração das variáveis n (tamanho do vetor) e x (valor a ser buscado)
    int n;
    int x;

    // Declaração dos valores para o teste 1
    n = 5;
    int a[n] = { 2, 8, 5, 6, 3 };
    x = 6;
    // Saída para o teste 1
    cout << "Teste 1: " << searchValue(x, n, a) << endl;

    // Declaração dos valores para o teste 2
    n = 7;
    int b[n] = { 3, 6, 9, 10, 8, 2, 1 };
    x = 1;
    // Saída para o teste 2
    cout << "Teste 2: " << searchValue(x, n, b) << endl;

    // Declaração dos valores para o teste 3
    n = 10;
    int c[n] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    x = 8;
    // Saída para o teste 3
    cout << "Teste 3: " << searchValue(x, n, c) << endl;
    
    return 0;
}