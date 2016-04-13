#include <stdio.h>

int main() {
    int a,b,c,d,e;
    float med;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    med = (a+b+c+d+e)/5.0;
    printf("%1.3lf\n",med);
    return 0;
}
