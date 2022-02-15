// Bibliotecas
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

/* 
balance.txt sumário

line 1: saldo
line 2: moradia

*/

// Struct
struct dados{
  float valor[100];
  float moradia[100];
  char moradia_data[100];
  float estudos[100];
  char estudos_data[100];
  char trabalho_data[100];
  float transporte[100];
  float alimentacao[100];
  float trabalho[100];
}dados;

// Função de verificação de conta
void account(FILE *arq){
  double type[6];
  arq = fopen("balance.txt", "r");
  for(int i = 0; i < 6; i++){
    type[i] = fscanf(arq, "%f", &dados.valor[i]);
  }
  int escolha = 0;
  printf("=---------+ Account +---------=\n");
  printf("\n");
  printf("Bem vindo a sua conta\n");
  printf("\n");
  printf("[!] - Conta: 123456789\n");
  printf("[+] - Saldo: R$ %.0f\n", dados.valor[4]);
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
  char teste, c;
  int p, i = 0;
  FILE *HTML = fopen("extrato.html", "w");
  while((c = getc(arq) ) != EOF){
    printf("Tamanho do arquivo: %d\n", i);
    fscanf(arq, "%f", &dados.moradia[i]);
    i++;
  }
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
        fprintf(HTML, "<!DOCTYPE html>\n");
        fprintf(HTML, "<html>\n");
        fprintf(HTML, "<head>\n");
        fprintf(HTML, "<meta charset='UTF-8'>\n");
        fprintf(HTML, "<h2>Relatorio</h2>\n");
        fprintf(HTML, "</head>\n");
        fprintf(HTML, "<body>\n");

        fprintf(HTML, "<table border= 3>\n");
        fprintf(HTML, "<tr>\n");
        fprintf(HTML, "<th colspan='2'>Moradia</th>\n");
        fprintf(HTML, "</tr>\n");
        fprintf(HTML, "<tr>\n");
        fprintf(HTML, "<th>Movimentação</th><th>Data</th>\n");
        fprintf(HTML, "</tr>\n");
        arq = fopen("moradia.txt", "r");
        i = 0;
        while((c = getc(arq) ) != EOF){
          fprintf(HTML, "<tr>\n");
          if(i % 2 == 0){
            fscanf(arq, "%f", &dados.moradia[i]);
            fprintf(HTML, "<td>R$ %.0f</td>", dados.moradia[i]);
            i++;
          }
          if(i % 2 != 0){
            fscanf(arq, "%f", &dados.moradia[i]);
            fprintf(HTML, "<td>%.0f</td>", dados.moradia[i]);
            i++;
          }
          fprintf(HTML, "</tr>\n");
        }
        fprintf(HTML, "</tr>\n");
        fprintf(HTML, "</table>\n");
        fclose(arq);

        fprintf(HTML, "<br>\n");

        fprintf(HTML, "<table border= 3>\n");
        fprintf(HTML, "<tr>\n");
        fprintf(HTML, "<th colspan='2'>Estudos</th>\n");
        fprintf(HTML, "</tr>\n");
        fprintf(HTML, "<tr>\n");
        fprintf(HTML, "<th>Movimentação</th><th>Data</th>\n");
        fprintf(HTML, "</tr>\n");
        arq = fopen("estudos.txt", "r");
        i = 0;
        while((c = getc(arq) ) != EOF){
          fprintf(HTML, "<tr>\n");
          if(i % 2 == 0){
            fscanf(arq, "%f", &dados.estudos[i]);
            fprintf(HTML, "<td>R$ %.0f</td>", dados.estudos[i]);
            i++;
          }
          if(i % 2 != 0){
            fscanf(arq, "%f", &dados.estudos[i]);
            fprintf(HTML, "<td>%.0f</td>", dados.estudos[i]);
            i++;
          }
          fprintf(HTML, "</tr>\n");
        }
        fprintf(HTML, "</tr>\n");
        fprintf(HTML, "</table>\n");
        fclose(arq);

        fprintf(HTML, "<br>\n");

        fprintf(HTML, "<table border= 3>\n");
        fprintf(HTML, "<tr>\n");
        fprintf(HTML, "<th colspan='2'>Transporte</th>\n");
        fprintf(HTML, "</tr>\n");
        fprintf(HTML, "<tr>\n");
        fprintf(HTML, "<th>Movimentação</th><th>Data</th>\n");
        fprintf(HTML, "</tr>\n");
        arq = fopen("transporte.txt", "r");
        i = 0;
        while((c = getc(arq) ) != EOF){
          fprintf(HTML, "<tr>\n");
          if(i % 2 == 0){
            fscanf(arq, "%f", &dados.transporte[i]);
            fprintf(HTML, "<td>R$ %.0f</td>", dados.transporte[i]);
            i++;
          }
          if(i % 2 != 0){
            fscanf(arq, "%f", &dados.transporte[i]);
            fprintf(HTML, "<td>%.0f</td>", dados.transporte[i]);
            i++;
          }
          fprintf(HTML, "</tr>\n");
        }
        fprintf(HTML, "</tr>\n");
        fprintf(HTML, "</table>\n");
        fclose(arq);

        fprintf(HTML, "<br>\n");

        fprintf(HTML, "<table border= 3>\n");
        fprintf(HTML, "<tr>\n");
        fprintf(HTML, "<th colspan='2'>Alimentação</th>\n");
        fprintf(HTML, "</tr>\n");
        fprintf(HTML, "<tr>\n");
        fprintf(HTML, "<th>Movimentação</th><th>Data</th>\n");
        fprintf(HTML, "</tr>\n");
        arq = fopen("alimentacao.txt", "r");
        i = 0;
        while((c = getc(arq) ) != EOF){
          fprintf(HTML, "<tr>\n");
          if(i % 2 == 0){
            fscanf(arq, "%f", &dados.alimentacao[i]);
            fprintf(HTML, "<td>R$ %.0f</td>", dados.alimentacao[i]);
            i++;
          }
          if(i % 2 != 0){
            fscanf(arq, "%f", &dados.alimentacao[i]);
            fprintf(HTML, "<td>%.0f</td>", dados.alimentacao[i]);
            i++;
          }
          fprintf(HTML, "</tr>\n");
        }
        fprintf(HTML, "</tr>\n");
        fprintf(HTML, "</table>\n");
        fclose(arq);

        fprintf(HTML, "<br>\n");

        fprintf(HTML, "<table border= 3>\n");
        fprintf(HTML, "<tr>\n");
        fprintf(HTML, "<th colspan='2'>Trabalho</th>\n");
        fprintf(HTML, "</tr>\n");
        fprintf(HTML, "<tr>\n");
        fprintf(HTML, "<th>Movimentação</th><th>Data</th>\n");
        fprintf(HTML, "</tr>\n");
        arq = fopen("trabalho.txt", "r");
        i = 0;
        while((c = getc(arq) ) != EOF){
          fprintf(HTML, "<tr>\n");
          if(i % 2 == 0){
            fscanf(arq, "%f", &dados.trabalho[i]);
            fprintf(HTML, "<td>R$ %.0f</td>", dados.trabalho[i]);
            i++;
          }
          if(i % 2 != 0){
            fscanf(arq, "%f", &dados.trabalho[i]);
            fprintf(HTML, "<td>%.0f</td>", dados.trabalho[i]);
            i++;
          }
          fprintf(HTML, "</tr>\n");
        }
        fprintf(HTML, "</tr>\n");
        fprintf(HTML, "</table>\n");
        fclose(arq);

        fprintf(HTML, "</body>\n");
        fprintf(HTML, "</html>\n");
        fclose(HTML);
        printf("HTML GERADO!\n");
      case 2:
      main();
    }
  }
