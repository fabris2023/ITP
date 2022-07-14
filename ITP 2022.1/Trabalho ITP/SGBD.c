#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int idProduto;
    char descricao[40];
    float preco;
} Produto;

typedef struct
{
    int idCliente;
    char nome[30];
    char celular[10];
} Cliente;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int idPedido;
    Data data;
    char idCliente;
} Pedido;

typedef struct
{
    int idPedido;
    int idProduto;
    float quantidade;
} PedidoItens;


void cadastraProduto(Produto *produto, int *indiceProdut){
  if(*indiceProdut == 0){
    produto = calloc(1, sizeof(Produto));
  }else{
    printf("%d", *indiceProdut);
    produto = realloc(produto, sizeof(Produto)*10);
  }
  printf("Digite um código para o produto:\n");
  scanf("%d",&produto[*indiceProdut].idProduto);
  printf("Digite o nome do produto:\n");
  scanf("%s",produto[*indiceProdut].descricao);
  printf("Digite o preço do produto:\n");
  scanf("%f",&produto[*indiceProdut].preco);
  *indiceProdut = *indiceProdut + 1;
}


int main (void) {

  int opcao = 0, indiceProd;

  indiceProd = 0;
  
  Produto *produtos;
  Cliente *clientes;


  while(opcao!=9){
    
    printf("");

    printf("       ================================================\n");
    printf("|       = SEJA BEM VINDO AO SISTEMA CRUD =     |\n");
    printf(" ================================================\n");
    printf("| ESCOLHA UMA OPCAO:                             |\n");
    printf("| 1 - insere um produto no cadastro              |\n");
    printf("| 2 - lista/altera/remove produto(s) do cadastro |\n");
    printf("| 3 - insere um cliente no cadastro              |\n");
    printf("| 4 - lista/altera/remove cliente(s) do cadastro |\n");
    printf("| 5 - insere um novo pedido                      |\n");
    printf("| 6 - lista os pedidos ja realizados             |\n");
    printf("| 7 - exibe nota fiscal de um pedido             |\n");
    printf("| 9 - encerra o programa                         |\n");
    printf("       ================================================\n");
    scanf("%d", &opcao);
    if(opcao==1){
      int opcaoInterna;
      cadastraProduto(produtos,&indiceProd);
      while(opcaoInterna!=0){
        printf("Deseja cadastrar mais algum produto(1 para sim/ 0 para não)?");
        
        scanf("%d", &opcaoInterna);

        if(opcaoInterna==1){
          cadastraProduto(produtos,&indiceProd);
        }else if(opcaoInterna!=0){
          
          while(opcaoInterna!=0||opcaoInterna!=1){
            printf("Opção inválida");
            scanf("%d", &opcaoInterna);
          }
          if(opcaoInterna==1){
            cadastraProduto(produtos,&indiceProd);
          }
          
        }
      }
      
    }else if(opcao == 2){
      
    }else if(opcao == 3){
      
    }else if(opcao == 4){
      
    }else if(opcao == 5){
      
    }else if(opcao == 6){
      
    }else if(opcao == 7){
      
    }else if(opcao == 8){
      
    }else if(opcao == 9){
      
    }else{
      
    }  
  }

  return 0;
}
