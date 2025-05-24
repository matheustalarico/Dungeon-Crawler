#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <time.h>

void nivel3(){

    system("color 4f");
    srand(time(NULL));
    int vida = 3;//caso chegue a 0, o jogo acaba e retorna o título
    int terminar = 0;//caso seja 1, o jogo termina

    while(terminar == 0){
        int pos[2];//posicao do jogador
        int posx1[2], boolposx1 = 1, posx2[2], boolposx2 = 1;//posicao dos inimigos nvl1
        int posV[2], boolposV = 0, posVseq[2][2];//posicao do inimigo nvl2
        int porta = 0;//valor da porta (0 - fechada, 1- aberta)
        int botao = 0;//valor do botão (0 - inativo, 1 - ativo)
        int interagir = 0;//valor que decide quando o jogador pode apertar i para interagir
        int jogando = 1;//valor para o loop do jogo (1 - jogando, 0 - saiu do jogo)
        int escolhendo;
        int tecla_invalida = 0;
        char linha[40][41], acao;

        //posicao inicial
        pos[0] = 36;//x
        pos[1] = 37;//y
        //posicao inicial dos inimigos
        posx1[0] = 4;//x
        posx1[1] = 21;//y
        posx2[0] = 36;//x
        posx2[1] = 21;//y
        posV[0] = 23;//x
        posV[1] = 23;//y
        posVseq[0][0] = 22;//x
        posVseq[0][1] = 23;//y


        strcpy(linha[0], "***********##################***********");
        strcpy(linha[1], "**    ****####          ######****    **");
        strcpy(linha[2], "*      ***#### ######## ######***      *");
        strcpy(linha[3], "*            #      ### ###            *");
        strcpy(linha[4], "*            ###### #   ###            *");
        strcpy(linha[5], "*      ***## ###    # ##### ##***      *");
        strcpy(linha[6], "**    ****##     ####       ##****    **");
        strcpy(linha[7], "***  ******##################******  ***");
        strcpy(linha[8], "***  ******************************  ***");
        strcpy(linha[9], "***  ******************************  ***");
        strcpy(linha[10], "***  ******************************  ***");
        strcpy(linha[11], "***  ******   **###   ####   ******  ***");
        strcpy(linha[12], "***  ****** > **##  #  #     ******  ***");
        strcpy(linha[13], "***  ******   **#  ###   #   ******  ***");
        strcpy(linha[14], "***  ******# #**# #*******   ******  ***");
        strcpy(linha[15], "***  ******# #**# #******* ##******  ***");
        strcpy(linha[16], "        ***# #**# #**###**   ***        ");
        strcpy(linha[17], "        ***# #**# #**#D#**## ***        ");
        strcpy(linha[18], "        ***# #**# #**# #**   ***        ");
        strcpy(linha[19], "        ***# #**# #**# #** ##***        ");
        strcpy(linha[20], "   X    ***# #**# #**# #**   ***   X    ");
        strcpy(linha[21], "        ***# #**# ######**## ***        ");
        strcpy(linha[22], "        ***# #**#   O#V#**   ***        ");
        strcpy(linha[23], "        ***# #**########** ##***        ");
        strcpy(linha[24], "***  ******# #************   ******  ***");
        strcpy(linha[25], "***  ******# #************## ******  ***");
        strcpy(linha[26], "***  ******   #     ######   ******  ***");
        strcpy(linha[27], "***  ******     ###    #     ******  ***");
        strcpy(linha[28], "***  ******   ########   #   ******  ***");
        strcpy(linha[29], "***  ******************************  ***");
        strcpy(linha[30], "***  ******************************  ***");
        strcpy(linha[31], "***  ******************************  ***");
        strcpy(linha[32], "***  ******##################******  ***");
        strcpy(linha[33], "**    ****##   #   #   #    ##****    **");
        strcpy(linha[34], "*      ***## # # #   # # ## ##***      *");
        strcpy(linha[35], "*      ***##@#   #####   ##   ###      *");
        strcpy(linha[36], "*  >   ***## #####   ######   ###  &   *");
        strcpy(linha[37], "*      ***## #   # # #   ## ##***      *");
        strcpy(linha[38], "**    ****##   #   #   #    ##****    **");
        strcpy(linha[39], "***********##################***********");



        while(jogando == 1){

            //Layout do Nível
            system("cls");
            printf("\t         >------<---/\\--->------<");
            printf("\n\t******************************************");
            printf("\n\t*%s*",linha[39]);
            printf("\n\t*%s*",linha[38]);
            printf("\n\t*%s*",linha[37]);
            printf("\n\t*%s*",linha[36]);
            printf("\n\t*%s*",linha[35]);
            printf("\n\t*%s*",linha[34]);
            printf("\n\t*%s*",linha[33]);
            printf("\n\t*%s*",linha[32]);
            printf("\n\t*%s*",linha[31]);
            printf("\n\t*%s*",linha[30]);
            printf("\n\t*%s*",linha[29]);
            printf("\n\t*%s*",linha[28]);
            printf("\n\t*%s*",linha[27]);
            printf("\n\t*%s*",linha[26]);
            printf("\n\t*%s*",linha[25]);
            printf("\n\t*%s*",linha[24]);
            printf("\n\t*%s*",linha[23]);
            printf("\n\t*%s*",linha[22]);
            printf("\n\t*%s*",linha[21]);
            printf("\n\t*%s*",linha[20]);
            printf("\n\t*%s*",linha[19]);
            printf("\n\t*%s*",linha[18]);
            printf("\n\t*%s*",linha[17]);
            printf("\n\t*%s*",linha[16]);
            printf("\n\t*%s*",linha[15]);
            printf("\n\t*%s*",linha[14]);
            printf("\n\t*%s*",linha[13]);
            printf("\n\t*%s*",linha[12]);
            printf("\n\t*%s*",linha[11]);
            printf("\n\t*%s*",linha[10]);
            printf("\n\t*%s*",linha[9]);
            printf("\n\t*%s*",linha[8]);
            printf("\n\t*%s*",linha[7]);
            printf("\n\t*%s*",linha[6]);
            printf("\n\t*%s*",linha[5]);
            printf("\n\t*%s*",linha[4]);
            printf("\n\t*%s*",linha[3]);
            printf("\n\t*%s*",linha[2]);
            printf("\n\t*%s*",linha[1]);
            printf("\n\t*%s*",linha[0]);
            printf("\n\t******************************************");
            printf("\n\t         >------<---\\/--->------<");
            //Vida
            printf("\n\t\t    Vidas Restantes: %i",vida);
            //Caso possa interagir
            if(interagir == 1) printf("\n\n\t     > Pressione (i) para Interagir <");
            //detecta a acao
            escolhendo = 1;
            acao = getch();

            //caso V esteja ativo
            if(boolposV == 1){
                posVseq[1][0] = pos[0];
                posVseq[1][1] = pos[1];
            }

            while(escolhendo == 1){

                //Apaga o caractere do jogador, será mudado depois de qualquer jeito
                linha[pos[1] - 1][pos[0] - 1] = ' ';
                escolhendo = 0;
                tecla_invalida = 0;

                switch (acao){

                    //movimento
                    case 'w':
                        pos[1]++;
                        if(linha[pos[1] - 1][pos[0] - 1] == '*' || pos[0] > 40 || pos[0] < 1 || pos[1] > 40 || pos[1] < 1){
                            pos[1]--;
                            tecla_invalida = 1;
                        }
                    break;
                    case 's':
                        pos[1]--;
                        if(linha[pos[1] - 1][pos[0] - 1] == '*' || pos[0] > 40 || pos[0] < 1 || pos[1] > 40 || pos[1] < 1){
                            pos[1]++;
                            tecla_invalida = 1;
                        }
                    break;
                    case 'a':
                        pos[0]--;
                        if(linha[pos[1] - 1][pos[0] - 1] == '*' || pos[0] > 40 || pos[0] < 1 || pos[1] > 40 || pos[1] < 1){
                            pos[0]++;
                            tecla_invalida = 1;
                        }
                    break;
                    case 'd':
                        pos[0]++;
                        if(linha[pos[1] - 1][pos[0] - 1] == '*' || pos[0] > 40 || pos[0] < 1 || pos[1] > 40 || pos[1] < 1){
                            pos[0]--;
                            tecla_invalida = 1;
                        }
                    break;

                    //interagir
                    case 'i':
                        if(interagir == 1){
                            interagir = 2;
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
                    acao = getch();
                }

            }
            //Re-gera Pontos especiais
            //Chave e porta
            if(porta == 1){//aberto
                //Chave
                linha[35][12] = ' ';
                //Porta
                linha[17][22] = '=';
            }else{//fechado
                //Chave
                linha[35][12] = '@';
                //Porta
                linha[17][22] = 'D';
            }
            //TPs
            linha[36][3] = '>';
            linha[12][12] = '>';
            //Botão
            if(botao == 1){//botão inativo
                linha[22][20] = ' ';
            }else{//botão ativo
                linha[22][20] = 'O';
            }
            //movimento de x1 (esquerda)
            if(boolposx1 == 1){
                linha[posx1[1] - 1][posx1[0] - 1] = ' ';
                acao = rand() % 4;
                switch (acao){
                    case 0://cima
                        posx1[1]++;
                        if(posx1[1] == 25) posx1[1]--;
                    break;
                    case 1://baixo
                        posx1[1]--;
                        if(posx1[1] == 16) posx1[1]++;
                    break;
                    case 2://direita
                        posx1[0]++;
                        if(posx1[0] == 9) posx1[0]--;
                    break;
                    case 3://esquerda
                        posx1[0]--;
                        if(posx1[0] == 0) posx1[0]++;
                    break;
                }
                linha[posx1[1] - 1][posx1[0] - 1] = 'X';
            }
            //movimento de x2 (direita)
            if(boolposx2 == 1){
                linha[posx2[1] - 1][posx2[0] - 1] = ' ';
                acao = rand() % 4;
                switch (acao){
                    case 0://cima
                        posx2[1]++;
                        if(posx2[1] == 25) posx2[1]--;
                    break;
                    case 1://baixo
                        posx2[1]--;
                        if(posx2[1] == 16) posx2[1]++;
                    break;
                    case 2://direita
                        posx2[0]++;
                        if(posx2[0] == 41) posx2[0]--;
                    break;
                    case 3://esquerda
                        posx2[0]--;
                        if(posx2[0] == 32) posx2[0]++;
                    break;
                }
                linha[posx2[1] - 1][posx2[0] - 1] = 'X';
            }
            //movimento de V
            if(boolposV == 1){
                linha[posV[1] - 1][posV[0] - 1] = ' ';
                posV[0] = posVseq[0][0];
                posV[1] = posVseq[0][1];
                posVseq[0][0] = posVseq[1][0];
                posVseq[0][1] = posVseq[1][1];
                linha[posV[1] - 1][posV[0] - 1] = 'V';
            }
            //Caso tenha escolhido interagir / Caso esteja em um local para interagir
            if(linha[pos[1] - 1][pos[0] - 1] == '@'){//Chave

                if(interagir == 2){

                    system("cls");
                    printf("\n\n\t            >------<---/\\--->------<");
                    printf("\n\n\t-= Você encontrou a chave! Uma porta se abriu! =-");
                    printf("\n\n\t            >------<---\\/--->------<");
                    printf("\n\n\t         -= Pressione qualquer tecla =-");
                    getch();
                    //Chave
                    linha[35][12] = ' ';
                    //Porta
                    linha[17][22] = '=';
                    porta = 1;
                }
                if(porta == 0) interagir = 1;
            
            }else if(linha[pos[1] - 1][pos[0] - 1] == 'D'){//Porta Fechada

                if(interagir == 2){

                    system("cls");
                    printf("\n\n\t                   >------<---/\\--->------<");
                    printf("\n\n\t-= A porta está trancada! Talvez uma chave possa abri-la... =-");
                    printf("\n\n\t                   >------<---\\/--->------<");
                    printf("\n\n\t                -= Pressione qualquer tecla =-");
                    getch();

                }
                interagir = 1;

            }else if(linha[pos[1] - 1][pos[0] - 1] == '='){//Porta Aberta

                if(interagir == 2){

                    system("cls");
                    printf("\n\n\t                >------<---/\\--->------<");
                    printf("\n\n\t-= Você passa pela porta e continua a sua jornada... =-");
                    printf("  \n\t                   TUTORIAL COMPLETO!!");
                    printf("\n\n\t                >------<---\\/--->------<");
                    printf("\n\n\t             -= Pressione qualquer tecla =-");
                    getch();
                    jogando = 0;
                    terminar = 0;
                    //Colocar a função do nível 1 aqui!

                }
                interagir = 1;

            }else if(linha[pos[1] - 1][pos[0] - 1] == '>'){//TP

                if(pos[0] == 4 && interagir == 2){//TP de cima

                    pos[0] = 13;
                    pos[1] = 13;

                }else if(pos[0] == 13 && interagir == 2){//TP de baixo

                    pos[0] = 4;
                    pos[1] = 37;

                }
                interagir = 1;

            }else if(linha[pos[1] - 1][pos[0] - 1] == 'O'){//Botão

                if(interagir == 2){

                    system("cls");
                    printf("\n\n\t                   >------<---/\\--->------<");
                    printf("\n\n\t  -= Você aperta o botão e ouve um mecanismo se mexendo... =-");
                    printf("  \n\t-= Também é possível sentir o perigo iminete se aproximando. =-");
                    printf("\n\n\t                   >------<---\\/--->------<");
                    printf("\n\n\t                -= Pressione qualquer tecla =-");
                    getch();
                    botao = 1;
                    linha[22][20] = ' ';
                    //todos os espinhos retirados pelo botão
                    //centro (com V)
                    linha[22][21] = ' ';
                    linha[21][22] = ' ';
                    //porta da sala com @
                    linha[35][30] = ' ';
                    linha[35][31] = ' ';
                    linha[35][32] = ' ';
                    linha[36][30] = ' ';
                    linha[36][31] = ' ';
                    linha[36][32] = ' ';
                    //V é ativado
                    boolposV = 1;
                }
                interagir = 1;

            }else interagir = 0;
            //Caso o jogador toque em algum dos inimigos
            if(linha[pos[1] - 1][pos[0] - 1] == 'X'){//Toque em X
                system("cls");
                vida--;
                printf("\n\n\t                         >------<---/\\--->------<");
                printf("\n\n\t-= Um inimigo feroz te surpreende e ataca, ferindo a Gousma aventureira! =-");
                printf("  \n\t              -= Você perde uma vida!! Vidas restantes: %i! =-",vida);
                printf("\n\n\t                         >------<---\\/--->------<");
                printf("\n\n\t                      -= Pressione qualquer tecla =-");
                getch();
                jogando = 0;
            }
            if(linha[pos[1] - 1][pos[0] - 1] == 'V'){//Toque em X
                system("cls");
                vida--;
                printf("\n\n\t                          >------<---/\\--->------<");
                printf("\n\n\t-= Um inimigo implacável te agarra e ataca, ferindo a Gousma aventureira! =-");
                printf("  \n\t               -= Você perde uma vida!! Vidas restantes: %i! =-",vida);
                printf("\n\n\t                          >------<---\\/--->------<");
                printf("\n\n\t                       -= Pressione qualquer tecla =-");
                getch();
                jogando = 0;
            }
            if(linha[pos[1] - 1][pos[0] - 1] == '#'){//Toque em X
                system("cls");
                vida--;
                printf("\n\n\t                         >------<---/\\--->------<");
                printf("\n\n\t-= A Gousma aventureira cai em uma armadilha espinhosa e afiada e se fere! =-");
                printf("  \n\t              -= Você perde uma vida!! Vidas restantes: %i! =-",vida);
                printf("\n\n\t                         >------<---\\/--->------<");
                printf("\n\n\t                      -= Pressione qualquer tecla =-");
                getch();
                jogando = 0;
            }
            
            //Gera jogador
            linha[pos[1] - 1][pos[0] - 1] = '&';
            //Jogador é gerado depois dos outros objetos para que "&" tenha prioridade sobre os outros elementos, como "P" ou "@"
        }

        //caso a vida chegue a 0
        if(vida == 0){
            terminar = 1;
            //morte();
        }
    }
}

int main(){
    
    setlocale(LC_ALL, "");
    nivel3();

    return 0;

}
