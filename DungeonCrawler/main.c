#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <time.h>

void vitoria(){

    system("cls");
    system("color f0");
    printf("\n\t                                               /\\\n\t /____________________/_/___________________/_/  \\_\\__________________\\_\\_____________________\\\n\t \\                    \\ \\                   \\ \\  / /                  / /                     /\n\t                                               \\/");
    printf("\n\n\t\t Após muitos desafios e obstáculos, a Gousma aventureira finalmente chega à sala\n\t\t  da poção mágica. Mas, quando em que ela pega o frasco milagroso, um terremoto\n\t\t     sacude a masmorra inteira. Correndo para não ser esmagada, ela consegue\n\t\t\t\t\tescapar e volta para o seu reino.\n\n\t\t  Com a cura em mão, a raça das Gousmas lentamente se recupera da doença mortal\n\t\t e vive para contar a história da Gousma aventureira para as futuras gerações...");
    printf("\n\n\t\t\t\t         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t\t\t       @@@  @@@@@@@@@@@@@@@@@@@@@@@@  @@@\n\t\t\t\t       @@    @@@@@@@@@@@@@@@@@@@@@@    @@\n\t\t\t\t       @@    @@@@@@@@@@@@@@@@@@@@@@    @@\n\t\t\t\t       @@@    @@@@@@@@@@@@@@@@@@@@    @@@\n\t\t\t\t         @@@@ @@@@@@@@@@@@@@@@@@@@ @@@@\n\t\t\t\t           @@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t\t\t              @@@@@@@@@@@@@@@@@@@@\n\t\t\t\t                @@@@@@@@@@@@@@@@\n\t\t\t\t                  @@@@@@@@@@@@@\n\t\t\t\t                   @@@@@@@@@@\n\t\t\t\t                     @@@@@@\n\t\t\t\t                       @@\n\t\t\t\t                       @@\n\t\t\t\t                       @@\n\t\t\t\t                      @@@@\n\t\t\t\t                      @@@@\n\t\t\t\t                    @@@@@@@@\n\t\t\t\t                 @@@@@@@@@@@@@@\n\t\t\t\t               @@@@@@@@@@@@@@@@@@\n\t\t\t\t               @@@@@@@@@@@@@@@@@@");
    printf("\n\n\t\t\t\t\t -= Pressione qualquer tecla =-");
    printf("\n\n\t                                               /\\\n\t /____________________/_/___________________/_/  \\_\\__________________\\_\\_____________________\\\n\t \\                    \\ \\                   \\ \\  / /                  / /                     /\n\t                                               \\/\n");
    getch();

}

