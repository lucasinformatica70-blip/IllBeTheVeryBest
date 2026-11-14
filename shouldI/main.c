#include <stdio.h>

char answer;

void suffering() {
    printf("Do you wanna do web development?: ");
    scanf(" %c", &answer);

    if(answer == 'y') {
        printf("JavaScript (which is C but bad and annoying)");
    } else if(answer == 'n') {
        printf("Java");
    } else {
        printf("bad value");
    } 
}

void slowfinal() {
    printf("Are you a fucking dumbass who hates coding?: ");
    scanf(" %c", &answer);

    if (answer == 'y') {
        printf("Python.");
    } else if(answer == 'n') {
        printf("Java.");
    } else {
        printf("bad value");
    }
}

void fastfinal() {
    printf("Do you have memory issues?: ");
    scanf(" %c", &answer);

    if (answer == 'y') {
        printf("Rust.");
    } else if(answer == 'n') {
        printf("C/C++.");
    } else {
        printf("bad value");
    }
}

void fastgoing() {
    printf("Are you a roblox player?: ");
    scanf(" %c", &answer);

    if (answer == 'y') {
        printf("Lua.");
    } else if(answer == 'n') {
        fastfinal();
    } else {
        printf("bad value");
    }
}

void scndquestion() {
    printf("Do you want your code to be fast?: ");
    scanf(" %c", &answer);

    if (answer == 'y') {
        fastgoing();
    } else if(answer == 'n') {
        slowfinal();
    } else {
        printf("bad value");
    }
}

int main() {
    printf("Do you like suffering? (y or n): ");
    scanf(" %c", &answer);

    if (answer == 'y') {
        suffering();
    } else if(answer == 'n') {
        scndquestion();
    } else {
        printf("bad value");
    }

    return 0;
}

//The code works! the simple flowchart code works! after 2 hours of coding! kill me!