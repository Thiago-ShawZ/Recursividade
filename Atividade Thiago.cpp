//1
#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fatorial(n - 1);
}

int main() {
    int n = 2;
    printf("%d\n", fatorial(n));
    return 0;
}

//2.
#include <stdio.h>

int somanaturais(int n) {
    if (n == 0) return 0;
    return n + somanaturais(n - 1);
}

int main() {
    int n = 2;
    printf("%d\n", somanaturais(n));
    return 0;
}
//3.
#include <stdio.h>

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n = 4;
    printf("%d\n", fibo(n));
    return 0;
}
//4.
#include <stdio.h>

int poten(int x, int n) {
    if (n == 0) return 1;
    return x * poten(x, n - 1);
}

int main() {
    int x = 2, n = 5;
    printf("%d\n", potencia(x, n));
    return 0;
}
//5.
#include <stdio.h>

void contagemregressiva(int n) {
    if (n < 0) return;
    printf("%d ", n);
    contagemregressiva(n - 1);
}

int main() {
    int n = 3;
    contagemregressiva(n);
    printf("\n");
    return 0;
}
//6.
#include <stdio.h>

int somadigitos(int n) {
    if (n == 0) return 0;
    return (n % 10) + somadigitos(n / 10);
}

int main() {
    int n = 4567;
    printf("%d\n", somadigitos(n));
    return 0;
}
//7.
#include <stdio.h>
#include <string.h>

void inverter(char *str, int inicio, int fim) {
    if (inicio >= fim) return;
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverter(str, inicio + 1, fim - 1);
}

int main() {
    char str[] = "recursão";
    inverter(str, 0, strlen(str) - 1);
    printf("%s\n", str);
    return 0;
}
//8
#include <stdio.h>
#include <string.h>

int ehPalindromo(char str[], int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }
    if (str[inicio] != str[fim]) {
        return 0;
    }
    return ehPalindromo(str, inicio + 1, fim - 1);
}

int verificaPalindromo(char str[]) {
    int tamanho = strlen(str);
    if (tamanho == 0) {
        return 1;
    }
    return ehPalindromo(str, 0, tamanho - 1);
}

int main() {
    char str1[] = "arara";
    char str2[] = "casa";
    
    printf("%s → %d\n", str1, verificaPalindromo(str1));
    printf("%s → %d\n", str2, verificaPalindromo(str2));
    
    return 0;
}
//9
#include <stdio.h>

int mdc(int a, int b) {
    return b == 0 ? a : mdc(b, a % b);
}

int main() {
    printf("%d\n", mdc(48, 18));
    return 0;
}
//10
#include <stdio.h>

int multiplicar(int a, int b) {
    if (b == 0) return 0;
    return a + multiplicar(a, b - 1);
}

int main() {
    printf("%d\n", multiplicar(4, 5));
    return 0;
}
//11
#include <stdio.h>

int contar_char(const char *str, char c) {
    if (*str == '\0') return 0;
    return (*str == c) + contar_char(str + 1, c);
}

int main() {
    printf("%d\n", contar_char("abracadabra", 'a'));
    return 0;
}
//12
#include <stdio.h>

int soma_array(int arr[], int tamanho) {
    if (tamanho <= 0) return 0;
    return arr[tamanho-1] + soma_array(arr, tamanho-1);
}

int main() {
    int array[] = {1, 2, 3, 4};
    printf("%d\n", soma_array(array, 4));
    return 0;
}
//13
#include <stdio.h>
#include <math.h>

int eh_primo_rec(int n, int divisor, int limite) {
    if (n <= 1) return 0;
    if (divisor > limite) return 1;
    if (n % divisor == 0) return 0;
    return eh_primo_rec(n, divisor + 1, limite);
}

int eh_primo(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0) return 0;
    return eh_primo_rec(n, 3, sqrt(n));
}

int main() {
    printf("%d\n", eh_primo(7));  // Saída: 1 (true)
    printf("%d\n", eh_primo(9));  // Saída: 0 (false)
    return 0;
}
//14
#include <stdio.h>

int decimalParaBinario(int n) {
    if (n == 0)
        return 0;
    return (n % 2) + 10 * decimalParaBinario(n / 2);
}

int main() {
    int num = 10;
    printf("%d\n", decimalParaBinario(num));
    return 0;
}
//15
#include <stdio.h>

