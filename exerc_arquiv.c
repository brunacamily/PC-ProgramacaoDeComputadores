#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ler_arq(char nome[50]);

int main(){
    int tot_linha;
    char nome_do_aquiv[50];

    printf("Digite o nome do aqruivo  (.txt): ");
    scanf("%s", nome_do_aquiv);

    tot_linha = ler_arq(nome_do_aquiv);
    
    printf("O total de linhas do arquivo é: %d", tot_linha);
}

int ler_arq(char nome[50]){
    FILE *fp;
    char linha[50], *token ;
    int i;

    if(( fp = fopen(nome, "r")) == NULL){
        printf(" Erro ao abrir o arquivo ! ");
        exit(1);
    }else{
       while(!feof(fp)){
        fgets(linha,50,fp);
        if(linha>1){

            token = strtok(linha, "\n");
            i ++;
        }
    }
    }
    return i;
}
