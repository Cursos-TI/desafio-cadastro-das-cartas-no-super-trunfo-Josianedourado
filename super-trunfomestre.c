#include <stdio.h>

int main(){            

char Estado[20] = "Para";
char carta1[] = "A01";
char carta2 []= "A02";
char cidade1[20] = "Belem";
char  cidade2[20] = "Castanhal";
int populacao1 = 1303403;
int populacao2 = 192256;
int turismo1 = 30;
int turismo2 = 10;
float Area1 = 1059.47;
float Area2 = 1029.30;  
float Pib1 = 33.4;
float Pib2 = 4.29;
float densidade_populacional1 = populacao1 / Area1;
float densidade_populacional2 = populacao2 / Area2;

int opcao;
printf("menu principal\n");
printf("1. iniciar jogo\n");
printf("2. Ver regras\n");
printf("3. sair\n");
printf("escolha uma opção:");
scanf("%d", &opcao);

switch (opcao){
    case 1:
        printf("Iniciando o jogo...\n");
break;
        case 2:
        printf("Regras do jogo:\n");
        printf("1. O objetivo do jogo é comparar as cartas de dois jogadores e determinar quem tem a carta mais forte com base em uma das características.\n");
        printf("2. Cada jogador escolhe uma característica para comparar.\n");
        printf("3. O jogador com a carta mais forte ganha a rodada.\n");
        printf("4. O jogo continua até que um jogador ganhe todas as cartas ou até que os jogadores decidam parar.\n");
        printf("5. O jogador que ganhar mais rodadas é o vencedor do jogo.\n");
        printf("Boa sorte e divirta-se jogando Super Trunfo!\n");
        break;
    case 3:
        printf("Encerrando o jogo...\n");
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }

    int escolha;
 printf("Escolha uma característica para comparar:\n");
 scanf("%d", &escolha);
    switch (escolha){
        case 1:
            if(populacao1 > populacao2){
                printf("A população de %s é maior que a de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(populacao1 < populacao2){
                printf("A população de %s é menor que a de %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("As populações são iguais. Empate!\n");
            }
            break;
        case 2:
            if(turismo1 > turismo2){
                printf("O turismo em %s é maior que em %s. Você ganhou!\n", cidade1, cidade2);
            } else if(turismo1 < turismo2){
                printf("O turismo em %s é menor que em %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("Os índices de turismo são iguais. Empate!\n");
            }
            break;
        case 3:
            if(Area1 > Area2){
                printf("A área de %s é maior que a de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(Area1 < Area2){
                printf("A área de %s é menor que a de %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("As áreas são iguais. Empate!\n");
            }
            if(Pib1 > Pib2){
                printf("O PIB de %s é maior que o de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(Pib1 < Pib2){
                printf("O PIB de %s é menor que o de %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("Os PIBs são iguais. Empate!\n");
            }
            break;
        case 4:
            if(densidade_populacional1 < densidade_populacional2){
                printf("A densidade populacional de %s é menor que a de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(densidade_populacional1 < densidade_populacional2){
                printf("A densidade populacional de %s é maior que a de %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("As densidades populacionais são iguais. Empate!\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
int escolha2;
printf("Escolha uma característica para comparar:\n");
scanf("%d", &escolha2);
switch (escolha2){
        case 1:
            if(populacao1 > populacao2){
                printf("A população de %s é maior que a de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(populacao1 < populacao2){
                printf("A população de %s é menor que a de %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("As populações são iguais. Empate!\n");
            }
            break;
        case 2:
            if(turismo1 > turismo2){
                printf("O turismo em %s é maior que em %s. Você ganhou!\n", cidade1, cidade2);
            } else if(turismo1 < turismo2){
                printf("O turismo em %s é menor que em %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("Os índices de turismo são iguais. Empate!\n");
            }
            break;
        case 3:
            if(Area1 > Area2){
                printf("A área de %s é maior que a de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(Area1 < Area2){
                printf("A área de %s é menor que a de %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("As áreas são iguais. Empate!\n");
            }
            if(Pib1 > Pib2){
                printf("O PIB de %s é maior que o de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(Pib1 < Pib2){
                printf("O PIB de %s é menor que o de %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("Os PIBs são iguais. Empate!\n");
            }
            break;
        case 4:
            if(densidade_populacional1 < densidade_populacional2){
                printf("A densidade populacional de %s é menor que a de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(densidade_populacional1 < densidade_populacional2){
                printf("A densidade populacional de %s é maior que a de %s. Você perdeu!\n", cidade1, cidade2);
            } else { 
                 printf("As densidades populacionais são iguais. Empate!\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
int escolha3;
printf("Escolha uma característica para comparar:\n");
scanf("%d", &escolha3);
switch (escolha3){
        case 1:
            if(populacao1 > populacao2){
                printf("A população de %s é maior que a de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(populacao1 < populacao2){
                printf("A população de %s é menor que a de %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("As populações são iguais. Empate!\n");
            }
            break;
        case 2:
            if(turismo1 > turismo2){
                printf("O turismo em %s é maior que em %s. Você ganhou!\n", cidade1, cidade2);
            } else if(turismo1 < turismo2){
                printf("O turismo em %s é menor que em %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("Os índices de turismo são iguais. Empate!\n");
            }
            break;
        case 3:
            if(Area1 > Area2){
                printf("A área de %s é maior que a de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(Area1 < Area2){
                printf("A área de %s é menor que a de %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("As áreas são iguais. Empate!\n");
            }
            if(Pib1 > Pib2){
                printf("O PIB de %s é maior que o de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(Pib1 < Pib2){
                printf("O PIB de %s é menor que o de %s. Você perdeu!\n", cidade1, cidade2);
            } else {
                printf("Os PIBs são iguais. Empate!\n");
            }
            break;
        case 4:
            if(densidade_populacional1 < densidade_populacional2){
                printf("A densidade populacional de %s é menor que a de %s. Você ganhou!\n", cidade1, cidade2);
            } else if(densidade_populacional1 < densidade_populacional2){
                printf("A densidade populacional de %s é maior que a de %s. Você perdeu!\n", cidade1, cidade2);
            } else { 
                 printf("As densidades populacionais são iguais. Empate!\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }





    return 0;
}
