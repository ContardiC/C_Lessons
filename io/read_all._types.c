
// A program that read ALL different types of variables in C

#include <stdio.h>
int main(){
    int num;
    char ch;
    double d;
    float sp;
    unsigned ui;
    long l;
    long long ll;
    short s;
    unsigned long ul;
    unsigned long long ull;
    unsigned short us;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while ((getchar()) != '\n');
    printf("Enter a character: ");
    ch = getchar();
    while ((getchar()) != '\n');
    printf("Enter a double: ");
    scanf("%lf", &d);
    while ((getchar()) != '\n');
    printf("Enter a float: ");
    scanf("%f", &sp);
    while ((getchar()) != '\n');
    printf("Enter an unsigned integer: ");
    scanf("%u", &ui);
    while ((getchar()) != '\n');
    printf("Enter a long: ");
    scanf("%ld", &l);
    while ((getchar()) != '\n');
    printf("Enter a long long: ");
    scanf("%lld", &ll);
    while ((getchar()) != '\n');
    printf("Enter a short: ");
    scanf("%hd", &s);
    while ((getchar()) != '\n');
    printf("Enter an unsigned long: ");
    scanf("%lu", &ul);
    while ((getchar()) != '\n');
    printf("Enter an unsigned long long: ");
    scanf("%llu", &ull);
    while ((getchar()) != '\n');
    printf("Enter an unsigned short: ");
    scanf("%hu", &us);
    while ((getchar()) != '\n');
    printf("%d\n", num);
    printf("%c\n", ch);
    printf("%lf\n", d);
    printf("%f\n", sp);
    printf("%u\n", ui);
    printf("%ld\n", l);
    printf("%lld\n", ll);
    printf("%hd\n", s);
    printf("%lu\n", ul);
    printf("%llu\n", ull);
    printf("%hu\n", us);  
    return 0;
}
