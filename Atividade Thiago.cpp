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
