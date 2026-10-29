
/*
 *  tty-dcg
 */

#include <ncurses.h>

int main () {
    
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    printw("Hello, world!");
    refresh();
    getch();

    endwin();
    return 0;
}
