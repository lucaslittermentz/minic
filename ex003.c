#include <stdio.h>
#include <stdlib.h>

int mat[100][100]={0};

int cam(int x, int y, int n) {
    if(x==n-1) return mat[x][y];
    int dir = cam(x+1,y+1,n);
    int bai = cam(x+1,y,n);
    if (dir>bai) return mat[x][y]+dir;
    return mat[x][y]+bai;
}

int main() {
    int levels, i, j, p = 1;
    scanf("%d",&levels);
    for(i=0;i<levels;i++) {
        for(j=0;j<=i;j++) {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("%d\n",cam(0,0,levels));

    return 0;
}
