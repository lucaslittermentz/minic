#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, min, pos, i;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    min = a[0];
    for (i=0;i<n;i++) {
        if (a[i]<=min) {
            min=a[i];
            pos=i+1;
        } else {}
    }
    printf("\nMin: %d \nPos: %d\n",min,pos);

    return 0;
}
