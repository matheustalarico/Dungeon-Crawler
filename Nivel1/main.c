#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <time.h>

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
        int escolhendo;
        int tecla_invalida = 0;
        char linha[10][11], acao;
        int i;

        //posicao inicial
        pos[0] = 6;//x
        pos[1] = 6;//y


        strcpy(linha[0], "          ");
        strcpy(linha[1], " *** ** * ");
        strcpy(linha[2], "**    * * ");
        strcpy(linha[3], "@* **** * ");
        strcpy(linha[4], " * *    * ");
        strcpy(linha[5], " * * & ** ");
        strcpy(linha[6], " * *   ** ");
        strcpy(linha[7], "   ****** ");
        strcpy(linha[8], "****    * ");
        strcpy(linha[9], "D    **   ");

        while(jogando == 1){

            //Layout do Nível
            system("cls");
            printf("\n\t          >------<---/\\--->------<\n");
            printf("\n\t\t\t************");
            for(i = 9; i >= 0; i--){
                printf("\n\t\t\t*%s*",linha[i]);
            }
            printf("\n\t\t\t************");
            printf("\n\n\t          >------<---\\/--->------<\n");
            //Vida
            printf("\n\t\t    Vidas Restantes: %i",vida);
            //Caso possa interagir
            if(interagir == 1) printf("\n\n\t     > Pressione (i) para Interagir <");
            //detecta a acao
            escolhendo = 1;
            acao = getch();

            while(escolhendo == 1){

                //Apaga o caractere do jogador, será mudado depois de qualquer jeito
                linha[pos[1] - 1][pos[0] - 1] = ' ';
                escolhendo = 0;
                tecla_invalida = 0;

                switch (acao){

                    //movimento
                    case 'w':
                        pos[1]++;
                        if(linha[pos[1] - 1][pos[0] - 1] == '*' || pos[0] > 10 || pos[0] < 1 || pos[1] > 10 || pos[1] < 1){
                            pos[1]--;
                            tecla_invalida = 1;
                        }
                    break;
                    case 's':
                        pos[1]--;
                        if(linha[pos[1] - 1][pos[0] - 1] == '*' || pos[0] > 10 || pos[0] < 1 || pos[1] > 10 || pos[1] < 1){
                            pos[1]++;
                            tecla_invalida = 1;
                        }
                    break;
                    case 'a':
                        pos[0]--;
                        if(linha[pos[1] - 1][pos[0] - 1] == '*' || pos[0] > 10 || pos[0] < 1 || pos[1] > 10 || pos[1] < 1){
                            pos[0]++;
                            tecla_invalida = 1;
                        }
                    break;
                    case 'd':
                        pos[0]++;
                        if(linha[pos[1] - 1][pos[0] - 1] == '*' || pos[0] > 10 || pos[0] < 1 || pos[1] > 10 || pos[1] < 1){
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
                linha[3][0] = ' ';
                //Porta
                linha[9][0] = '=';
            }else{//fechado
                //Chave
                linha[3][0] = '@';
                //Porta
                linha[9][0] = 'D';
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
                    linha[3][0] = ' ';
                    //Porta
                    linha[9][0] = '=';
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
                    terminar = 1;
                    //Colocar a função do nível 1 aqui!

                }
                interagir = 1;

            }else interagir = 0;
            
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
    nivel1();

    return 0;

}
