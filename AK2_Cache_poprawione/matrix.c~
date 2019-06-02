#include  <stdio.h>
#define m 600
//Funkcje 
long long unsigned mytime(char);

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

int main(void)
{
long long unsigned t1,t2,t3,t4,i,j;
int A[m][m];
for(i=0;i<m;i++){

	for (j=0;j<m;j++){

             A[i][j]=4;



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
