#include <stdio.h>
#include <stdbool.h>

int main(){

    char pawnhpos = 'e';
    int pawnvpos = 2;

    printf("move e2 pawn to: ");
    scanf("%c%d", &pawnhpos, &pawnvpos);
    
    if(pawnhpos == 'e' && pawnvpos == 3 || pawnvpos == 4){
        printf("Legal move!");
    } 
    else {
        printf("tf you doin m8??");
    }
    
    return 0;
}