#include "ft_putchar.h"

void imprimir_lateral(int cols, int lines, char* array)
{
    int i;

    i = 1;
    if (cols <= 0 || lines <= 0)
        return;
    ft_putchar(array[0]);
    if (cols == 1) {
        ft_putchar('\n');
        return;
    }
    while (i < cols - 1) {
        ft_putchar(array[1]);
        i++;
    }
    ft_putchar(array[0]);
    ft_putchar('\n');
}

void imprimir_linha_do_meio(int cols, int lines, char* array)
{
    int i;
    int k;

    i = 0;
    k = 0;
    if (lines <= 1 || cols <= 0)
        return;
    while (i < lines - 2) {
        ft_putchar(array[0]);
        while (k < cols - 2) {
            ft_putchar(array[1]);
            k++;
        }
        k = 0;
        if (cols > 1)
            ft_putchar(array[0]);
        ft_putchar('\n');
        i++;
    }
}

void rush(int x, int y)
{
    char top_array[2];
    char mid_array[2];
    char bot_array[2];

    top_array[0] = 'A';
    top_array[1] = 'B';

    mid_array[0] = 'B';
    mid_array[1] = ' ';

    bot_array[0] = 'C';
    bot_array[1] = 'B';

    imprimir_lateral(x, y, top_array);
    imprimir_linha_do_meio(x, y, mid_array);
    if (y >= 2)
        imprimir_lateral(x, y, bot_array);
}
