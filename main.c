  int main()
{
    //strcmp(strq1, strq2)==0
    //Pedra,Papel ou Tesoura
    char player1[256];
    char player2[256];

    printf("Player 1, Sua vez...");
    scanf("%s",&player1);

    printf("\nPlayer 2, sua vez...");
    scanf("%s",&player2);

    printf("\naguarde, estamos calculando o resultado...\n");
    if(strcmp(player1,"papel") == 0){

            if(strcmp(player2,"papel") == 0){
                printf("Empate!");
            }else if(strcmp(player2,"tesoura") == 0){
                printf("Payer 2 ganhou, por tesoura corta o papel!");
            }else if(strcmp(player2,"pedra") == 0){
                printf("Player 2 perdeu, por que papel embrulha pedra!");

            }else{
                printf("O Player 2 jogou uma informação invalida");
            }


    }else if(strcmp(player1,"tesoura") == 0){
        if(strcmp(player2,"papel") == 0){
            printf("Player 2 perdeu!!, tesoura corta papel");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("Empate!");
        }else if(strcmp(player2,"pedra") == 0){
            printf("Player 2 ganhou!!, pedra quebra tesoura");
        }else{
            printf("O Player 2 jogou uma informação invalida");
        }

    }else if(strcmp(player1,"pedra") == 0){
        if(strcmp(player2,"papel") == 0){
            printf("Player 2 ganhou!!, papel embrulha pedra");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("Player 2 perdeu!!, pedra quebra tesoura");
        }else if(strcmp(player2,"pedra") == 0){
            printf("Empate!!");
        }else{
            printf("O Player 2 jogou um informação errada");
        }

    }else
    {
        printf("Voce jogou uma iformacao invalida!");
    }



}
