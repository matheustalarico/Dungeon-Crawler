#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <time.h>

int acao(int interagir,char cw/*local acima do jogador*/,char cs/*local abaixo do jogador*/,char cd/*local a direita do jogador*/,char ca/*local a esquerda do jogador*/){

    int escolhendo = 1;
    int retorno;

    while(escolhendo == 1){

        char acao = getch();
        escolhendo = 0;
        int tecla_invalida = 0;

        switch (acao){

            //movimento
            case 'w':
                if(cw != '*') retorno = 1;
                else{tecla_invalida = 1;}
            break;
            case 's':
                if(cs != '*') retorno = 2;
                else{tecla_invalida = 1;}
            break;
            case 'a':
                if(ca != '*') retorno = 3;
                else{tecla_invalida = 1;}
            break;
            case 'd':
                if(cd != '*') retorno = 4;
                else{tecla_invalida = 1;}
            break;

            //interagir
            case 'i':
                if(interagir == 1){
                    retorno = 5;
                }else{
                    tecla_invalida = 1;
                }
            break;

            //qualquer outra tecla
            default:
                tecla_invalida = 1;
            break;
        }

        //Caso um tecla não leve a uma ação
        if(tecla_invalida == 1){
            escolhendo = 1;
        }

    }
    return(retorno);
}

void nivel2(){
    system("color 80");
    srand(time(NULL));
    int vida = 3;  //vidas do jogador
    int terminar = 0; //se for 1, o jogo termina

    while(terminar == 0){
        int pos[2]; //posição do jogador
        int porta = 0; //porta (0 - fechada, 1 - aberta)
        int interagir = 0; //quando o jogador pode apertar 'i' para interagir
        int jogando = 1; //controle do jogo (1 - jogando, 0 - saiu)

        int area = 20; //dimensão da fase 20x20
        
        char linha[area + 2][area + 3];
        int i;

        //posição inicial
        pos[0] = 10; //x
        pos[1] = 10; //y

        //Estrutura do nível 2 com espinhos, botões e monstros
        strcpy(linha[0], "**********************");
        strcpy(linha[1], "*                    *");
        strcpy(linha[2], "* *  X  # * O * * * **");
        strcpy(linha[3], "* # *  * *   #     ***");
        strcpy(linha[4], "* *    * O *  * # * **");
        strcpy(linha[5], "*    # *    #     * **");
        strcpy(linha[6], "*  *  *    * X   *   *");
        strcpy(linha[7], "*  *    # O *  #    **");
        strcpy(linha[8], "* X * * #    *     * *");
        strcpy(linha[9], "*     #  * # * * *   *");
        strcpy(linha[10], "* O   *    # X   *  *");
        strcpy(linha[11], "* # * O   * *    *  *");
        strcpy(linha[12], "* X   # O * * *   * *");
        strcpy(linha[13], "* # * O # *     #   *");
        strcpy(linha[14], "*  *   # X #   * *  *");
        strcpy(linha[15], "*   * #   *  *  * * *");
        strcpy(linha[16], "* # O   * #   X   # *");
        strcpy(linha[17], "* *   *  #  * X   * *");
        strcpy(linha[18], "*     *   #   *   * *");
        strcpy(linha[19], "*********************");

        while(jogando == 1){

            //Layout do Nível
            system("cls");
            printf("\n\t          >------<---/\\--->------<\n");
            for(i = area + 1; i >= 0; i--){
                printf("\n\t\t\t%s", linha[i]);
            }
            printf("\n\n\t          >------<---\\/--->------<\n");
            printf("\n\t\t    Vidas Restantes: %i", vida);
            if(interagir == 1) printf("\n\n\t     > Pressione (i) para Interagir <");

            linha[pos[1]][pos[0]] = ' '; //apaga a posição do jogador

            //detecção dos lugares ao redor do jogador
            char cw = linha[pos[1] + 1][pos[0]];
            char cs = linha[pos[1] - 1][pos[0]];
            char cd = linha[pos[1]][pos[0] + 1];
            char ca = linha[pos[1]][pos[0] - 1];

            //Ação do jogador
            int escolha = acao(interagir, cw, cs, cd, ca);
            switch (escolha){
            case 1: pos[1]++; break; //move pra cima
            case 2: pos[1]--; break; //move pra baixo
            case 3: pos[0]--; break; //move pra esquerda
            case 4: pos[0]++; break; //move pra direita
            case 5: interagir = 2; break; //interage com objetos
            }

            //Verificação de colisões e ações ao interagir com objetos
            char coord = linha[pos[1]][pos[0]];
            if(coord == 'O'){ //Botão
                if(interagir == 2){
                    //Ação do botão, como abrir uma porta ou desativar espinhos
                    system("cls");
                    printf("\n\n\t            >------<---/\\--->------<");
                    printf("\n\n\t-= Você pressionou o botão! Algo aconteceu... =-");
                    printf("\n\n\t            >------<---\\/--->------<");
                    getch();
                    linha[10][1] = '='; //Desativa porta ou outro evento
                }
            }
            else if(coord == '#'){ //Espinhos
                if(interagir == 2){
                    vida--;
                    system("cls");
                    printf("\n\n\t             >------<---/\\--->------<");
                    printf("\n\n\t-= A Gousma aventureira pisou nos espinhos! =-");
                    printf("  \n\t         -= Você perde uma vida!! Vidas restantes: %i! =-", vida);
                    printf("\n\n\t             >------<---\\/--->------<");
                    getch();
                }
            }
            else if(coord == 'X'){ //Monstro
                if(interagir == 2){
                    vida--;
                    system("cls");
                    printf("\n\n\t             >------<---/\\--->------<");
                    printf("\n\n\t-= Um monstro feroz te atacou! =-");
                    printf("  \n\t         -= Você perde uma vida!! Vidas restantes: %i! =-", vida);
                    printf("\n\n\t             >------<---\\/--->------<");
                    getch();
                }
            }

            //Gera jogador
            linha[pos[1]][pos[0]] = '&';
        }

        if(vida == 0){
            terminar = 1;
        }
    }
    if(vida == 0){
        //morte();  //função para morte do jogador
    } else {
        //nivel3();  //Próxima fase
    }
}

int main(){
    
    setlocale(LC_ALL, "");
    nivel2();

    return 0;

}