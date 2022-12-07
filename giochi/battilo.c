#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{ . 
    int dado1U, dado2U, dado1C, dado2C;
    int totaleUmano, totaleCPU;
    do
    {
        dado1U = lancioDado();
        dado2U = lancioDado();
        if (dado1U > dado2U)
        {
            totaleUmano += dado1U * 10 + dado2U;
        }
        else
        {
            totaleUmano += dado2U * 10 + dado1U;
        }
    } while (totaleUman < 500 && totaleCPU < 500);
    if(totaleCPU>totaleUmano){
        printf("CPU WIN");
    }
    if(totaleUmano>totaleCPU){
        printf("Umano WIN");
    }
}
int lancioDado()
{
    int faccia;
    faccia = (int)rand() % 6 + 1;
    return faccia;
}
