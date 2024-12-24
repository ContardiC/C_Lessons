Certo! Ecco tutte le soluzioni in un unico file markdown:

```markdown
# Soluzioni Esercizi in Linguaggio C

## 1. Hello World
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

## 2. Somma di Due Numeri
```c
#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("La somma è: %d\n", sum);
    return 0;
}
```

## 3. Pari o Dispari
```c
#include <stdio.h>

int main() {
    int num;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d è pari.\n", num);
    else
        printf("%d è dispari.\n", num);
    return 0;
}
```

## 4. Massimo di Tre Numeri
```c
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Inserisci tre numeri: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Il massimo è: %d\n", max);
    return 0;
}
```

## 5. Fattoriale
```c
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        fact *= i;
    }
    printf("Il fattoriale di %d è %llu\n", n, fact);
    return 0;
}
```

## 6. Tabellina del 9
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; ++i) {
        printf("9 x %d = %d\n", i, 9 * i);
    }
    return 0;
}
```

## 7. Numeri Primi
```c
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("%d è un numero primo.\n", num);
    else
        printf("%d non è un numero primo.\n", num);
    return 0;
}
```

## 8. Calcolatrice Base
```c
#include <stdio.h>

int main() {
    char operator;
    double first, second;
    printf("Inserisci un operatore (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Inserisci due numeri: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
            break;
        default:
            printf("Operatore non valido.\n");
    }
    return 0;
}
```

## 9. Serie di Fibonacci
```c
#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Inserisci il numero di termini: ");
    scanf("%d", &n);
    printf("Serie di Fibonacci: %d, %d, ", t1, t2);

    for (int i = 1; i <= n-2; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ", nextTerm);
    }
    printf("\n");
    return 0;
}
```

## 10. Invertire una Stringa
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;
    printf("Inserisci una stringa: ");
    scanf("%s", str);
    j = strlen(str) - 1;
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("La stringa invertita è: %s\n", str);
    return 0;
}
```

## 11. Palindromo
```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    printf("Inserisci una stringa: ");
    scanf("%s", str);
    if (isPalindrome(str))
        printf("%s è un palindromo.\n", str);
    else
        printf("%s non è un palindromo.\n", str);
    return 0;
}
```

## 12. Ricerca Binaria
```c
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Elemento non presente nell'array.\n")
                   : printf("Elemento presente nell'array all'indice %d\n", result);
    return 0;
}
```

## 13. Ordinamento Bubble Sort
```c
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; n - i - 1 > j; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Array ordinato: \n");
    printArray(arr, n);
    return 0;
}
```

## 14. Somma dei Numeri di un Array
```c
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("La somma degli elementi dell'array è: %d\n", sum);
    return 0;
}
```

## 15. Media di un Array
```c
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double avg = (double)sum / n;
    printf("La media degli elementi dell'array è: %.2lf\n", avg);
    return 0;
}
```

Certamente! Ecco le soluzioni degli esercizi dal 16 al 20 in linguaggio C, formattate in markdown:

```markdown
## 16. Scambio di Variabili
```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Prima dello scambio: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Dopo lo scambio: a = %d, b = %d\n", a, b);
    return 0;
}
```

## 17. Numero Magico
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroMagico, tentativo;
    srand(time(0));
    numeroMagico = rand() % 100 + 1;

    printf("Indovina il numero magico (tra 1 e 100): ");

    do {
        scanf("%d", &tentativo);
        if (tentativo < numeroMagico)
            printf("Troppo basso! Riprova: ");
        else if (tentativo > numeroMagico)
            printf("Troppo alto! Riprova: ");
        else
            printf("Complimenti! Hai indovinato.\n");
    } while (tentativo != numeroMagico);

    return 0;
}
```

## 18. Conteggio Caratteri
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Inserisci una stringa: ");
    scanf("%s", str);
    int lunghezza = strlen(str);
    printf("La stringa '%s' contiene %d caratteri.\n", str, lunghezza);
    return 0;
}
```

## 19. Conversione da Celsius a Fahrenheit
```c
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Inserisci la temperatura in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius è equivalente a %.2f Fahrenheit.\n", celsius, fahrenheit);
    return 0;
}
```

## 20. Calcolo della Potenza
```c
#include <stdio.h>
#include <math.h>

int main() {
    double base, esponente, risultato;
    printf("Inserisci la base: ");
    scanf("%lf", &base);
    printf("Inserisci l'esponente: ");
    scanf("%lf", &esponente);
    risultato = pow(base, esponente);
    printf("%.2lf elevato a %.2lf è %.2lf.\n", base, esponente, risultato);
    return 0;
}
```


