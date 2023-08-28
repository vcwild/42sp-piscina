#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int a;
    int b;
    int div;
    int mod;

    a = 42;
    b = 5;
    ft_div_mod(a, b, &div, &mod);
    // quando somamos o resultado de uma operação matemática com o caractere '0'
    // o resultado é o caractere que representa o número na tabela ASCII
    div += '0'; // converte o int para char
    mod += '0'; // converte o int para char
    write(1, "div: ", 5); // 42 / 5 = 8
    write(1, &div, 1);
    write(1, "\nmod: ", 6); // 42 % 5 = 2
    write(1, &mod, 1);
    return (0);
}