void morte(){

    system("cls");
    system("color 0f");
    printf("\n\t                                               /\\\n\t /____________________/_/___________________/_/  \\_\\__________________\\_\\_____________________\\\n\t \\                    \\ \\                   \\ \\  / /                  / /                     /\n\t                                               \\/");
    printf("\n\n\t\t\t   A Gousma aventureira sucumbe aos seus ferimentos e morre.\n\n\t\t\t         A raça das Gousmas está fadada à extinção...");
    printf("\n\n\t\t\t\t                 @@@@@@@@@@@@@@\n\t\t\t\t              @@@   @@         @@@\n\t\t\t\t            @@  @@@               @@\n\t\t\t\t          @@ @@   @                @@@\n\t\t\t\t         @@      @                 @@@@\n\t\t\t\t        @@                         @@@@@\n\t\t\t\t       @@   @@                     @@@@@\n\t\t\t\t       @@    @     @@@   @@@@     @@@@@@@\n\t\t\t\t       @@    @         @          @@@@@@@\n\t\t\t\t        @@  @  @@@@         @@@@@  @@@@@\n\t\t\t\t         @ @ @@@@@@@@@    @@@@@@@@@  @@@\n\t\t\t\t         @@ @@@@@@@@@@    @@@@@@@@@@ @@\n\t\t\t\t         @@ @@@@@@@@@@  @  @@@@@@@@  @@\n\t\t\t\t         @   @@@@@@@@  @@@  @@@@@@  @ @@\n\t\t\t\t         @@           @@@@@      @@@  @\n\t\t\t\t          @@         @@@@@@  @@@    @@\n\t\t\t\t           @@@@@@@   @@@@@@  @@@@@@@\n\t\t\t\t                @             @@\n\t\t\t\t                @@@   @@@@@@ @@@\n\t\t\t\t                   @@@@  @ @@");
    printf("\n\n\t\t\t\t\t  -= Pressione qualquer tecla =-");
    printf("\n\n\t                                               /\\\n\t /____________________/_/___________________/_/  \\_\\__________________\\_\\_____________________\\\n\t \\                    \\ \\                   \\ \\  / /                  / /                     /\n\t                                               \\/\n");
    getch();

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

void nivel3(){

    system("cls");
    system("color 4f");
    printf("\n\t                                               /\\\n\t /____________________/_/___________________/_/  \\_\\__________________\\_\\_____________________\\\n\t \\                    \\ \\                   \\ \\  / /                  / /                     /\n\t                                               \\/");
    printf("\n\n\t\t\t\t\t\t -= NÍVEL 3! =-\n\n\t\tAo adentrar as profundezas das masmorras, a Gousma aventureira consegue sentir uma\n\t   aura mágica envolvendo as paredes de magma. O calor se torna insuportável, mas a\n\t   Gousma não pode desistir agora. Ela está muito perto de achar a poção mágica e\n\t   salvar a sua raça!\n\n\t\tAo chegar no núcleo da masmorra, ela consegue ver uma última entrada para, talvez\n\t   o objetivo da sua aventura, mas uma criatura maléfica bloqueia o seu caminho...");   
    printf("\n\n\n\t        V -> -> &\t\t\t\t\t& > ## > |  > ## > &\n\n\t\t\t\t\t\t\t-= Usar um teletransportador o leva =-\n\t     -= Cuidado!! =-\t\t\t    -= para outro em um lugar diferente do mapa =-\n\n\n\n\t\t\t\t  > Pressione qualquer tecla para continuar <\n\n");
    printf("\t                                               /\\\n\t /____________________/_/___________________/_/  \\_\\__________________\\_\\_____________________\\\n\t \\                    \\ \\                   \\ \\  / /                  / /                     /\n\t                                               \\/\n");
    getch();
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
        int area = 40;
        char linha[area + 2][area + 3];
        int i;

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


         strcpy(linha[0], "******************************************");
         strcpy(linha[1], "************##################************");
         strcpy(linha[2], "***    ****####          ######****    ***");
         strcpy(linha[3], "**      ***#### ######## ######***      **");
         strcpy(linha[4], "**            #      ### ###            **");
         strcpy(linha[5], "**            ###### #   ###            **");
         strcpy(linha[6], "**      ***## ###    # ##### ##***      **");
         strcpy(linha[7], "***    ****##     ####       ##****    ***");
         strcpy(linha[8], "****  ******##################******  ****");
         strcpy(linha[9], "****  ******************************  ****");
        strcpy(linha[10], "****  ******************************  ****");
        strcpy(linha[11], "****  ******************************  ****");
        strcpy(linha[12], "****  ******   **###   ####   ******  ****");
        strcpy(linha[13], "****  ****** > **##  #  #     ******  ****");
        strcpy(linha[14], "****  ******   **#  ###   #   ******  ****");
        strcpy(linha[15], "****  ******# #**# #*******   ******  ****");
        strcpy(linha[16], "****  ******# #**# #******* ##******  ****");
        strcpy(linha[17], "*        ***# #**# #**###**   ***        *");
        strcpy(linha[18], "*        ***# #**# #**#D#**## ***        *");
        strcpy(linha[19], "*        ***# #**# #**# #**   ***        *");
        strcpy(linha[20], "*        ***# #**# #**# #** ##***        *");
        strcpy(linha[21], "*   X    ***# #**# #**# #**   ***   X    *");
        strcpy(linha[22], "*        ***# #**# ######**## ***        *");
        strcpy(linha[23], "*        ***# #**#   O#V#**   ***        *");
        strcpy(linha[24], "*        ***# #**########** ##***        *");
        strcpy(linha[25], "****  ******# #************   ******  ****");
        strcpy(linha[26], "****  ******# #************## ******  ****");
        strcpy(linha[27], "****  ******   #     ######   ******  ****");
        strcpy(linha[28], "****  ******     ###    #     ******  ****");
        strcpy(linha[29], "****  ******   ########   #   ******  ****");
        strcpy(linha[30], "****  ******************************  ****");
        strcpy(linha[31], "****  ******************************  ****");
        strcpy(linha[32], "****  ******************************  ****");
        strcpy(linha[33], "****  ******##################******  ****");
        strcpy(linha[34], "***    ****##   #   #   #    ##****    ***");
        strcpy(linha[35], "**      ***## # # #   # # ## ##***      **");
        strcpy(linha[36], "**      ***##@#   #####   ##   ###      **");
        strcpy(linha[37], "**  >   ***## #####   ######   ###  &   **");
        strcpy(linha[38], "**      ***## #   # # #   ## ##***      **");
        strcpy(linha[39], "***    ****##   #   #   #    ##****    ***");
        strcpy(linha[40], "************##################************");
        strcpy(linha[41], "******************************************");



        while(jogando == 1){

            //Layout do Nível
            system("cls");
            printf("\t         >------<---/\\--->------<");
            for(i = area + 1; i >= 0; i--){
                printf("\n\t%s",linha[i]);
            }
            printf("\n\t        >------<---\\/--->------<");
            //Vida
            printf("\n\t\t    Vidas Restantes: %i",vida);
            //Caso possa interagir
            if(interagir == 1) printf("\n\n\t     > Pressione (i) para Interagir <");

            //caso V esteja ativo
            if(boolposV == 1){
                posVseq[1][0] = pos[0];
                posVseq[1][1] = pos[1];
            }

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
            //Chave e porta
            if(porta == 1){//aberto
                //Chave
                linha[36][13] = ' ';
                //Porta
                linha[18][23] = '=';
            }else{//fechado
                //Chave
                linha[36][13] = '@';
                //Porta
                linha[18][23] = 'D';
            }
            //TPs
            linha[37][4] = '>';
            linha[13][13] = '>';
            //Botão
            if(botao == 1){//botão inativo
                linha[23][21] = ' ';
            }else{//botão ativo
                linha[23][21] = 'O';
            }
            //movimento de x1 (esquerda)
            if(boolposx1 == 1){
                linha[posx1[1]][posx1[0]] = ' ';
                escolha = rand() % 4;
                switch (escolha){
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
                linha[posx1[1]][posx1[0]] = 'X';
            }
            //movimento de x2 (direita)
            if(boolposx2 == 1){
                linha[posx2[1]][posx2[0]] = ' ';
                escolha = rand() % 4;
                switch (escolha){
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
                linha[posx2[1]][posx2[0]] = 'X';
            }
            //movimento de V
            if(boolposV == 1){
                linha[posV[1]][posV[0]] = ' ';
                posV[0] = posVseq[0][0];
                posV[1] = posVseq[0][1];
                posVseq[0][0] = posVseq[1][0];
                posVseq[0][1] = posVseq[1][1];
                linha[posV[1]][posV[0]] = 'V';
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
                    //Chave
                    linha[36][13] = ' ';
                    //Porta
                    linha[18][23] = '=';
                    porta = 1;
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
                    printf("  \n\t                   NÍVEL 3 COMPLETO!!");
                    printf("\n\n\t                >------<---\\/--->------<");
                    printf("\n\n\t             -= Pressione qualquer tecla =-");
                    getch();
                    jogando = 0;
                    terminar = 1;

                }
                interagir = 1;

            }else if(coord == '>'){//TP

                if(pos[0] == 4 && interagir == 2){//TP de cima

                    pos[0] = 13;
                    pos[1] = 13;

                }else if(pos[0] == 13 && interagir == 2){//TP de baixo

                    pos[0] = 4;
                    pos[1] = 37;

                }
                interagir = 1;

            }else if(coord == 'O'){//Botão

                if(interagir == 2){

                    system("cls");
                    printf("\n\n\t                   >------<---/\\--->------<");
                    printf("\n\n\t  -= Você aperta o botão e ouve um mecanismo se mexendo... =-");
                    printf("  \n\t-= Também é possível sentir o perigo iminete se aproximando. =-");
                    printf("\n\n\t                   >------<---\\/--->------<");
                    printf("\n\n\t                -= Pressione qualquer tecla =-");
                    getch();
                    botao = 1;
                    linha[23][21] = ' ';
                    //todos os espinhos retirados pelo botão
                    //centro (com V)
                    linha[23][22] = ' ';
                    linha[22][23] = ' ';
                    //porta da sala com @
                    linha[36][31] = ' ';
                    linha[36][32] = ' ';
                    linha[36][33] = ' ';
                    linha[37][31] = ' ';
                    linha[37][32] = ' ';
                    linha[37][33] = ' ';
                    //V é ativado
                    boolposV = 1;
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
                }else if(coord == 'V'){//Toque em X
                    system("cls");
                    vida--;
                    printf("\n\n\t                          >------<---/\\--->------<");
                    printf("\n\n\t-= Um inimigo implacável te agarra e ataca, ferindo a Gousma aventureira! =-");
                    printf("  \n\t               -= Você perde uma vida!! Vidas restantes: %i! =-",vida);
                    printf("\n\n\t                          >------<---\\/--->------<");
                    printf("\n\n\t                       -= Pressione qualquer tecla =-");
                    getch();
                    jogando = 0;
                }else if(coord == '#'){//Toque em X
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
        morte();
    }else{
        vitoria();
    }
}

void nivel1(){

    system("color 2f");
    srand(time(NULL));
    int vida = 3;//caso chegue a 0, o jogo acaba e retorna o título
    int terminar = 0;//caso seja 1, o jogo termina

    while(terminar == 0){
        int pos[2];//posicao do jogador
        int porta = 0;//valor da porta (0 - fechada, 1- aberta)
        int interagir = 0;//valor que decide quando o jogador pode apertar i para interagir
        int jogando = 1;//valor para o loop do jogo (1 - jogando, 0 - saiu do jogo)
        int area = 10;//area do nivel
        char linha[area + 2][area + 3];
        int i;

        //posicao inicial
        pos[0] = 6;//x
        pos[1] = 6;//y


         strcpy(linha[0], "************");
         strcpy(linha[1], "*          *");
         strcpy(linha[2], "* *** ** * *");
         strcpy(linha[3], "***    * * *");
         strcpy(linha[4], "*@* **** * *");
         strcpy(linha[5], "* * *    * *");
         strcpy(linha[6], "* * * & ** *");
         strcpy(linha[7], "* * *   ** *");
         strcpy(linha[8], "*   ****** *");
         strcpy(linha[9], "*****    * *");
        strcpy(linha[10], "*D    **   *");
        strcpy(linha[11], "************");

        while(jogando == 1){

            //Layout do Nível
            system("cls");
            printf("\n\t          >------<---/\\--->------<\n");
            for(i = area + 1; i >= 0; i--){
                printf("\n\t\t\t%s",linha[i]);
            }
            printf("\n\n\t          >------<---\\/--->------<\n");
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
            //Chave e porta
            if(porta == 1){//aberto
                //Chave
                linha[4][1] = ' ';
                //Porta
                linha[10][1] = '=';
            }else{//fechado
                //Chave
                linha[4][1] = '@';
                //Porta
                linha[10][1] = 'D';
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
                    //Chave
                    linha[4][1] = ' ';
                    //Porta
                    linha[10][1] = '=';
                    porta = 1;
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
                    printf("  \n\t                   TUTORIAL COMPLETO!!");
                    printf("\n\n\t                >------<---\\/--->------<");
                    printf("\n\n\t             -= Pressione qualquer tecla =-");
                    getch();
                    jogando = 0;
                    terminar = 1;
                    nivel3();

                }
                interagir = 1;

            }else interagir = 0;
            
            //Gera jogador
            linha[pos[1]][pos[0]] = '&';
            //Jogador é gerado depois dos outros objetos para que "&" tenha prioridade sobre os outros elementos, como "P" ou "@"
        }

        //caso a vida chegue a 0
        if(vida == 0){
            terminar = 1;
        }
    }
}

void vila(){

    int pos[2];//posicao do jogador
    int porta = 0;//valor da porta (0 - fechada, 1- aberta)
    int interagir = 0;//valor que decide quando o jogador pode apertar i para interagir
    int jogando = 1;//valor para o loop do jogo (1 - jogando, 0 - saiu do jogo)
    int vida = 3;
    int area = 10;//area do nivel
    char linha[area + 2][area + 3];
    int i;

    //posicao inicial
    pos[0] = 2;//x
    pos[1] = 2;//y

     strcpy(linha[0], "************");
     strcpy(linha[1], "*   *   ****");
     strcpy(linha[2], "* & * @ P **");
     strcpy(linha[3], "*   *   * **");
     strcpy(linha[4], "** ****** **");
     strcpy(linha[5], "**P*   ** **");
     strcpy(linha[6], "** * D ** **");
     strcpy(linha[7], "** *   ** **");
     strcpy(linha[8], "*   *P**   *");
     strcpy(linha[9], "*        P *");
    strcpy(linha[10], "*   ****   *");
    strcpy(linha[11], "************");



    while(jogando == 1){

        //Layout do Nível
        system("cls");
        printf("\n\t          >------<---/\\--->------<\n");
        for(i = area + 1; i >= 0; i--){
            printf("\n\t\t\t%s",linha[i]);
        }
        printf("\n\n\t          >------<---\\/--->------<\n");
        //Vida
        printf("\n\t\t     Vidas Restantes: %i",vida);
        //Caso possa interagir
        if(interagir == 1) printf("\n\n\t      > Pressione (i) para Interagir <");

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
        //NPCs
        linha[5][2] = 'P';
        linha[8][5] = 'P';
        linha[9][9] = 'P';
        linha[2][8] = 'P';
        //Chave e porta
        if(porta == 1){//aberto
            //Chave
            linha[2][6] = ' ';
            //Porta
            linha[6][5] = '=';
        }else{//fechado
            //Chave
            linha[2][6] = '@';
            //Porta
            linha[6][5] = 'D';
        }

        //detecta o lugar do jogador
        char coord = linha[pos[1]][pos[0]];
        
        //Caso tenha escolhido interagir / Caso esteja em um local para interagir
        if(coord == 'P'){//NPC

            if(interagir == 2){

                if(pos[0] == 2 && pos[1] == 5){//NPC1

                    system("cls");
                    printf("\n\n\t                   >------<---/\\--->------<");
                    printf("\n\n\t-= Você encontra uma Gousma local, que te cumprimenta e diz: =-");
                    printf("\n\n\t\"  Olá, Gousma aventureira!! Você deve ter vindo de muito longe\n\tpara acabar aqui... Há poucos de nós nessa vila, mas sinta-\n\t-se à vontade para falar com qualquer um.\"\n\n\tPara interagir com os aldeões (P), ande até ficar sobre\n\teles e aperte (i)!");
                    printf("\n\n\t                   >------<---\\/--->------<");
                    printf("\n\n\t                -= Pressione qualquer tecla =-");
                    getch();

                }
                if(pos[0] == 5 && pos[1] == 8){//NPC2

                    system("cls");
                    printf("\n\n\t                   >------<---/\\--->------<");
                    printf("\n\n\t-= Você encontra uma Gousma local, que te cumprimenta e diz: =-");
                    printf("\n\n\t\"  Atrás de mim há uma porta, uma de várias que você vai\n\tencontrar adiante. Elas ficam fechadas (D) até que você ache\n\tuma chave (@) para abri-las (=) e continuar a sua jornada.\"");
                    printf("\n\n\t                   >------<---\\/--->------<");
                    printf("\n\n\t                -= Pressione qualquer tecla =-");
                    getch();
                    
                }
                if(pos[0] == 9 && pos[1] == 9){//NPC3

                    system("cls");
                    printf("\n\n\t                   >------<---/\\--->------<");
                    printf("\n\n\t-= Você encontra uma Gousma local, que te cumprimenta e diz: =-");
                    printf("\n\n\t\"  Durante a sua jornada, você acabará encontrando perigos e\n\tarmadilhas, como espinhos (#), inimigos básicos (X) e inimigos\n\tinteligentes (V). Tome cuidado, Gousma aventureira!\"");
                    printf("\n\n\t                   >------<---\\/--->------<");
                    printf("\n\n\t                -= Pressione qualquer tecla =-");
                    getch();
                    
                }
                if(pos[0] == 8 && pos[1] == 2){//NPC4

                    system("cls");
                    printf("\n\n\t                   >------<---/\\--->------<");
                    printf("\n\n\t-= Você encontra uma Gousma local, que te cumprimenta e diz: =-");
                    printf("\n\n\t\"  Há alguns mecanismos que podem te ajudar em sua missão...\n\tAcredito que existam botões (O) e talvez teletransportadores\n\tmágicos (>)! Boa sorte, Gousma aventureira!\"");
                    printf("\n\n\t                   >------<---\\/--->------<");
                    printf("\n\n\t                -= Pressione qualquer tecla =-");
                    getch();
                    
                }
            }
            interagir = 1;

        }else if(coord == '@'){//Chave

            if(interagir == 2){

                system("cls");
                printf("\n\n\t            >------<---/\\--->------<");
                printf("\n\n\t-= Você encontrou a chave! Uma porta se abriu! =-");
                printf("\n\n\t            >------<---\\/--->------<");
                printf("\n\n\t         -= Pressione qualquer tecla =-");
                getch();
                //Chave
                linha[2][6] = ' ';
                //Porta
                linha[6][5] = '=';
                porta = 1;
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
                printf("  \n\t                   TUTORIAL COMPLETO!!");
                printf("\n\n\t                >------<---\\/--->------<");
                printf("\n\n\t             -= Pressione qualquer tecla =-");
                getch();
                jogando = 0;
                //Colocar a função do nível 1 aqui!
                nivel1();

            }
            interagir = 1;

        }else interagir = 0;
        
        //Gera jogador
        linha[pos[1]][pos[0]] = '&';
        //Jogador é gerado depois dos outros objetos para que "&" tenha prioridade sobre os outros elementos, como "P" ou "@"
    }
}

void menu(){

    int opcao = 1, continuar = 0, escolhendo;
    char opc1 = '<',opc2 = ' ',opc3 = ' ';
    char tecla;
    char sair;

    while(continuar == 0){

        system("color 1f");
        system("cls");
        printf("\n\t----------------------------------------\n\t\tSelecione uma opção!\n\n\t- Jogar -    %c\n\n\t- Créditos - %c\n\n\t- Sair -     %c\n\t----------------------------------------\n\tw -> Subir\n\t\t\t\ti -> Interagir\n\ts -> Descer\n",opc1,opc2,opc3);

        escolhendo = 1;
        tecla = getch();
        while(escolhendo == 1){
            switch (tecla){
                //movimento
                case 'w':
                    if(opcao == 1){
                        opc1 = ' ';
                        opc3 = '<';
                        opcao = 3;
                    }else if(opcao == 2){
                        opc2 = ' ';
                        opc1 = '<';
                        opcao = 1;
                    }else{
                        opc3 = ' ';
                        opc2 = '<';
                        opcao = 2;
                    }
                    escolhendo = 0;
                break;

                case 's':
                    if(opcao == 1){
                        opc1 = ' ';
                        opc2 = '<';
                        opcao = 2;
                    }else if(opcao == 2){
                        opc2 = ' ';
                        opc3 = '<';
                        opcao = 3;
                    }else{
                        opc3 = ' ';
                        opc1 = '<';
                        opcao = 1;
                    }
                    escolhendo = 0;
                break;

                //interagir
                case 'i':
                    if(opcao == 1){
                        system("cls");

                        char comecar;
                        printf("\n\t                                               /\\\n\t /____________________/_/___________________/_/  \\_\\__________________\\_\\_____________________\\\n\t \\                    \\ \\                   \\ \\  / /                  / /                     /\n\t                                               \\/");
                        printf("\n\n\t\tHá muitos séculos, houve uma guerra sangrenta que quase aniquilou as Gousmas, raça\n\t   dominante das Terras Míticas. Com o seu fim, uma doença calamitosa se espalhou e ameaçou\n\t   dizimar o restante das Gousmas que restaram. Com os esforços dos grandes magos, foi\n\t   criada uma poção mágica que poderia curar qualquer sintoma. Logo, as Gousmas se recuperaram\n\t   e continuaram a prosperar, enqunto os magos, certos de que a poção poderia levar a raça\n\t   à guerra novamente, a esconderam em uma masmorra já quase esquecida dentro das florestas\n\t   nevoadas.\n\n\t\tMuito tempo depois, a doença, que já era inexistente há eras, voltou a assombrar as\n\t   Gousmas e, em um ato valente, uma Gousma corajosa decidiu partir em busca da poção\n\t   milagrosa, que poderia salvar a sua espécie novamente...");
                        printf("\n\n\t\t    w\n\t\t    ^\n\t\ta < & > d\t\t\t\t   > Pressione (i) para Interagir <\n\t\t    v\n\t\t    s\t\t\t\t\t-= Esta mensagem aparecerá no canto =-\n\t     -= Movimento =-\t\t\t    -= inferior quando puder interagir com algo =-\n\n\n\n\t\t\t\t  > Pressione qualquer tecla para continuar <\n\n");
                        printf("\t                                               /\\\n\t /____________________/_/___________________/_/  \\_\\__________________\\_\\_____________________\\\n\t \\                    \\ \\                   \\ \\  / /                  / /                     /\n\t                                               \\/\n");
                        comecar = getch();
                        vila();
                    }else if(opcao == 2){
                        system("cls");
                        printf("\n\t<>-------------------------------->-<--------------------------------<>\n\n\t         @@@@   @@   @@ @@   @@  @@@@@  @@@@@@  @@@@   @@   @           \n\t        @@  @@  @   @@  @@@  @  @@   @@ @@     @@   @@ @@@  @@          \n\t       @@   @@ @@   @@ @@ @  @  @@      @@@@@@ @@   @@  @ @@ @@         \n\t       @@   @@ @@   @@ @@ @@ @  @@ @@@@ @@     @@    @@ @@ @@@@         \n\t      @@   @@  @   @@  @@  @@@  @@   @@  @      @@   @@ @@   @@@        \n\t      @@@@@    @@@@@   @@   @@   @@@@@@  @@@@@@  @@@@@   @@   @@        \n                                                                        \n\t     @@@@@@  @@@@@@@     @@    @@  @@@  @@ @@@     @@@@@@@ @@@@@@       \n\t    @@   @@  @@   @@    @@@@   @@  @@@  @@  @@     @@      @@   @@@     \n\t   @@    @@ @@@   @@    @ @@   @@  @@@  @@  @@      @@      @@   @@     \n\t  @@        @@   @@    @@ @@   @@  @ @@ @@  @@      @@@@@@  @@   @@@    \n\t  @@        @@@@@@    @@   @@   @@@@ @@ @@  @@      @@       @@@@@@     \n\t @@    @@@ @@   @@   @@@@@@@@   @@@@  @@@   @@@      @@      @@   @@    \n\t @@    @@  @@   @@   @@    @@   @@@   @@@    @@      @@       @@   @@   \n\t @@@@@@@  @@@   @@@ @@     @@@  @@@   @@@    @@@@@@@ @@@@@@@@ @@@   @@\n\n\t<>-------------------------------->-<--------------------------------<>");
                        printf("\n\n\t\t\t\t      Criado por:\n\n\tMatheus Talarico - Design / Terceiro Nível\n\n\tRobson Rodrigues - ");
                        printf("\n\n\t\t\t   -= Pressione qualquer tecla... =-\n\n\n");
                        getch();
                    }else{
                        system("cls");
                        printf("\n\t------------------------------------------\n\tVocê tem certeza de que quer sair do jogo?\n\t------------------------------------------\n\ti -> Confirmar\n\n\tQualquer outra tecla -> Voltar");
                        sair = getch();
                        if(sair == 'i'){
                            system("exit");
                            continuar = 1;
                        }
                    }
                    escolhendo = 0;
                break;

                //tecla inválida
                default:
                    tecla = getch();
                break;

            }
        }
    }
}

int main(){

    setlocale(LC_ALL, "");

    system("color 1f");
    printf("\n\t                                                 /\\\n\t /_____________________/_/____________________/_/  \\_\\___________________\\_\\______________________\\\n\t \\                     \\ \\                    \\ \\  / /                   / /                      /\n\t                                                 \\/");
    printf("\n\n\t             @@@@@@@   @@@    @@  @@@    @@@    @@@@@   @@@@@@@@@   @@@@@    @@@    @@               \n\t            @@@@@@@@@  @@@   @@@  @@@@   @@@  @@@@@@@@@ @@@@@@@@@ @@@@@@@@@  @@@@   @@@              \n\t           @@@   @@@ @@@@   @@@ @@@@@@  @@@ @@@@   @@@  @@@      @@@    @@@ @@@@@@ @@@@             \n\t          @@@    @@@ @@@    @@@ @@@@@@@ @@@ @@@         @@@@@@@  @@@    @@@@ @@@@@@ @@@             \n\t         @@@@   @@@@@@@@   @@@@ @@@ @@@@@@@ @@@  @@@@@  @@@@@@@@ @@@     @@@ @@@@@@@@@@@            \n\t        @@@@   @@@@ @@@@   @@@@ @@@  @@@@@  @@@    @@@@ @@@      @@@@    @@@@@@@@  @@@@@@           \n\t        @@@@  @@@@  @@@@  @@@@ @@@@  @@@@@  @@@@   @@@@ @@@@      @@@@   @@@  @@@   @@@@@           \n\t        @@@@@@@@@   @@@@@@@@@  @@@@   @@@@   @@@@@@@@@@ @@@@@@@@@  @@@@@@@@@   @@@   @@@@@          \n\t        @@@@@@        @@@@@    @@@     @@@     @@@@@@   @@@@@@@@@    @@@@@     @@@     @@@          \n\n\t       @@@@@@@@   @@@@@@@@@@      @@@@    @@@@   @@@@  @@@@ @@@@      @@@@@@@@@@@@@@@@@@@@@         \n\t     @@@@@@@@@@@  @@@@@@@@@@     @@@@@@    @@@  @@@@@  @@@@ @@@@       @@@@@@@@@@ @@@@@@@@@@@       \n\t    @@@@    @@@@ @@@@    @@@     @@@@@@    @@@  @@@@@  @@@@ @@@@       @@@@       @@@@    @@@@      \n\t   @@@@     @@@@ @@@@   @@@@    @@@ @@@    @@@  @@@@@@ @@@@  @@@        @@@        @@@@   @@@@      \n\t  @@@@          @@@@   @@@@@   @@@@ @@@@   @@@@ @@@@@@ @@@@  @@@        @@@@@@@@@  @@@@   @@@@@     \n\t  @@@@          @@@@@@@@@@@   @@@@@ @@@@    @@@@@@@@@@@@@@   @@@@       @@@@@@@@@@ @@@@@@@@@@@      \n\t @@@@@         @@@@@@@@@@     @@@@@@@@@@    @@@@@@ @@@@@@@   @@@@       @@@@        @@@@@@@@@@      \n\t @@@@     @@@@ @@@@  @@@@    @@@@@@@@@@@@   @@@@@@  @@@@@@   @@@@        @@@@       @@@@@ @@@@@     \n\t @@@@    @@@@  @@@@   @@@@   @@@@@@@@@@@@   @@@@@@  @@@@@@   @@@@        @@@@        @@@@   @@@@    \n\t @@@@@@@@@@@@  @@@    @@@@  @@@@     @@@@@  @@@@@@  @@@@@@   @@@@@@@@@@@ @@@@@@@@@@@ @@@@    @@@@   \n\t @@@@@@@@@@   @@@@    @@@@@@@@@@     @@@@@  @@@@@    @@@@     @@@@@@@@@@@@@@@@@@@@@@@ @@@@    @@@@  \n\t   @@@@@@     @@@@     @@@@@@@@       @@@@   @@@@    @@@@     @@@@@@@@@@@ @@@@@@@@@@@ @@@@     @@@@");
    printf("\n\n\t                                                 /\\\n\t /_____________________/_/____________________/_/  \\_\\___________________\\_\\______________________\\\n\t \\                     \\ \\                    \\ \\  / /                   / /                      /\n\t                                                 \\/");
    printf("\n\n\t\t\t\t\t   -= Pressione qualquer tecla =-");
    getch();
    menu();

    return 0;

}