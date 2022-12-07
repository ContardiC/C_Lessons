#include <stdio.h>
#define n 10
int main()
{
    int T[n] = {0, 7, 6, 7, 7, 6, 7, 6, 7, 7};
    int V[n] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, j, x = 0;
    
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
             if (T[i] == T[j])
                x++;
        } 
        if (!V[T[i]])
        {
            V[T[i]] = 1;
            if(x)
                V[T[i]] += x;
        }
        x = 0;
    } 
    for(i=0;i<n;i++){
        printf("\t %d",T[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("\t %d",V[i]);
    }
    return 0;
}