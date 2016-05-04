#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[41], l[40], i, j, h, c;
    scanf("%s",&n);
    scanf("%s",&l);
    c = 0;
    h = 1;
    for (i=0;i<40;i++) {
        if (l[i]!='\0') c++; else {break;}
    }
    for (i=0;i<41;i++) {
        if (n[i]==l[0]) {
            if (l[1]=='\0') h=0;
            for (j=1;j<c;j++) {
                if (n[i+j]==l[j]) {
                    if (l[j+1]=='\0') {
                        h=0;
                    }
                } else {
                    break;
                }
            }
        }
    }
    if (h==0) {
        printf("YEAP\n");
    } else {
        printf("NEP\n");
    }

    return 0;
}
