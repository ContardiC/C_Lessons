int fattoriale(int n);
int coeffBinomiale(int n, int k);
int main(){
    int n,k;
    printf("Inserisci N\n");
    scanf("%d",&n);
    printf("Le permutazioni di %d sono: %d ",n,fattoriale(n));
    printf("Inserisci K\n");
    scanf("%d",&k);
    printf("Coeff binomiale : %d",coeffBinomiale(n,k));
    return 0;
}
int fattoriale(int n){
    int i;
    int res=1;
    for(i=n;i>1;i--){
        res*=i;
    }
    return res;
}
int coeffbinomiale(int n, int k){
    int res;
    res=fattoriale(n)/(fattoriale(k)*fattoriale(n-k));
    return res;
}