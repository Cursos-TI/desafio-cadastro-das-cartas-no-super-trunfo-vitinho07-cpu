#include <stdio.h>

int main()
{
    char estado[50];
    char codigoCarta[50];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int turistas;

    //Cidade A 
    printf("\n*** Cidade A *** \n"); 

    printf("\nDigite o Estado da sua Cidade : "); // Aqui vai ser escrito o  da cidade!
    scanf("%s", &estado);

    printf("\nDigite o codigo da Carta: "); // Aqui vai ser escrito o codigo da carta/
    scanf("%s", &codigoCarta);

    printf("\nDigite o Nome da Cidade: "); // Aqui vai ser escrito o Nome da Cidade que vai ser representada!
    scanf("%s", &nomeCidade);

    printf("\nDigite o numero da População : "); // Aqui vai ser escrito o numero da População
    scanf("%d", &populacao);

    printf("\nDigite a areá da Cidade : "); //Aqui vai ser escrito a aréa da cidade!
    scanf("%f", &area);

    printf("\ndigite o pib da Cidade: "); // Aqui vai ser escrito o PIB da cidade!
    scanf("%f", &pib);

    printf("\nDigite o numero de Turistas : "); // Aqui vai ser escrito o numero de turistas da cidade!
    scanf("%d", &turistas);

   
     printf("\nInformações da Cidade 'A' \n\n Estado: %s \n Codigo da Carta : %s \n Nome da Cidade: %s \n Numero da População : %d \n Aréa da Cidade : %f Km²\n PIB da Cidade : %f Reais \n Numéro de Turistas : %d \n", estado, codigoCarta, nomeCidade, populacao, area, pib, turistas); // Aqui vai apresentar todas as informações descritas!
  
    // Cidade B

    printf ("\n*** Cidade B *** \n");
  
    printf("\nDigite o Estado da cidade:"); // Aqui vai ser escrito o  da cidade!
    scanf("%s",&estado);

    printf("\nDigite o Codigo da Carta:");  // Aqui vai ser escrito o codigo da carta/
    scanf("%s", &codigoCarta);

    printf("\nDigite o Nome da Cidade:"); // Aqui vai ser escrito o Nome da Cidade que vai ser representada!
    scanf("%s", &nomeCidade);

    printf("\nDigite o numero da População:");// Aqui vai ser escrito o numero da População
    scanf("%d", &populacao);

    printf("\nDigite a aréa da Cidade:");//Aqui vai ser escrito a aréa da cidade!
    scanf("%f", &area);

    printf("\nDigite o PIB da Cidade:"); // Aqui vai ser escrito o PIB da cidade!
    scanf("%f", &pib);

    printf("\nDigite o número de Turistas:");// Aqui vai ser escrito o numero de turistas da cidade!
    scanf("%d", &turistas);
 


    printf("\nInformações da Cidade 'B' \n Estado: %s \n Codigo da Carta : %s \n Nome da Cidade: %s \n Numero da Popução : %d \n Aréa da Cidade : %f Km²\n PIB da Cidade : %f Reais \n Numéro de Turistas : %d \n", estado, codigoCarta, nomeCidade, populacao, area, pib, turistas);// Aqui vai apresentar todas as informações descritas!

}