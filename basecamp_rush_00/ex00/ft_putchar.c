#include <unistd.h>

/*
        Inserir o caracter c na saída padrão do terminal
*/
void ft_putchar(char c)
{
    write(1, &c, 1);
}
