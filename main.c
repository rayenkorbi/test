#include <stdio.h>

int remplir(int *A , int n){

printf("entrez les elements du tableau un par un: ");
for (int i = 0; i < n; i++) {
    scanf("%d", A+i);
}
}
int main() {
    int n , X;
    const nMax = 100;
    int A[nMax];

    printf("entrez la taille du tableau : ");
    scanf("%d", &n);

    int *A = malloc(sizeof(int)*n) ;


    remplir(A , n);





    printf("entrez l'entier a eliminer : ");
    scanf("%d", &X);


    return 0;
}
