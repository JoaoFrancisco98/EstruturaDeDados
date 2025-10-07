#include <stdio.h>
void isertionSort(int vetor[], int n){
    int i, j, chave;
    for (i = 1; i < n; i++){
        chave = vetor[i];
        j = i - 1;
        while(j>=0 && vetor[j] > chave){
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = chave;
    }
}
int main(){
    int n, i;
    
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);
    
    int vetor[n];
    
    printf("Digite os %d elementos:\n", n);
    for (i = 0; i<n; i++){
        scanf("%d",&vetor[i]);
    }
    printf("\nVetor antes da ordenção:\n");
    for (i = 0; i<n; i++){
        printf("%d",vetor[i]);
    }
    
    isertionSort(vetor, n);
    
    printf("\n\nVetor apos a ordenação (Insertion Sort):\n");
    for (i = 0; i < n; i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
    return 0;
}
