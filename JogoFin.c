#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int perguntas_feitas[5][5] = {0};

int ciencia() {
  int perg1, resposta;

  do {
    perg1 = rand() % 5; // rand serve pra sortear um numero aleatorio que vai ser usado pra escolher a pergunta
  } while (perguntas_feitas[0][perg1] != 0);  
  //gera um número aleatório entre 0 e 4, e verifica se a pergunta correspondente a esse número já foi feita. Se já foi, ele gera outro número aleatório e verifica novamente. Esse processo continua até que uma pergunta que ainda não foi feita seja encontrada.

  switch (perg1) { 
    case 0:
    printf("\nQual tipo sanguíneo é considerado o doador universal?\n");
    printf("1) AB-\t2) B+\n3) O-\t4) A+\n");
    scanf(" %i", &resposta);
    if (resposta == 3) {
      printf("Resposta Correta!\n");
      return 1; 
    } else {
      printf("\nResposta Errada!\n");
      return 0; 
    }
    break;

    case 1: 
    printf("\nQuantos corações um polvo tem?\n");
    printf("1)3\t2)2\n3)5\t4)1\n");
    scanf(" %i", &resposta);
    if (resposta == 1) {
      printf("Resposta Correta!\n");
      return 1;
    } else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 2:
    printf("\nQuantos ossos existem no corpo humano?\n");
    printf("1)190\t2)206\n3)198\t4)202\n");
    scanf(" %i", &resposta);
    if (resposta == 2) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 3: 
    printf("\nEsta parte do cerébro lida com a audição e a linguagem:\n");
    printf("1)Lobo temporal\t2)Lobo frontal\n3)Lobo parietal\t4)Lobo Occipital\n");
    scanf(" %i", &resposta);
    if (resposta == 1) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
      }
    break;

    case 4: 
    printf("\nQuais ilhas foram extensivamente estudadas por Charles Darwin?\n");
    printf("1)Ilha de Baffin\t2)Bahamas\n3)Ilhas Galápagos\t4)Ilha de Páscoa\n");
    scanf(" %i", &resposta);
    if (resposta == 3) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;
  }
