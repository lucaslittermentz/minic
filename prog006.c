#include <stdio.h>
#include <stdlib.h>

int main() {
    char text[100];
    int q, i, a, d;
    d = ('a'-'A');
    scanf("%d",&q);
    for (i=0;i<q;i++) {
        scanf("%s",text);
        for (a=0;a<100;a++) {
            if (text[a]=='\0') break;
            if (text[a]>='a' && text[a]<='z' && a==0) {text[a]=text[a]-d;}
            if (text[a]>='A' && text[a]<='Z' && a!=0) {text[a]=text[a]+d;}
        }
        printf("%s\n",text);
    }
}
