#include <stdio.h>
#include <stdlib.h>

int main() {
    int l,i,t,a,b,c;
    scanf("%d",&t);
    int list[100000];
    i = a = b = c = 0;
    for (l=0;l<t;l++) {
        list[l] = rand()%1500000;
    }
    printf("\n");

    for (l=0;l<t;l++) {
        a = list[l];
        for (i=l+1;i<t;i++) {
            b = list[i];
            if (a>b) {
                list[l] = b;
                list[i] = a;
                a = b;
            }
        }
    }

    for (l=0;l<t;l++) printf("%d ",list[l]);

    return 0;
}
