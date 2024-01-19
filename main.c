#include "sheet.h"
#include <ncurses.h>

int main(int argc, char **argv) {
    initscr(); //Initialize screen: clear screen and set up memory



    refresh(); //Refresh screen to match what is in memory

    getch(); //Wait for user input (keypress) and returns INT value of key


    endwin(); //Deallocate memory and end ncurses
    return 0;
}   