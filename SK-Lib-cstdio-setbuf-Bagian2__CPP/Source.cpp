#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    char str[] = "Buffered Stream";
    char buffer[BUFSIZ];

    FILE* fp;
    fp = fopen("test.txt", "wb");

    setbuf(fp, buffer);
    fwrite(str, sizeof(str), 1, fp);

    fflush(fp);
    fclose(fp);

    cout << buffer;

    _getch();
    return 0;
}