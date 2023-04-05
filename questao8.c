#include <stdio.h>
#include <stdlib.h>


int main(){
    system("cls");
    #define LINHAS 5
    int vetorPreco[LINHAS], vetorProdutosVendidos[LINHAS], contadorDeIndice;
    int vetorValorArrecadadoPorProduto[LINHAS], valorTotalArrecadado = 0;
    
    srand(20);
    for(contadorDeIndice = 0; contadorDeIndice < LINHAS; contadorDeIndice++){
        vetorPreco[contadorDeIndice] = rand() % 20;
        printf("Valor do produto %d: %d reais\n", contadorDeIndice+1 ,vetorPreco[contadorDeIndice]);
    }
    printf("\n");
    for(contadorDeIndice = 0; contadorDeIndice < LINHAS; contadorDeIndice++){
        vetorProdutosVendidos[contadorDeIndice] = rand() % 60;
        printf("Quantidade vendida do produto %d: %d vendas\n", contadorDeIndice+1, vetorProdutosVendidos[contadorDeIndice]);
    }
    printf("\n");
    for(contadorDeIndice = 0; contadorDeIndice < LINHAS; contadorDeIndice++){
       vetorValorArrecadadoPorProduto[contadorDeIndice] = vetorPreco[contadorDeIndice] * vetorProdutosVendidos[contadorDeIndice];
       printf("Valor arrecadado pelos produtos %d: %d reais\n", contadorDeIndice+1, vetorValorArrecadadoPorProduto[contadorDeIndice]);
    }
    printf("\n");
    for(contadorDeIndice = 0; contadorDeIndice < LINHAS; contadorDeIndice++){
        valorTotalArrecadado = valorTotalArrecadado + vetorValorArrecadadoPorProduto[contadorDeIndice];
    }
    
    printf("O valor total arrecadado foi de: %d reais", valorTotalArrecadado);
    
    return 0;
}