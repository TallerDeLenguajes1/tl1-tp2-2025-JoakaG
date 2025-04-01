#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL));

int i, N = 10;
double vt[N];
double *pvt = vt;
for(i = 0;i<N; i++)
{
*(pvt+i)=1+rand()%100;

printf("%f ", vt[i]);

}
    return 0;
}