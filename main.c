// Simple Key Detector
// Written by:
//// Rafael Espinosa

#include <stdio.h> // For standard input / output functions and stuff
#include <conio.h> // to use getch() function
#include <ctype.h> // to use the type functions

void printCharTypes(char);

int main(int argc, char const *argv[]){
    // Variables
    char userChar = ' '; // Initialized with a blank space
    
    // Main Loop
    while(1){
        // ask for user input
        printf("Insert a char!!!\n...\n");
        userChar = getch();

        // show info about the user input
        //// like the char, ascii number, etc

        printf("You entered the character %c\n",userChar);
        printf("Char code: %i\n\n",userChar);
        printCharTypes(userChar);
        if(userChar == 3){
            printf("This caracter is used to abort execution, BYE!\n\n");
            return 0;
        }
    }
    return 0;
}

void printCharTypes(char x){
    if(isalnum(x)){
        puts("\tIt is an alpha-numeric character");
    }
    if(isalpha(x)){
        puts("\tIt is an alpha character");
    }
    if(isascii(x)){
        puts("\tIt is an ascii character (value of char between 0 and 127)");
    }
    if(iscntrl(x)){
        puts("\tIt is a control character");
    }
    if(isdigit(x)){
        puts("\tIt is a digit character");
    }
    if(isgraph(x)){
        puts("\tIt is a graphic character");
    }
    if(islower(x)){
        puts("\tIt is a lower-case character");
    }
    if(isupper(x)){
        puts("\tIt is a upper-case character");
    }
    if(isprint(x)){
        puts("\tIt is a printable character");
    }
    if(ispunct(x)){
        puts("\tIt is a punctuation caracter");
    }
    if(isspace(x)){
        puts("\tIt is a space");
    }
    if(isxdigit(x)){
        puts("\tIt is an Hex digit");
    }
    puts("\n");
}