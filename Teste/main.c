#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <time.h>

int movX(int nivel, int x, int posx, int posy, char cw, char ca, char cs, char cd){

    int inimigo[8][4] = {{24,17,0,0},{24,17,0,0},{7,5,9,5},{7,5,17,13},{11,9,9,5},{11,9,17,13},{15,13,17,13},{20,18,8,4}};
    if(nivel == 2){
        x += 2;
    }
    int escolhendo = 1, retorno;

    while(escolhendo == 1){

        int escolha = rand() % 4;

        switch (escolha){
        case 0://cima
            if(cw != '*' && inimigo[x][0] != posy){
                retorno = 1;
                escolhendo = 0;
            }
        break;
        case 1://baixo
            if(cs != '*' && inimigo[x][1] != posy){
                retorno = 2;
                escolhendo = 0;
            }
        break;
        case 2://direita
            if(cd != '*' && inimigo[x][2] != posx){
                retorno = 3;
                escolhendo = 0;
            }
        break;
        case 3://esquerda
            if(ca != '*' && inimigo[x][3] != posx){
                retorno = 4;
                escolhendo = 0;
            }
        break;
        }
    }
    return(retorno);
}

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
    int vida = 3;//caso chegue a 0, o jogo acaba e retorna o tÃ­tulo
    int terminar = 0;//caso seja 1, o jogo termina

    while(terminar == 0){
        int nivel = 2;//serve apenas para os inimigos X
        int pos[2];//posicao do jogador
        int numero_de_inimigos = 6;//auto explicativo
        int posx[numero_de_inimigos][2];
        int porta = 0;//valor da porta (0 - fechada, 1- aberta)
        int botao = 0;//valor do botão (0 - inativo, 1 - ativo)
        int interagir = 0;//valor que decide quando o jogador pode apertar i para interagir
        int jogando = 1;//valor para o loop do jogo (1 - jogando, 0 - saiu do jogo)

        int area = 20;//area do nivel ---------> mude para a area do seu nivel <------------

        char linha[area + 2][area + 3];
        int i;

        //toda vez que ver -=-=-=-=-=-=--=-=-=-=-=-=-, mudar a posicao do objeto de acordo com o seu mapa
        //posicao inicial
        pos[0] = 15;//x -=-=-=-=-=-=--=-=-=-=-=-=-
        pos[1] = 2;//y -=-=-=-=-=-=--=-=-=-=-=-=-
        //posicao inicial dos inimigos
        posx[0][0] = 7;//x1
        posx[0][1] = 6;//y1
        posx[1][0] = 15;//x2
        posx[1][1] = 6;//y2
        //
        posx[2][0] = 7;//x3
        posx[2][1] = 10;//y3
        posx[3][0] = 15;//x4
        posx[3][1] = 10;//y4
        //
        posx[4][0] = 15;//x5
        posx[4][1] = 14;//y5
        //
        posx[5][0] = 6;//x6
        posx[5][1] = 19;//y6

        //aqui cada linha do nivel deve ser colocada. o nivel e a area mais uma camada de *s em cada lado
        //10x10 = 12 linhas - 0 a 11
        //20x20 = 22 linhas - 0 a 21
        //40x40 = 42 linhas - 0 a 41
         strcpy(linha[0], "**********************");
         strcpy(linha[1], "****     ****     ****");
         strcpy(linha[2], "**    D        &  ****");
         strcpy(linha[3], "** *     ****     ****");
         strcpy(linha[4], "** *******************");
         strcpy(linha[5], "** **     ***     ****");
         strcpy(linha[6], "**     X       X    **");
         strcpy(linha[7], "*****     ***     * **");
         strcpy(linha[8], "******************* **");
         strcpy(linha[9], "*****     ***     * **");
        strcpy(linha[10], "* ##   X       X    **");
        strcpy(linha[11], "* ***     ***     * **");
        strcpy(linha[12], "* ***************** **");
        strcpy(linha[13], "* **     ####     * **");
        strcpy(linha[14], "* **  O        X    **");
        strcpy(linha[15], "* **     ####     ****");
        strcpy(linha[16], "* ********************");
        strcpy(linha[17], "* ********************");
        strcpy(linha[18], "* **     ######     **");
        strcpy(linha[19], "*     X          @  **");
        strcpy(linha[20], "****     ######     **");
        strcpy(linha[21], "**********************");

        while(jogando == 1){

            //Layout do Ní­vel
            system("cls");
            printf("\n\t       >------<---/\\--->------<\n");
            for(i = area + 1; i >= 0; i--){
                printf("\n\t\t%s",linha[i]);
            }
            printf("\n\n\t       >------<---\\/--->------<\n");
            //Vida
            printf("\n\t\t    Vidas Restantes: %i",vida);
            //Caso possa interagir
            if(interagir == 1) printf("\n\n\t     > Pressione (i) para Interagir <");

            //apaga o jogador
            linha[pos[1]][pos[0]] = ' ';

            //detecta o lugar acima do jogador
            char cw = linha[pos[1] + 1][pos[0]];
            //detecta o lugar abaixo do jogador
            char cs = linha[pos[1] - 1][pos[0]];
            //detecta o lugar a direita do jogador
            char cd = linha[pos[1]][pos[0] + 1];
            //detecta o lugar a esquerda do jogador
            char ca = linha[pos[1]][pos[0] - 1];

            //detecta a acao
            int escolha = acao(interagir,cw,cs,cd,ca);
            switch (escolha){
            case 1:
                pos[1]++;//move pra cima
            break;
            case 2:
                pos[1]--;//pra baixo
            break;
            case 3:
                pos[0]--;//esquerda
            break;
            case 4:
                pos[0]++;//direita
            break;
            case 5:
                interagir = 2;//interage
            break;
            }
            
            //Re-gera Pontos especiais
            //toda vez que ver -=-=-=-=-=-=--=-=-=-=-=-=-, mudar a posicao do objeto de acordo com o seu mapa
            //Chave e porta
            if(porta == 1){//aberto
                //Chave -=-=-=-=-=-=--=-=-=-=-=-=-
                linha[19][17] = ' ';
                //Porta -=-=-=-=-=-=--=-=-=-=-=-=-
                linha[2][6] = '=';
            }else{//fechado
                //Chave -=-=-=-=-=-=--=-=-=-=-=-=-
                linha[19][17] = '@';
                //Porta -=-=-=-=-=-=--=-=-=-=-=-=-
                linha[2][6] = 'D';
            }
            //Botão
            if(botao == 1){//botão inativo
                linha[14][6] = ' ';
            }else{//botão ativo
                linha[14][6] = 'O';
            }

            //movimento de Xs
            int x;

            if(interagir != 2){
                for(x = 0; x < numero_de_inimigos; x++){

                    int cwx = linha[posx[x][1] + 1][posx[x][0]];//detecta o lugar acima de X
                    int csx = linha[posx[x][1] - 1][posx[x][0]];//detecta o lugar abaixo de X
                    int cdx = linha[posx[x][1]][posx[x][0] + 1];//detecta o lugar a direita de X
                    int cax = linha[posx[x][1]][posx[x][0] - 1];//detecta o lugar a esquerda de X

                    linha[posx[x][1]][posx[x][0]] = ' ';//apaga X

                    int movimentoX = movX(nivel,x,posx[x][0],posx[x][1],cwx,cax,csx,cdx);//funcao de movimento de X

                    switch (movimentoX){
                    case 1:
                        posx[x][1]++;//move pra cima
                    break;
                    case 2:
                        posx[x][1]--;//pra baixo
                    break;
                    case 3:
                        posx[x][0]++;//direita
                    break;
                    case 4:
                        posx[x][0]--;//esquerda
                    break;
                    }
                    linha[posx[x][1]][posx[x][0]] = 'X';//reposiciona X
                }
            }

            //detecta o lugar do jogador
            char coord = linha[pos[1]][pos[0]];

            //Caso tenha escolhido interagir / Caso esteja em um local para interagir
            if(coord == '@'){//Chave

                if(interagir == 2){

                    system("cls");
                    printf("\n\n\t            >------<---/\\--->------<");
                    printf("\n\n\t-= Você encontrou a chave! Uma porta se abriu! =-");
                    printf("\n\n\t            >------<---\\/--->------<");
                    printf("\n\n\t         -= Pressione qualquer tecla =-");
                    getch();
                    //Chave -=-=-=-=-=-=--=-=-=-=-=-=-
                    linha[19][4] = ' ';
                    //Porta -=-=-=-=-=-=--=-=-=-=-=-=-
                    linha[2][6] = '=';
                    porta = 1;
                    interagir = 0;
                }
                if(porta == 0) interagir = 1;
            
            }else if(coord == 'D'){//Porta Fechada

                if(interagir == 2){

                    system("cls");
                    printf("\n\n\t                   >------<---/\\--->------<");
                    printf("\n\n\t-= A porta está trancada! Talvez uma chave possa abri-la... =-");
                    printf("\n\n\t                   >------<---\\/--->------<");
                    printf("\n\n\t                -= Pressione qualquer tecla =-");
                    getch();

                }
                interagir = 1;

            }else if(coord == '='){//Porta Aberta

                if(interagir == 2){

                    system("cls");
                    printf("\n\n\t                >------<---/\\--->------<");
                    printf("\n\n\t-= Você passa pela porta e continua a sua jornada... =-");
                    printf("  \n\t                   NÍVEL 2 COMPLETO!!");
                    printf("\n\n\t                >------<---\\/--->------<");
                    printf("\n\n\t             -= Pressione qualquer tecla =-");
                    getch();
                    jogando = 0;
                    terminar = 1;

                }
                interagir = 1;

            }else if(coord == 'O'){//Botão

                if(interagir == 2){

                    system("cls");
                    printf("\n\n\t                   >------<---/\\--->------<");
                    printf("\n\n\t  -= Você aperta o botão e ouve um mecanismo se mexendo... =-");
                    printf("\n\n\t                   >------<---\\/--->------<");
                    printf("\n\n\t                -= Pressione qualquer tecla =-");
                    getch();
                    botao = 1;
                    linha[14][6] = ' ';
                    //todos os espinhos retirados pelo botão
                    //porta para @
                    linha[10][2] = ' ';
                    linha[10][3] = ' ';
                }
                interagir = 1;

            }else interagir = 0;

            //Caso o jogador toque em algum dos inimigos
            if(jogando == 1){
                if(coord == 'X'){//Toque em X
                    system("cls");
                    vida--;
                    printf("\n\n\t                         >------<---/\\--->------<");
                    printf("\n\n\t-= Um inimigo feroz te surpreende e ataca, ferindo a Gousma aventureira! =-");
                    printf("  \n\t              -= Você perde uma vida!! Vidas restantes: %i! =-",vida);
                    printf("\n\n\t                         >------<---\\/--->------<");
                    printf("\n\n\t                      -= Pressione qualquer tecla =-");
                    getch();
                    jogando = 0;
                }else if(coord == '#'){//Toque em #
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
            }
            
            //Gera jogador
            linha[pos[1]][pos[0]] = '&';
            //Jogador é gerado depois dos outros objetos para que "&" tenha prioridade sobre os outros elementos, como "P" ou "@"
        }

        //caso a vida chegue a 0
        if(vida == 0){
            terminar = 1;
        }
    }
    if(vida == 0){
        //morte();
    }else{
        //nivel3();
    }
}

int main(){
    
    setlocale(LC_ALL, "");
    srand(time(NULL));
    nivel2();

    return 0;

}