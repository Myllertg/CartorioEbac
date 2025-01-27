#include <stdio.h> // Biblioteca de Comunicação com o Usuário
#include <stdlib.h> // Biblioteca de Alocação de Espaço de Memória
#include <locale.h> // Biblioteca de Alocação  de texto por região
#include <string.h> // Biblioteca de responsavel por cuidar das strings


int registro()
{
    char arquivo[40];
    char cpf [40];
    char nome [40];
    char sobrenome [40];
    char cargo [40];
    
    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);
    strcpy(arquivo, cpf); //Resposável por Copiar os Valores da Strings
    
    FILE *file; // Criar arquivo
    file = fopen(arquivo, "w"); // Criar arquivo
    fprintf(file, cpf); // Salvar o valor da variavel
    fclose(file); //fechar arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);
    
    file=fopen(arquivo, "a");
    fprintf(file, nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);
    
    file=fopen(arquivo, "a");
    fprintf(file, sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);
    
    file=fopen(arquivo, "a");
    fprintf(file, cargo);
    fclose(file);
    
    system ("pause");
}


int consultar()
{
    setlocale (LC_ALL, "Portugue");
    char cpf [40];
    char conteudo [200];
    
    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen (cpf,"r");
    
    if (file == NULL)
    {
        printf("Não foi possivel abrir o arquivo, não localizado!.\n");
    }
    while (fgets(conteudo, 200, file)!= NULL)
    {
        printf("\n Essas são as informções do usuário: ");
        printf("%s", conteudo);
        printf("\n\n");
    }
    system ("pause");
}

int deletar()
{
    printf("Você escolheu deletar nomes!\n");
    system ("pause");
}


int main()
{
    int opcao=0; // Definição de Variavel
    int laco=1;
    

    for (laco=1; laco=1;){
      
        system ("cls");
        
        setlocale(LC_ALL, "Portuguese"); // Definição de linguagem
        
        printf("======= Cartório da EBAC =======\n\n");
        printf("Escolha a opção desejada do menu: \n\n");
        printf("\t1 - Registrar nomes\n");
        printf("\t2 - Consultar nomes\n");
        printf("\t3 - Deletar nomes\n");
        printf("Opção: ");// Fim do Menu
        
        scanf("%d", &opcao); // Armazenamento
        
        system ("cls");
        
        switch (opcao)
        {
            case 1:
                registro();
                break;
            case 2:
                consultar();
                break;
            case 3:
                deletar();
                break;
            default:
                printf("Opção não disponível!\n");
                system ("pause");
                break;
        }
    }
}



