#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0; // inicializa iterador com 0
    // incrementa i enquanto o caractere atual for diferente de '\0'
    while (str[i] != '\0')
    {
        i++; // incrementa i
    }
    // retorna o tamanho da string
    return (i);
}

void ft_putstr(char *str)
{
    int len; // tamanho da string

    len = ft_strlen(str); // calcula o tamanho da string
    write(1, str, len); // escreve a string no terminal com o tamanho len
}
