#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int var_a;
    int var_b;
    int *ptr_a;
    int *ptr_b;

    var_a = 42;
    var_b = 10;
    ptr_a = &var_a;
    ptr_b = &var_b;
    write(1, "antes: \na: ", 11);
    write(1, ptr_a, 1); // exibe o conteúdo de ptr_a que é o char '*'
    write(1, "\nb: não exibível", 18); // exibe o conteúdo de var_b que é o char '0'
    write(1, ptr_b, 1);
    ft_ultimate_div_mod(ptr_a, ptr_b);
    *ptr_a = *ptr_a + '0'; // converte o int para char
    *ptr_b = *ptr_b + '0'; // converte o int para char
    write(1, "\ndepois:\n", 9);
    write(1, "a: ", 3);
    write(1, ptr_a, 1); // 42 / 10 = 4
    write(1, "\nb: ", 4);
    write(1, ptr_b, 1); // 42 % 10 = 2
}
