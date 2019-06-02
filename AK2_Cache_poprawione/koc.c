#include <stdio.h>
#define m 400
int pamiec [500000];// 32 bity
long long unsigned  czas [500000];
extern long long unsigned mytime(char);

long long unsigned mnozenie(int A[m][m])
{
 int i,j;
 int wynik[m][m];

for(i=0;i<m;i++){

	for (j=0;j<m;j++){

 		for(int k=0;k<m;k++){

 		wynik[i][j] += A[k][i]*A[j][k];}
}
}

}

long long unsigned mnozenieT(int A[m][m])
{
 int i,j;
 int wynik[m][m];

for(i=0;i<m;i++){

	for (j=0;j<m;j++){

		for(int k=0;k<m;k++){

 		wynik[i][j] += A[k][i]*A[k][j];}
}
}
}


int main(int argc, char *argv[])
{  
    long long unsigned  start, stop;
    int suma = 0;
    int i=0;

    for (i ; i<300; i+=1)
    {
        start = mytime(0);
        suma += pamiec[i];
        stop = mytime(0);
        czas[i] = stop - start;
    }
    int j=0;
    for (j; j<300; j+=1)
    {
        printf("%d. cykl, czas :%llu\n",j, czas[j]);


// co 16 jest skok czyli co 16 * 32 bitow =512bits= 64 bajtów
// /\ wynika ze Line size=64 bajty. 

	}
/*
    int k=0;
    for (k ; k<5000; k+=16)
    {
        start = mytime(0);
        suma += pamiec[k];
        stop = mytime(0);
        czas[k] = stop - start;
    }

    int l=0;
    for (l; l<5000; l+=16)
    {
        printf("%d. cykle:%llu\n",l/16, czas[l]); // 64 linii w L1, 64 * 64 bajty = 32K	
    }
 */


long long unsigned t1,t2,t3,t4;
int A[m][m];
for(i=0;i<m;i++){

	for (j=0;j<m;j++){

             A[i][j]=i;



}}

t1=mytime(0);
mnozenie(A);
t2=mytime(0)-t1;
printf("Zwykla ");
printf("%llu\n",t2);


t3=mytime(0);
mnozenieT(A);
t4=mytime(0)-t3;
printf("Transponowana ");
printf("%llu\n",t4);



    return 0;
}
