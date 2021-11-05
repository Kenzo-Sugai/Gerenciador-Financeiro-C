// Bibliotecas
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// Struct

struct dados{
  float valor[1];
}dados;

// Função de verificação de conta
void account(FILE *arq){
  arq = fopen("balance.txt", "r");
  double saldo = fscanf(arq, "%f", &dados.valor[0]);
  int escolha = 0;
  printf("=---------+ Account +---------=\n");
  printf("\n");
  printf("Bem vindo a sua conta\n");
  printf("\n");
  printf("[!] - Conta: 123456789\n");
  printf("[+] - Saldo: R$ %.0f\n", dados.valor[0]);
  printf("[E] - Voltar para o menu\n");
  printf("\n");
  printf("=----------+ <--> +----------=\n");
  printf("\n");
  printf("Voltar ao menu? Digite qualquer tecla:\n");
  fclose(arq);
  scanf("%d", &escolha);
  main();
}
// Função de verificação do dinheiro/saldo/extrato
void balance(FILE *arq){
  int escolha;
  int *categoria;
  arq = fopen("balance.txt", "r");
  double saldo = fscanf(arq, "%f", &dados.valor[0]);
  printf("=---------+ Balance +---------=\n");
  printf("\n");
  printf("<+> Saldo: %.0f\n", dados.valor[0]);
  printf("\n");
  printf("[1] Verificar movimentações\n");
  printf("[2] ...\n");
  printf("[3] Voltar ao menu\n");
  printf("=----------+ <--> +----------=\n");
  printf("\n");
  printf("Digite a opção desejada:\n");
  scanf("%d", &escolha);
  switch(escolha){
    case 1:
      printf("Categorias:\n");
      printf("\n");
      printf("[1] Moradia\n");
      printf("[2] Estudo\n");
      printf("[3] Transporte\n");
      printf("[4] Alimentação\n");
      printf("[5] Trabalho\n");
      printf("[6] Todas\n");
      printf("\n");
      printf("Digite a categoria desejada:\n");
      scanf("%d", categoria);
      switch(*categoria){
        
      }
    case 2:
      // Verificar o quanto vai ser gasto por mês via crédito
    case 3:
      main();
  }
}
// Função de movimentação de dinheiro
void transfer(FILE *arq){
  printf("=--------+ Transfer +--------=\n");
  printf("\n");
  printf("O que deseja realizar?\n");
  printf("[1] Movimentação para alguma categoria especifica\n");
  printf("[2] Transferir dinheiro para outra conta\n");
  printf("[3] Pix\n");
}
// Main
int main(){
  FILE *arq;
  arq = fopen("balance.txt", "r");
  if(arq == NULL){
    printf("ERRO 001: Não foi possível criar uma carteira!\n");
  }
  int fclose(FILE *arq);
  int escolha = 0;
  printf("=----------+ Menu +----------=\n");
  printf("Bem vindo(a)");
  printf("\n");
  printf("O que deseja realizar?\n");
  printf("\n");
  printf("[1] - Inspecionar a conta\n");
  printf("[2] - Verificar saldo e extrato\n");
  printf("[3] - Realizar transferência\n");
  printf("[4] - Ações\n");
  printf("[5] - Sair\n");
  printf("\n");
  printf("=----------+ <--> +----------=\n");
  printf("\n");
  printf("Digite a opção desejada:\n");
  scanf("%d", &escolha);
  switch (escolha){
    case 1:
      account(arq);
      break;
    case 2:
      balance(arq);
      break;
    case 3:
      transfer(arq);
      break;
    case 4:
      //actions();
      break;
    case 5:
      break;
  }
}