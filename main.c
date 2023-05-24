// Simple Key Detector
// Written by:
//// Rafael Espinosa

#include <stdio.h> // For standard input / output functions and stuff
#include <conio.h> // to use getch() function

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

        if(userChar == 3){
            printf("You entered the character %c\n",userChar);
            printf("Char code: %i\n\n",userChar);
            printf("This caracter is used to abort execution, BYE!\n\n");
            return 0;
        }else{
            printf("You entered the character %c\n",userChar);
            printf("Char code: %i\n\n",userChar);
        }
    }
    return 0;
}
