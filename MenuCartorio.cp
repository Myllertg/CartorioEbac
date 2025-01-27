#include <stdio.h> // Biblioteca de Comunicação com o Usuário
#include <stdlib.h> // Biblioteca de Alocação de Espaço de Memória
#include <locale.h> // Bibliote de Alocação  de texto por região

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("======= Cartório da EBAC =======\n\n");
    printf("Escolha a opção desejada do menu: \n\n");
    printf("\t1 - Registrar nomes\n");
    printf("\t2 - Consultar nomes\n");
    printf("\t3 - Deletar nomes\n");
   
}
