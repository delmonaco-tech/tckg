//codigo nao funcional primmeira tentativa de programacao em C

int main () {

    int matrizA[2][2];
    int matrizB[2][2];
    int matrizR[2][2];
    int linha; 
    int coluna; 

    for(linha=1; linha <=2; linha++){
        for(coluna=1;coluna<=2;coluna++){
            printf("matriz A digite o valor da linha [%d] coluna[%d] \n", linha, coluna);
            scanf("%d",&matrizA[linha][coluna]);

        }
    }

    printf("\n");
    for(linha=1; linha <=2; linha++){
        for(coluna=1; coluna <=2; coluna++){
            printf("matriz B - Digite o valor da linha [%d] coluna[%d] \n", linha, coluna);
            scanf("%d",&matrizB[linha][coluna]);

        }
    }

    printf("\n")
    printf("[LINHA] [COLUNA] = VALOR \n");
    for(linha=1 ; linha<=2; linha++){
        for(coluna=1; coluna<=2; coluna++){
            matrizR[linha][coluna] = matrizA[linha][coluna] * matrizB[linha][coluna];
            printf("linha[%d] coluna[%d] = %d \n" , linha, coluna, matrizR[linha][coluna]);

        }
    }
    printf("\n");
    return 0;

}