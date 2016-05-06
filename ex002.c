#include <stdio.h>
#include <stdlib.h>

long long int fat(int a) {
    if (a<=0) return 1;
    return a*fat(a-1);
}

int main() {
    int a, b, i, t;
    long long int sumfat = 0;
    scanf("%d %d",&a,&b);
    t = abs(a-b)+1;
    for (i=0;i<t;i++) {
        sumfat += fat(a+i);
    }
    printf("%lld\n",sumfat);


    return 0;
}
