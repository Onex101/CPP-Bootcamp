#include <ncurses.h>

const int HEIGHT = 20;
const int WIDTH = 50;
const int start_y = 10;
const int start_x = 10;

int main (){

    initscr();
    noecho();
    cbreak();

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    WINDOW *win = newwin(HEIGHT, WIDTH, (yMax/2)-start_y, start_x);
    box(win, 0, 0);
    refresh();
    wrefresh(win);

    getch();
    endwin();

    return 0;
}