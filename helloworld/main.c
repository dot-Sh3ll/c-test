#include <stdio.h>
#include <stdlib.h>

void decoupe(int *h, int *m);

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    decoupe(&heures, &minutes);
    printf("%d heures, et %d minutes\n", heures, minutes);

    return 0;
}

void decoupe(int *h, int *m)
{
    *h = *m / 60;
    *m %= 60;
}
