#include <stdio.h>

int main() {
    //Aqui é onde sera informado os dados da primeira carta
    
    char estadoUm[50];
    char codigoUm[50];
    char nomeCidadeUm[50];
    unsigned long int habitantesUm;
    float areaUm;
    float PIBUm;
    int pontosTuristicosUm;
    

    //Aqui é onde sera informado os dados da segunda carta
    
    char estadoDois[50];
    char codigoDois[50];
    char nomeCidadeDois[50];
    unsigned long int habitantesDois;
    float areaDois;
    float PIBDois;
    int pontosTuristicosDois;
    


    //entrada e saida da primeira carta
    printf("Digite uma letra de A até H para representar um de oitos estados: \n");
    scanf("%s", estadoUm);

    printf("Digite um Código para a carta, sendo de 01 a 04 e de A até Z: \n");
    scanf("%s", codigoUm);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidadeUm);

    printf("Digite o Número de habitantes da cidade: \n");
    scanf("%lu", &habitantesUm);

    printf("Digite a Área em KM² da sua cidade: \n");
    scanf("%f", &areaUm);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &PIBUm);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicosUm);
    printf("Vamos iniciar a proxima carta \n\n");

    //Aqui começa a segunda carta
    printf("Digite uma letra de A até H para representar um de oitos estados: \n");
    scanf("%s", estadoDois);

    printf("Digite um Código para a carta, sendo de 01 a 04 e de A até Z: \n");
    scanf("%s", codigoDois);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidadeDois);

    printf("Digite o Número de habitantes da cidade: \n");
    scanf("%lu", &habitantesDois);

    printf("Digite a Área em KM² da sua cidade: \n");
    scanf("%f", &areaDois);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &PIBDois);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicosDois);
    printf("\n");
    //aqui sera mostrado as informações das duas cartas


    //PRIMEIRA CARTA
    float densidadePopulacionalUm = habitantesUm / areaUm;
    float PIBpercapitaUm = PIBUm / habitantesUm;
    printf("Carta 1: \n");
    printf("Estado:%s \n", estadoUm);
    printf("Código:%s \n", codigoUm);
    printf("Nome da Cidade:%s \n", nomeCidadeUm);
    printf("População:%lu \n", habitantesUm);
    printf("Área:%.2f KM² \n", areaUm);
    printf("Número de pontos Turísticos: %d \n\n", pontosTuristicosUm);
    printf("PIB: %.2f Bilhões de reais\n", PIBUm);
    printf("Densidade populacional: %.2f \n", densidadePopulacionalUm);
    printf("PIB per capita: %.2f Reais\n", PIBpercapitaUm);

    
    printf("\n");

    //SEGUNDA CARTA
    float densidadePopulacionalDois = habitantesDois / areaDois;
    float PIBpercapitaDois = PIBDois / habitantesDois;
    printf("Carta 2: \n");
    printf("Estado:%s \n", estadoDois);
    printf("Código:%s \n", codigoDois);
    printf("Nome da Cidade:%s \n", nomeCidadeDois);
    printf("População:%lu \n", habitantesDois);
    printf("Área:%.2f KM² \n", areaDois);
    printf("PIB: %.2f Bilhoes de reais\n", PIBDois);
    printf("Número de pontos Turísticos: %d \n", pontosTuristicosDois);
    printf("Densidade populacional: %.2f \n", densidadePopulacionalDois);
    printf("PIB per capita: %.2f Reais\n", PIBpercapitaDois);

    float superPoderUm = habitantesUm + areaUm + PIBUm + pontosTuristicosUm + PIBpercapitaUm + densidadePopulacionalUm;
    float superPoderDois = habitantesDois + areaDois + PIBDois + pontosTuristicosDois + PIBpercapitaDois + densidadePopulacionalDois;

    printf("O Poder da carta 1 é: %.2f\n", superPoderUm);
    printf("O Poder da carta 2 é: %.2f\n", superPoderDois);
    printf("\n");



    /*printf("COMPARAÇÃO DE CARTAS\n");
    printf("População: Venceu (%d) \n", habitantesUm > habitantesDois );
    printf("Área: Venceu(%d) \n", areaUm > areaDois);
    printf("PIB: venceu(%d) \n", PIBUm > PIBDois);
    printf("Pontos Turisticos: venceu(%d) \n", pontosTuristicosUm > pontosTuristicosDois);
    printf("Densidade Populacional: venceu(%d) \n", densidadePopulacionalUm > densidadePopulacionalDois);
    printf("PIB per capita: venceu(%d) \n", PIBpercapitaUm > PIBpercapitaDois);
    printf("Super poder: venceu(%d) \n", superPoderUm > superPoderDois);*/

    if (habitantesUm > habitantesDois) {
        printf("COMPARAÇÃO DAS CARTAS(ATRIBUTO POPULAÇÃO)\n");
        printf("Carta 1 - %s: %lu\n", nomeCidadeUm, habitantesUm);
        printf("Carta 2 - %s: %lu \n", nomeCidadeDois, habitantesDois);
        printf("Resultado: Carta 1(%s) Venceu!!!", nomeCidadeUm);
    } else {
        printf("COMPARAÇÃO DAS CARTAS(ATRIBUTO POPULAÇÃO)\n");
        printf("Carta 1 - %s: %lu\n", nomeCidadeUm, habitantesUm);
        printf("Carta 2 - %s: %lu\n", nomeCidadeDois, habitantesDois);
        printf("Resultado: Carta 2(%s) Venceu!!", nomeCidadeDois);
        
    }





    return 0;

}   