// Função de movimentação de dinheiro
void transfer(FILE *arq){
  int escolha, moradia, estudos, transporte, alimentacao, trabalho;
  float valor;
  double type[50];
  arq = fopen("balance.txt", "r");
  int i = 0;
  char c;
  fclose(arq);
  printf("=--------+ Transfer +--------=\n");
  printf("\n");
  printf("[1] Movimentação para alguma categoria especifica\n");
  printf("[2] Transferir dinheiro para outra conta\n");
  printf("\n");
  printf("O que deseja realizar?\n");
  scanf("%d", &escolha);
  char categoria[20];
  char data[20];
  switch(escolha){
    case 1:
      arq = fopen("balance.txt", "a");
      printf("Categorias: {Moradia, Estudos, Transporte, Alimentação e Trabalho}\n");
      printf("O que deseja movimentar? Escreva a categoria e o valor da movimentação\n");
      printf("\n");
      scanf("%s %f", &categoria, &valor);
      printf("Digite a data da transação: ");
      scanf("%s", data);

      if(moradia = strcmp(categoria, "Moradia") == 0){
        arq = fopen("moradia.txt", "a");
        printf("Movimentando %f para Moradia\n", valor);
        int mov_valor = fprintf(arq, "%f\n", valor);
        char mov_data = fprintf(arq, "%s\n", data);
        fclose(arq); 
      }
      if(estudos = strcmp(categoria, "Estudos") == 0){
        arq = fopen("estudos.txt", "a");
        printf("Movimentando %f para Estudos\n", valor);
        int mov_valor = fprintf(arq, "%f\n", valor);
        char mov_data = fprintf(arq, "%s\n", data);
        fclose(arq); 
      }
      if(transporte = strcmp(categoria, "Transporte") == 0){
        arq = fopen("transporte.txt", "a");
        printf("Movimentando %f para Transporte\n", valor);
        int mov_valor = fprintf(arq, "%f\n", valor);
        char mov_data = fprintf(arq, "%s\n", data);
        fclose(arq); 
      }
      if(alimentacao = strcmp(categoria, "Alimentação") == 0){
        arq = fopen("alimentacao.txt", "a");
        printf("Movimentando %f para Alimentação\n", valor);
        int mov_valor = fprintf(arq, "%f\n", valor);
        char mov_data = fprintf(arq, "%s\n", data);
        fclose(arq); 
      }
      if(trabalho = strcmp(categoria, "Trabalho") == 0){
        arq = fopen("trabalho.txt", "a");
        printf("Movimentando %f para Trabalho\n", valor);
        int mov_valor = fprintf(arq, "%f\n", valor);
        char mov_data = fprintf(arq, "%s\n", data);
        fclose(arq); 
      }
    }  
}
// Main
int main(){
  FILE *arq;
  arq = fopen("balance.txt", "r");
  if(arq == NULL){
    printf("ERRO 001: Não foi possível criar uma carteira!\n");
  }
  int *ptr;
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
