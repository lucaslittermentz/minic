#include <stdio.h>
#include <stdlib.h>

double marit(int* vet, int vetsize) {
    int i, med = 0;
    for (i=0;i<vetsize;i++){
        med += vet[i];
    }
    return med/vetsize*1.0;
}

double mpond(int* vet, int* peso, int vetsize) {
    int i, med = 0;
    double pesos = 0;
    for (i=0;i<vetsize;i++){
        med += vet[i];
        pesos += peso[i];
    }
    return med/pesos;
}

int main() {
    int cases, vet[100], vetsize, i, j, peso[100];
    char op[2];
    scanf("%d",&cases);
    for (i=0;i<cases;i++) {
        scanf("%c %d",&op,&vetsize);
        if (op[0]=='A') {
            for (j=0;j<vetsize;j++) {
                scanf("%d",&vet[j]);
            }
            printf("Caso %d:\n%.2lf\n",i+1,marit(vet,vetsize));
        } else if (op[0]=='P') {
            for (j=0;j<vetsize;j++) {
                scanf("%d",&vet[j]);
            }
            for (j=0;j<vetsize;j++) {
                scanf("%lf",&peso[j]);
            }
            printf("Caso %d:\n%.2lf\n",i+1,mpond(vet,peso,vetsize));
        }
    }

    return 0;
}
