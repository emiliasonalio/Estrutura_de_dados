#include <stdio.h>

struct Produto{
    char nome[50];
    float preco;
};

typedef struct Produto Produto;

Produto * mais_barato(Produto produtos[], int N){
    Produto *barato = produtos;
    
    for(Produto *p = produtos; p < produtos + N; p++){
        if ((*barato).preco > p->preco){//if (barato->preco)
            barato = p;
        }
    
    return barato;
    }
}

int main(){
    Produto produtos[3] = {
        {"Arroz", 10.0}, 
        {"Macarrao", 4.0},
        {"Carne", 30.0}
    };
    
    Produto * barato = mais_barato(produtos, 3);
    printf("Produto: %s | Preco: %.2f\n", barato->nome, barato->preco);

    return 0;
}