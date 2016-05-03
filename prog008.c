#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d",&n);
    int* x=(int*)malloc(sizeof(int*)*n);
    int* y=(int*)malloc(sizeof(int*)*n);
    for (i=0;i<n;i++) {
        x[i]=rand()%200;
        y[i]=rand()%200;
        printf("X[%2d] = %3d    Y[%2d] = %3d\n",i,x[i],i,y[i]);
    }

    return 0;
}