void imprimirPares(int n) {
    if (n < 0)
        return;
    imprimirPares(n - 1);
    if (n % 2 == 0)
        printf("%d ", n);
}

int main() {
    int n = 6;
    imprimirPares(n);
    return 0;
}
//16
#include <stdio.h>

void imprimirImpares(int atual, int n) {
    if (atual > n)
        return;
    printf("%d ", atual);
    imprimirImpares(atual + 2, n);
}

int main() {
    int n = 7;
    imprimirImpares(1, n);
    return 0;
}
//17
#include <stdio.h>

int buscarElemento(int arr[], int tamanho, int alvo) {
    if (tamanho == 0)
        return 0;
    if (arr[0] == alvo)
        return 1;
    return buscarElemento(arr + 1, tamanho - 1, alvo);
}

int main() {
    int arr[] = {2, 4, 6, 8};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo = 6;
    printf("%d\n", buscarElemento(arr, tamanho, alvo));
    return 0;
}
//18
#include <stdio.h>

int comprimentoString(const char *str) {
    if (*str == '\0')
        return 0;
    return 1 + comprimentoString(str + 1);
}

int main() {
    const char *texto = "recursivo";
    printf("%d\n", comprimentoString(texto));
    return 0;
}
//19
#include <stdio.h>

void torreHanoi(int n, char origem, char auxiliar, char destino) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    torreHanoi(n - 1, origem, destino, auxiliar);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    torreHanoi(n - 1, auxiliar, origem, destino);
}

int main() {
    int n = 2;
    torreHanoi(n, 'A', 'B', 'C');
    return 0;
}
//20
#include <stdio.h>
#include <string.h>

void trocar(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutacoes(char *str, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s\n", str);
        return;
    }
    for (int i = inicio; i <= fim; i++) {
        trocar(&str[inicio], &str[i]);
        permutacoes(str, inicio + 1, fim);
        trocar(&str[inicio], &str[i]);
    }
}

int main() {
    char str[] = "abc";
    permutacoes(str, 0, strlen(str) - 1);
    return 0;
}
//21
#include <stdio.h>

void combinacoes_rec(int arr[], int dados[], int inicio, int fim, int index, int k) {
    if (index == k) {
        printf("{");
        for (int i = 0; i < k; i++) {
            printf("%d", dados[i]);
            if (i < k-1) printf(",");
        }
        printf("} ");
        return;
    }

    for (int i = inicio; i <= fim && fim - i + 1 >= k - index; i++) {
        dados[index] = arr[i];
        combinacoes_rec(arr, dados, i+1, fim, index+1, k);
    }
}

void gerar_combinacoes(int arr[], int n, int k) {
    int dados[k];
    combinacoes_rec(arr, dados, 0, n-1, 0, k);
}

int main() {
    int arr[] = {1, 2, 3};
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    gerar_combinacoes(arr, n, k);
    return 0;
}
//22
#include <stdio.h>

void subconjuntos_rec(int arr[], int aux[], int n, int pos) {
    if (pos == n) {
        printf("{");
        int primeiro = 1;
        for (int i = 0; i < n; i++) {
            if (aux[i]) {
                if (!primeiro) printf(",");
                printf("%d", arr[i]);
                primeiro = 0;
            }
        }
        printf("} ");
        return;
    }

    aux[pos] = 0;
    subconjuntos_rec(arr, aux, n, pos + 1);

    aux[pos] = 1;
    subconjuntos_rec(arr, aux, n, pos + 1);
}

void gerar_subconjuntos(int arr[], int n) {
    int aux[n];
    subconjuntos_rec(arr, aux, n, 0);
}

int main() {
    int arr[] = {1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    gerar_subconjuntos(arr, n);
    return 0;
}
//23
#include <stdio.h>

void merge(int arr[], int esquerda, int meio, int direita) {
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[esquerda + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[meio + 1 + j];

    int i = 0, j = 0, k = esquerda;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        mergeSort(arr, esquerda, meio);
        mergeSort(arr, meio + 1, direita);
        merge(arr, esquerda, meio, direita);
    }
}

int main() {
    int arr[] = {5, 3, 8, 1};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, tamanho - 1);

    for (int i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);

    return 0;
}
//24
#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int arr[], int baixo, int alto) {
    int pivô = arr[alto];
    int i = baixo - 1;

    for (int j = baixo; j < alto; j++) {
        if (arr[j] <= pivô) {
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[alto]);
    return i + 1;
}