return 1; 
}
int esp() {
  int perg1, resposta;

  do {
    perg1 = rand() % 5; 
  } while (perguntas_feitas[0][perg1] != 0);

  switch (perg1) {
    case 0: 
    printf("\nQual desses times não tem Champions League?\n");
    printf("1)PSG\t2)Ajax\n3)Barcelona\t4)Chelsea\n");
    scanf(" %i", &resposta);
    if (resposta == 1) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 1: 
    printf("\nQuantas medalhas olímpicas tem o Brasil no vôlei feminino de quadra?\n");
    printf("1)7\t2)2\n3)5\t4)1\n");
    scanf(" %i", &resposta);
    if (resposta == 3) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 2: 
    printf("\nQuais cidades vão sediar as próximas duas Olímpiadas?\n");
    printf("1)Londres e Tóquio\t2)Paris e Los Angeles\n3)Paris e Las Vegas\t4)Rio e Roma\n");
    scanf(" %i", &resposta);
    if (resposta == 2) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 3: 
    printf("\nQuantos brasileiros já ganharam a Bola de Ouro?\n");
    printf("1)4\t2)6\n3)2\t4)5\n");
    scanf("\n %i", &resposta);
    if (resposta == 4) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 4: 
    printf("\nEm qual ano foi realizada a primeira copa do mundo?\n");
    printf("1)1934\t2)1942\n3)1920\t4)1930\n");
    scanf(" %i", &resposta);
    if (resposta == 4) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;
  } 
return 1;   
}
int geo(){
  int perg1, resposta;

  do {
    perg1 = rand() % 5; 
  } while (perguntas_feitas[0][perg1] != 0);
  
  switch (perg1) {
    case 0: 
    printf("\nQual é o menor país do mundo?\n");
    printf("1)Grécia\t2)Vaticano\n3)Gâmbia\t4)Uruguai\n");
    scanf(" %i", &resposta);
    if (resposta == 2) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 1: 
    printf("\nQuantos fusos horários existem na Rússia?\n");
    printf("1)11\t2)10\n3)9\t4)7\n");
    scanf(" %i", &resposta);
    if (resposta == 1) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 2: 
    printf("\nA região da Groelândia pertence a qual país?\n");
    printf("1)Países Baixos\t2)Noruega\n3)Estados Unidos\t4)Dinamarca\n");
    scanf(" %i", &resposta);
    if (resposta == 4) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 3: 
    printf("\nQual a capital da Turquia?\n");
    printf("1)Istanbul\t2)Ancara\n3)Bursa\t4)Antália\n");
    scanf(" %i", &resposta);
    if (resposta == 2) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 4: 
    printf("\nQual o maior e o mais populoso estado do Brasil, respectivamente?\n");
    printf("1)Bahia e Rio de Janeiro\t2)Mato Grosso e São Paulo\n3)Amazonas e São Paulo\t4)Mato Grosso e Rio de Janeiro\n");
    scanf(" %i", &resposta);
    if (resposta == 3) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;
  }
return 1;
}
int hist(){
  int perg1, resposta;

  do {
    perg1 = rand() % 5; 
  } while (perguntas_feitas[0][perg1] != 0);

  switch (perg1) {
    case 0: 
    printf("\nEm que ano teve início a Ditadura Militar no Brasil?\n");
    printf("1)1965\t2)1964\n3)1972\t4)1970\n");
    scanf(" %i", &resposta);
    if (resposta == 2) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 1: 
    printf("\nQual a data da Proclamação da República do Brasil?\n");
    printf("1)15 de novembro de 1889\t2)15 de novembro de 1887\n3)15 de novembro de 1897\t4)15 de novembro de 1891\n");
    scanf(" %i", &resposta);
    if (resposta == 1) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 2: 
    printf("\nOnde aconteceu a Guerra de Canudos?\n");
    printf("1)Rio de Janeiro\t2)Pernambuco\n3)Goiás\t\t4)Bahia\n");
    scanf(" %i", &resposta);
    if (resposta == 4) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errado!\n");
      return 0;
    }
    break;

    case 3: 
    printf("\nEm que parte do mundo estavem as primeiras civilizações humanas?\n");
    printf("1)Europa\t2)Oriente Médio\n3)África\t5)América Central\n");
    scanf(" %i", &resposta);
    if (resposta == 2) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 4: 
    printf("\nQuem é o deus grego do submundo?\n");
    printf("1)Hermes\t2)Ares\n3)Hades\t\t4)Zeus\n");
    scanf(" %i", &resposta);
    if (resposta == 3) {
      printf("Resposta Correta!\n");
      return 1;
      
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;
  }
return 1;
}
int entret(){
  int perg1, resposta;
  
  do {
    perg1 = rand() % 5; 
  } while (perguntas_feitas[0][perg1] != 0);

  switch (perg1) {
    case 0: 
    printf("\nQual cantor(a) possui mais Grammys na história?\n");
    printf("1)Beyoncé\t2)Michael Jackson\n3)Whitney Houston\t4)Adele\n");
    scanf(" %i", &resposta);
    if (resposta == 1) {
      printf("Resposta Correta!\n");
      return 1;
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 1: 
    printf("\nQuem canta 'My Heart Will Go On' em Titanic?\n");
    printf("1)Janet Jackson\t2)Mariah Carey\n3)Celine Dion\t4)Diana Ross\n");
    scanf(" %i", &resposta);
    if (resposta == 3) {
      printf("Resposta Correta!\n");
      return 1;
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 2: 
    printf("\nEm que cidade se passa a série 'Friends'?\n");
    printf("1)Los Angeles\t2)São Francisco\n3)Miami\t4)Nova Iorque\n");
    scanf(" %i", &resposta);
    if (resposta == 4) {
      printf("Resposta Correta!\n");
      return 1;
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 3: 
    printf("\nEm 'Star Wars: Episódio V - O império Contra-Ataca', o que Luke Skywalker perde na luta contra Darth Vader?\n");
    printf("1)Mão Esquerda\t2)Pé Direito\n3)Mão Direita\t4)Pé Esquerdo\n");
    scanf(" %i", &resposta);
    if (resposta == 3) {
      printf("Resposta Correta!\n");
      return 1;
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;

    case 4: 
    printf("\nQual a casa de Luna Lovegood em Hogwarts?\n");
    printf("1)Lufa-lufa\t2)Grifinoria\n3)Sonserina\t4)Corvinal\n");
    scanf(" %i", &resposta);
    if (resposta == 4) {
      printf("Resposta Correta!\n");
      return 1;
    }else {
      printf("\nResposta Errada!\n");
      return 0;
    }
    break;
  }
return 1;
}
int temas(){
  int i, pontos[2] = {0,0};
  
  for(i = 0; i < 5; i++){
    
    int temaSorteado = rand() % 5; // gera um número entre 0 e 4
    sleep (2); 
    system("cls || clear"); 
    switch (temaSorteado) {
      case 0:
        printf("\nTema sorteado: Ciências\n\n");
        pontos[i % 2] += ciencia();
        break;
      case 1:
        printf("\nTema sorteado: Esporte\n\n");
        pontos[i % 2] += esp();
        break;
      case 2: 
        printf("\nTema sorteado: Geografia\n\n");
        pontos[i % 2] += geo();
        break;
      case 3: 
        printf("\nTema sorteado: História\n\n");
        pontos[i % 2] += hist();
        break;
      case 4:
        printf("\nTema sorteado: Entretenimento\n\n");
        pontos[i % 2] += entret();
        break;
    }  
    getchar(); 
    }  // recomeçar o jogo com o segundo jogador dessa vez 
  return pontos[0] + pontos [1]; 
} 
int main() {
  char player[2][40];
  int i, j, pontos[2] = {0,0}; 
  FILE*arq; 
  
  srand(time(NULL)); // srand serve pra sortear um numero e que ele nao seja constante 

  arq = fopen("players.txt" , "a+");
  
  if (arq == NULL) {
      printf("Erro ao abrir o arquivo.\n");
      return 1;
  }
  
  for(i = 0; i < 1; i++){ 
      printf("\n\t ** Jogo das Perguntas **\n\t");
      printf("\n\tRegras do jogo: Precisamos de 2 jogadores para jogar. Cada jogador terá que responder 5 perguntas com um tema sorteado, quem tiver mais pontos no final, ganha. Boa sorte!!! "); 
  }
  
  printf("\n\nTemas existentes:\n\n* Ciências\n* Esporte\n* Geografia\n* História\n* Entretenimento\n");

  printf("\nAperte 'ENTER' para começar!!!");
  getchar(); 

  for(i = 0; i < 2; i++){
    printf("\nJogador %i, digite seu nome: ", i+1);
    fgets(player[i], sizeof(player[i]), stdin); 
    printf("Vamos começar o jogo,%s!\n", player[i]);
    pontos[i] = temas();
  }
  fprintf(arq,"###############################################\n");
  fprintf(arq, "Jogadores 1 e 2: %s e %s\n", player[0], player[1]);
  fprintf(arq,"\nPontuação de %s:%i",player[0] , pontos[0]);
  fprintf(arq,"\nPontuação de %s:%i",player[1] , pontos[1]);

  if(pontos[0] > pontos[1]){
    fprintf(arq,"\nParabéns %s,você venceu!!!\n", player[0]);
    fprintf(arq,"###############################################\n");
  }else if(pontos[0] < pontos[1]){ 
    fprintf(arq,"\nParabéns %s,você venceu!!!\n", player[1]);
    fprintf(arq,"###############################################\n");
  }else{
    fprintf(arq, "\nVocês empataram!\n"); 
    fprintf(arq,"###############################################\n");
  }

  fclose(arq); 
  
  return 0;
  }
