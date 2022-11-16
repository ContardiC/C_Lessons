#include <stdio.h>
#include <stdlib.h>
#define VALORELIMITE 7.5

char figura(int carta);
int semB();
int semG();
int estraiCarta();
int main()
{
    float sommaG=0,sommaB=0;
    int cartaG,cartaB;
    char scelta,semeG,semeB,nome;
    do{
        cartaB=estraiCarta();
        if (cartaB>=31){
            nome=figura(cartaB);
            semeB=semB();
            sommaB+=0.5;
            printf("\n il banchiere ha pescato un %c di %c\n",nome,semeB);
        }else{
            cartaB=rand()%10+1;
            semeB=semB();
            sommaB+=cartaB;
            printf("\n il banchiere ha pescato un %d di %c\n",cartaB,semeB);
        }
        cartaG=estraiCarta();
        if (cartaG>=31){
            nome=figura(cartaG);
            semeG=semG();
            sommaG+=0.5;
            printf(" hai pescato un %c di %c\n",nome,semeG);
        }else{
            cartaG=rand()%10+1;
            semeG=semG();
            sommaG+=cartaG;
            printf(" hai pescato un %d di %c\n",cartaG,semeG);
        }
        printf("vuoi continuare? S o N\n");
        scelta=getche();
        if (scelta=='n' || scelta=='N')
            exit(-1);
    }while(sommaG <VALORELIMITE && sommaB <VALORELIMITE);
    if (sommaG>VALORELIMITE || sommaB==VALORELIMITE)
        printf("\n il banchiere ha vinto");
    else                                    //il banchiere vince anche in caso di pareggio perchè questo è un gioco d'azzardo.
        printf("\n hai vinto");
    return 0;
}

char figura(int carta)
{
    char nome;
    srand(time(NULL));
    carta=rand()%3+1;
    switch(carta){
        case 1:
            nome='K';
            break;
        case 2:
            nome='J';
            break;
        case 3:
            nome='Q';
            break;
    }
    return nome;
}

int semB()
{
    int seme;
    seme=rand()%3+3;
    srand(time(NULL));
    return seme;
}

int semG()
{
    int seme;
    seme=rand()%3+1;
    srand(time(NULL));
    seme+=3;
    return seme;
}
int estraiCarta(){
    int res;
    srand(time(NULL));
    res=rand()%40+1;
    return res;
}