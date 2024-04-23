#include <iostream>

using namespace std;

/*
    Proposta:
    Dado um valor inteiro positivo N.
        - Implemente o algoritmo iterativo de fibonacci. De modo a retornar o valor inteiro X na posição N da sequência de fibonacci.
            - Determinar a complexidade no pior caso.
            - Comparar a complexidade da versão iterativa com a versão recursiva.
*/

int fibonacci(int n){
    int current = 0;
    int previous = 1;
    int i = 2;
    while(i <= n + 1) {
        int temp = current + previous;
        previous = current;
        current = temp;
        i++;
    }
    return current;
}

int main(){
    // Declaração da variável n (posição do valor a ser buscado)
    int n;

    // Teste 1
    n = 5;
    cout << "Teste 1: " << fibonacci(n) << endl;

    // Teste 2
    n = 8;
    cout << "Teste 2: " << fibonacci(n) << endl;

    // Teste 3
    n = 15;
    cout << "Teste 3: " << fibonacci(n) << endl;

    return 0;
}