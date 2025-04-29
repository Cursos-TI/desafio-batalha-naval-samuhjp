#include <stdio.h>

#define LINHAS 11
#define COLUNAS 9

int main(){
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int i, j, tabuleiro[LINHAS][COLUNAS];
    int soma = 0; 

    printf("   TABULEIRO BATALHA NAVAL \n");
    

    for (int j = 0; j <= 10; j++){
        printf("%c  ", linha[j]);
    }
    
        printf("  \n");

    for (int i = 1; i < LINHAS; i++){
        printf("%2d  ", i); 
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = soma;
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    for(i = 0; i <= LINHAS; i++){
		for (j = 0; j < COLUNAS; j++){
            
			if(i + j == LINHAS - 1){
				tabuleiro[i][j] = 3;
			} else {
				tabuleiro[i][j] = 0;
			} 
            if(i - j == COLUNAS - 9){
                tabuleiro[i][j] = 3;
            }
		}
	}
    
  return 0;
}