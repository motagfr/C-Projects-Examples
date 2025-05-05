#include <stdio.h>
#include <windows.h>

struct tm {
    int hours;
    int minutes;
    int seconds;
};

void gotoxy(int x, int y) {
    COORD pos;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (INVALID_HANDLE_VALUE != hConsole) {
        pos.X = x;
        pos.Y = y;
        SetConsoleCursorPosition(hConsole, pos);
    }
}

void display(struct tm *t) {
    gotoxy(70, 2);
    printf("\n%02d:%02d:%02d", t->hours, t->minutes, t->seconds);
}

void delayt() {
    long int t;
    for (t = 1; t < 20000000; t++);
}

void update(struct tm *t) {
    t->seconds++;
    if (t->seconds == 60) {
        t->seconds = 0;
        t->minutes++;
    }
    if (t->minutes == 60) {
        t->minutes = 0;
        t->hours++;
    }
    if (t->hours == 24) {
        t->hours = 0;
    }
    delayt();
}

int main() {
    struct tm time = {0};
    system("cls");
    for (;;) {
        update(&time);
        display(&time);
    }
    return 0;
}