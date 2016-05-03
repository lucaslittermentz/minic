#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n[100];
    int i;
    scanf("%lf",&n[0]);
    printf("\n");
    for (i=1;i<100;i++) {
        n[i] = n[i-1]/(2);
        printf("N[%d] = %1.4lf\n",i,n[i-1]);
    }
    printf("N[100] = %1.4lf\n",n[99]);
    return 0;
}
