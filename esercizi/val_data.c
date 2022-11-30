
#include <stdio.h>

int data_valida(int g, int m, int a);            /*controlla se la data è valida
																	0 = data valida
																	1 = errore nel giorno
																	2 = errore nel mese
																	3 = errore nell'anno
																 */
int bisestile(int a);                            //controlla se l'anno è bisestile
int max_giorni=0;                                //N° giorni del mese inserito

int main(){
	int giorno,mese,anno,errore;
	printf("Inserisci il giorno:\n"); 
	scanf("%d",&giorno);
	printf("Inserisci il mese:\n");
   scanf("%d",&mese);
	printf("Inserisci l'anno ( <= 2022)"); 
	scanf("%d",&anno);
	errore=data_valida(giorno,mese,anno);
	if (errore==0) 
		printf("\nHai inserito una data valida!\n");
	else {
		printf("\nHai inserito una data non valida!\n");
		switch(errore){
			case 1:
				printf("ERRORE: Il giorno deve essere compreso tra 1 e %d ",max_giorni);
			break;
			case 2:
				printf("ERRORE: Il mese deve essere compreso tra 1 e 12");
			break;
			case 3:
				printf("ERRORE: L'anno deve essere compreso tra 0 e 2022");
			break;
		}
	}
	return 0;
}

int bisestile(int a){
	if ( (a%4) == 0) return 1;   //se l'anno è bisestile restituisce 1
	else return 0;               //altrimenti restituisce 0
}

int data_valida(int g, int m, int a){
	if (m<1 || m>12) return 2; //se il mese inserito non è valido restituisce 2
	else {
		if (a<0 || a>2004) return 3; //se l'anno inserito non è valido restituisce 3
		else {
			switch(m){                //assegna a max_giorni il numero massimo di giorni del mese inserito
				case 1: max_giorni=31; break;
				case 2: if (bisestile(a)) max_giorni=29; //se l'anno è bisestile assegna a max_giorni 29
						  else max_giorni=28;              //altrimenti gli assegna 28
						  break;
				case 3: max_giorni=31; break;
				case 4: max_giorni=30; break;
				case 5: max_giorni=31; break;
				case 6: max_giorni=30; break;
				case 7: max_giorni=31; break;
				case 8: max_giorni=31; break;
				case 9: max_giorni=30; break;
				case 10: max_giorni=31; break;
				case 11: max_giorni=30; break;
				case 12: max_giorni=31; break;
			}
			if (g<1 || g>max_giorni) return 1;	//se il giorno inserito non è valido restituisce 1
			else return 0;                      //altrimenti restituisce 0
		}
	}
}

