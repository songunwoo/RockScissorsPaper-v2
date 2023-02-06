#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void line() {
    puts("==================================");
}

int main() {
    char nname[50];
    char c;
    int i;
    int t = 5;
    int h;
    int game = 0, hw = 0, draw = 0, hl = 0;
    //var

    system("cls");

    printf("Please, enter your nickname\n");
    printf("=> ");
    scanf("%s", nname);
    //set nickname

    system("cls");

    while(1) {
    printf("%s, you can play 3 games with AI.\n", nname);
    printf("Continue this game?(y/n) ");
    scanf(" %c", &c);

    if (c == 'y' || c == 'Y') {
        system("cls");
        break;
    }
    if(c == 'n' || c == 'N') {
        exit(0);
    }
    else if(c != 'y' && c != 'Y' && c != 'n' && c != 'N') {
        system("cls");
        printf("Please enter again...\n\n");
    }
    }
    //continue or exit

    printf("The game will start in five seconds.");
    while(1) {
        Sleep(1000);
        t--;

        if(t == 0) {
            system("cls");
            break;
        }
    }
    
    while(1) {
    
    if(game == 3) {
        system("cls");
        break;
    }

    i = 2;


    printf("%s, your turn!\n", nname);
    printf("Rock(1), Scissors(2), Paper(3) (Please enter a number)\n");
    printf("=> ");
    scanf("%d", &h);
    printf("\n\n");
    //player enter a number

    //determine the range of random numbers
    printf("It's AI turn!\n");
    printf("Rock(1), Scissors(2), Paper(3) (Please enter a number)\n");
    srand(time(NULL));
    int a = rand() % 3 + 1;
    printf("=> %d", a);
    //AI choose a number

    if(h == 1 && a == 2 || h == 2 && a == 3 || h == 3 && a == 1) {
        game++;
        hw++;
        printf("\n\n%s, you win!!!", nname);
        while(1) {
            Sleep(1000);
        i--;

            if(i == 0) {
                system("cls");
                break;
            }
        }
    }
    else if(h == 2 && a == 1 || h == 3 && a == 2 || h == 1 && a == 3) {
        game++;
        hl++;
        printf("\n\n%s, you lose...", nname);
        while(1) {
            Sleep(1000);
            i--;

            if(i == 0) {
                system("cls");
                break;
            }
        }
    }
    else if(h == a) {
        game++;
        draw++;
        printf("\n\nDraw...");
        while(1) {
            Sleep(1000);
            i--;

            if(i == 0) {
                system("cls");
                break;
            }
        }
    }
    //a victory or defeat decision
    }
    printf("\n\n              Result\n");
    line();
    printf("Game: %d, Win: %d, Draw: %d, Lose: %d\n", game, hw, draw, hl);
    line();
    printf("\n\n");
    //final result

    return 0;
}