void quickSort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(arr, baixo, alto);
        quickSort(arr, baixo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}

int main() {
    int arr[] = {9, 2, 5, 1, 7};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, tamanho - 1);

    for (int i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);

    return 0;
}
//25
#include <stdio.h>

int buscaBinaria(int arr[], int esquerda, int direita, int alvo) {
    if (esquerda > direita)
        return -1;

    int meio = esquerda + (direita - esquerda) / 2;

    if (arr[meio] == alvo)
        return meio;
    else if (arr[meio] > alvo)
        return buscaBinaria(arr, esquerda, meio - 1, alvo);
    else
        return buscaBinaria(arr, meio + 1, direita, alvo);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo = 5;

    int resultado = buscaBinaria(arr, 0, tamanho - 1, alvo);
    printf("%d\n", resultado);

    return 0;
}
//26
#include <stdio.h>

int exponenciacaoRapida(int x, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 0) {
        int meio = exponenciacaoRapida(x, n / 2);
        return meio * meio;
    } else {
        return x * exponenciacaoRapida(x, n - 1);
    }
}

int main() {
    int x = 3, n = 4;
    printf("%d\n", exponenciacaoRapida(x, n));
    return 0;
}
//27
#include <stdio.h>

int contarCaminhos(int x1, int y1, int x2, int y2) {
    if (x1 > x2 || y1 > y2)
        return 0;
    if (x1 == x2 && y1 == y2)
        return 1;
    return contarCaminhos(x1 + 1, y1, x2, y2) + contarCaminhos(x1, y1 + 1, x2, y2);
}

int main() {
    int caminhos = contarCaminhos(0, 0, 2, 2);
    printf("%d\n", caminhos);
    return 0;
}
//28
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int seguro(int tab[], int linha, int col) {
    for (int i = 0; i < linha; i++) {
        if (tab[i] == col || abs(tab[i] - col) == abs(i - linha))
            return 0;
    }
    return 1;
}

void imprimirSolucao(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (tab[i] == j)
                printf("Q ");
            else
                printf(". ");
        }
        printf("\n");
    }
    printf("\n");
}

void resolver(int tab[], int linha, int n) {
    if (linha == n) {
        imprimirSolucao(tab, n);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (seguro(tab, linha, col)) {
            tab[linha] = col;
            resolver(tab, linha + 1, n);
        }
    }
}

int main() {
    int n = 4;
    int *tab = malloc(n * sizeof(int));
    resolver(tab, 0, n);
    free(tab);
    return 0;
}
//29
#include <stdio.h>

#define N 3
#define M 4

int labirinto[N][M] = {
    {0, 1, 0, 0},
    {0, 0, 0, 1},
    {1, 0, 1, 0}
};

int caminho[N][M];

int mover(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < M && labirinto[x][y] == 0 && caminho[x][y] == 0;
}

int resolverLabirinto(int x, int y) {
    if (x == N - 1 && y == M - 1) {
        caminho[x][y] = 1;
        return 1;
    }

    if (mover(x, y)) {
        caminho[x][y] = 1;

        if (resolverLabirinto(x + 1, y)) return 1;
        if (resolverLabirinto(x, y + 1)) return 1;
        if (resolverLabirinto(x - 1, y)) return 1;
        if (resolverLabirinto(x, y - 1)) return 1;

        caminho[x][y] = 0;
    }
    return 0;
}

void imprimirCaminho() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (caminho[i][j])
                printf("* ");
            else
                printf("%d ", labirinto[i][j]);
        }
        printf("\n");
    }
}

int main() {
    if (resolverLabirinto(0, 0))
        imprimirCaminho();
    else
        printf("Sem caminho.\n");
    return 0;
}
//30
#include <stdio.h>
#include <string.h>

void gerarParenteses(char *str, int pos, int abertos, int fechados, int n) {
    if (fechados == n) {
        str[pos] = '\0';
        printf("%s\n", str);
        return;
    }

    if (abertos < n) {
        str[pos] = '(';
        gerarParenteses(str, pos + 1, abertos + 1, fechados, n);
    }

    if (fechados < abertos) {
        str[pos] = ')';
        gerarParenteses(str, pos + 1, abertos, fechados + 1, n);
    }
}

int main() {
    int n = 3;
    char str[2 * n + 1];
    gerarParenteses(str, 0, 0, 0, n);
    return 0;
}

