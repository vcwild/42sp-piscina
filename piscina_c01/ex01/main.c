#include <unistd.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
    // cria a variável var
    int var;

    // coloca 48 na variável var
    var = 48;
    // printa o valor de var na tela
    write(1, &var, 1); // exibe o conteúdo de var que é o char '0'
    // cria o ponteiro p
    int *p1;
    // captura o endereço de var
    p1 = &var;
    // cria ponteiro de ponteiro p2
    int **p2;
    // captura o endereço de p1
    p2 = &p1;
    // cria ponteiro de ponteiro de ponteiro p3
    int ***p3;
    // captura o endereço de p2
    p3 = &p2;
    // cria ponteiro de ponteiro de ponteiro de ponteiro p4
    int ****p4;
    // captura o endereço de p3
    p4 = &p3;
    // cria ponteiro de ponteiro de ponteiro de ponteiro de ponteiro p5
    int *****p5;
    // captura o endereço de p4
    p5 = &p4;
    // cria ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro p6
    int ******p6;
    // captura o endereço de p5
    p6 = &p5;
    // cria ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro p7
    int *******p7;
    // captura o endereço de p6
    p7 = &p6;
    // cria ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro p8
    int ********p8;
    // captura o endereço de p7
    p8 = &p7;
    // cria ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro p9
    int *********p9;
    // captura o endereço de p8
    p9 = &p8;
    // chama a função ft_ultimate_ft com o parâmetro `p9`
    ft_ultimate_ft(p9);
    // escreve o conteúdo de p9 (o endereço de var) na tela
    write(1, ********p9, 1); // exibe o conteúdo de var que é o char '*'
}
