#include <stdio.h>

extern long long unsigned mytime(char);

int main(void){

long long unsigned int l1;
long long unsigned int l2;
char tab[100000];
long long int L1=0;
long long int x2=0;
long long int x_L=0;


int a[3][3]={ {1,2,3},{2,3,4},{5,4,3}};
int b[3][3]={ {1,2,2},{2,2,2},{2,2,2}};
int result[3][3];
	

for(int g=0;g<4096;g++){
	l1=mytime(0);
	char x= tab[g];
	l2=mytime(0);
printf(" Czas dostepu do RAM %llu\n ", l2 - l1);
	
	if(g<64)
	x2 += l2 -l1;

	
	
	if(g>=64 && g<128)
	x_L += l2 - l1;

}
	

printf(" x == %llu\n ", x2);
printf(" x_L == %llu\n ", x_L);
printf(" L1 == %llu\n ", x_L-x2);
int j;
int i;
int k;

void multiple(){
for(i=0; i<3;++i){
        for(j=0; j<3;++j){
            for(k=0; k<3;++k)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
	}
}
}


void multipleT(){

for(i=0; i<3;++i){
        for(j=0; j<3;++j){
                result[i][j]+=a[i][j]*b[i][j];
            	}
}
}

void showMatrix(){
    printf("\nOutput Matrix:\n");
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == 3-1)
                printf("\n\n");
        }
}



l1=mytime(0);
multiple();

printf("Czas mnozenia macierzy transponowaej  %llu\n ",mytime(0)-l1);


l1=mytime(0);
multipleT();

printf("Czas mnozenia macierzy zwyklej  %llu\n ",mytime(0)-l1);



return 0;
}
