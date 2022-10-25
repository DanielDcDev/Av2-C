#include<stdio.h>
#include<stdlib.h>

void CadCliente(){
    //Criação de variaveis do cadastro
    char nome[25];   //Variavel vai ser enviada para o banco de dados
    char sNome[30];  //Variavel vai ser enviada para o banco de dados
    int dataNasc=0;  //Variavel vai ser enviada para o banco de dados
    int CPF=0;       //Variavel vai ser enviada para o banco de dados
    int numSUS=0;    //Variavel vai ser enviada para o banco de dados
    int id=0;        //Variavel vai ser enviada para o banco de dados
    
    //recepção de dados
    //falta a estilização 
    printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||                        Bom dia                    ||\n");
	printf("||                  Digite o seu nome:               ||\n||                  ");
        scanf("%c", &nome);
    printf("||\n||             Data de nascimento:           ||\n||                  ");
        scanf("%d", &dataNasc);
    printf("||\n||                  CPF:                     ||\n||                  ");
        scanf("%d", &CPF);
    printf("||\n||               Numero do SUS               ||\n");
        scanf("%d", &numSUS);
    printf("|||||||||||||||||||||||||||||||||||||||||||||||\n");
    
    //verificação
    if(CPF==1){
	/*Aqui sera colocado um metodo criado uma query de controle para o banco de dados que ira verificar todos os cpf�s dos usuarios*/
            printf("\n\nUsuario já cadastrado, favor tentar cadastrar novamente\n\n");
        }else{
            printf("\n\nUsuario cadastrado com sucesso!\n\n");
        }
    id ++;//variavel sera adicionada como chave primaria no banco de dados.
}

void menu(){
	int opc=0;
    printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||                   MENU MEU SUS                    ||\n");
    printf("||                  Seja bem vindo                   ||\n");
    printf("|| Boa noite Sr:                                     ||\n");
    printf("|| Deseja fazer o que?                               ||\n");
    printf("|| Opcoes de atendimento:                            ||\n");
    printf("||                                                   ||\n");
    printf("|| 1 - Cadastro.                                     ||\n");
    printf("|| 2 - Login.                                        ||\n");
    printf("|| 3 - Cadastro de medico.                           ||\n");
    printf("||                                                   ||\n");
    printf("                  Sua opcao sera: ");
    scanf("%d",&opc);
    printf("||                                                   ||\n");
    printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    

}

int main()
{
    menu();
    //CadCliente();

}
