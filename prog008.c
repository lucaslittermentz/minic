#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, pos, min, i;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    min = a[0];
    for (i=0;i<n;i++) {
        if (a[i]<=min) {
            min=a[i];
            pos=i;
        }
    }
    printf("\nMax: %d \nMin: %d\n",max,min);

    return 0;
}
