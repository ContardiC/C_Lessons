#include <stdio.h>

int main()
{
    int num;
    char ch;
    double d;
    printf("Enter an integer");
    scanf("%d", &num);
    while ((getchar()) != '\n');

    printf("Enter a character");
    ch = getchar();
    while ((getchar()) != '\n');

    printf("Enter a double ");

    scanf("%lf", &d);

    printf("%d\n", num);
    printf("%c\n", ch);
    printf("%lf\n", d);

    return 0;
}
