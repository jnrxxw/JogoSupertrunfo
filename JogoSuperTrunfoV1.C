#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    
    // carta 1
    
    char estado[3];
    char codigo [4] ;
    char nomedacidade [100] ;
    unsigned long int populacao ;
    float area ; 
    float pib ;
    int pontos ;
    float soma1;
    float densidade ;
    float percapita ;

    // carta 2 

    char estado2[3];
    char codigo2 [4] ;
    char nomedacidade2 [100] ;
    unsigned long int populacao2 ;
    float area2 ; 
    float pib2 ;
    int pontos2 ;
    float soma2;
    float densidade2 ;
    float percapita2 ;







    // informações da carta 1


    printf("\nDigite os Dados da Carta 1\n"); 


    printf ("Estado de (A a H) representando um dos oito estados : " ) ;
    scanf  ("%s" , estado ) ;
    

    printf ("digite o Código da carta , utilizando a letra do estado que você escolheu , em seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf ("%s" , codigo ) ;


    printf ("digite o nome da cidade: ");
    scanf ("%s" , nomedacidade ) ;

    
    printf ("digite o numero da População: ") ;
    scanf ("%lu" , &populacao);


    printf ("digite a Área da cidade em km²: ") ;
    scanf ("%f" , &area ) ;


    printf ("digite o PIB em bilhões de reais:") ;
    scanf ("%f" , &pib);


    printf ("digite o Número de Pontos Turísticos: ") ;
    scanf ("%d" , &pontos ) ;



    // informações da carta 2 

    

    printf("\nDigite os Dados da Carta 2\n"); 


    printf ("Estado de (A a H) representando um dos oito estados : " ) ;
    scanf  ("%s" , estado2 ) ;
    

    printf ("digite o Código da carta , utilizando a letra do estado que você escolheu , em seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf ("%s" , codigo2 ) ;


    printf ("digite o nome da cidade: ");
    scanf ("%s" , nomedacidade2 ) ;

    
    printf ("digite o numero da População: ") ;
    scanf ("%lu" , &populacao2) ;


    printf ("digite a Área da cidade em km²: ") ;
    scanf ("%f" , &area2 ) ;


    printf ("digite o PIB em bilhões de reais:");
    scanf ("%f" , &pib2);


    printf ("digite o Número de Pontos Turísticos: ") ;
    scanf ("%d" , &pontos2 ) ;





    // calculo do PIB per Capita e da  Densidade Populacional Carta 1

    densidade = (float)populacao / area ;
    percapita =  (float) (pib * 1000000000) / populacao ;


    // calculo do PIB per Capita e da  Densidade Populacional Carta 2

    densidade2 = (float)populacao2 / area2 ;
    percapita2 =  (float) (pib2 * 1000000000) / populacao2 ;

    
    // adicionei "(pib * 1000000000)" pro calculo da "per Capita" fica igual no exemplo cortando os 0







    // Calculo do Super poder



    soma1 = (float) populacao + area + pib + pontos + densidade + percapita; 
    soma2 = (float) populacao2 + area2 + pib2 + pontos2 + densidade2 + percapita2  ;




    // calculo da Comparação das cartas

    int resultadopopulacao , resultadoarea , resultadopib , resultadoponto , resultadodensidade , resultadocar , resultadosuper ;
    
    resultadopopulacao = populacao > populacao2 ;
    resultadoarea = area > area2 ;
    resultadopib = pib > pib2;
    resultadoponto = pontos > pontos2;
    resultadodensidade = densidade  < densidade2;
    resultadocar = percapita > percapita2;
    resultadosuper = soma1 < soma2 ;
    resultadosuper = soma1 > soma2 ;
    




    // Dados da carta 1


    printf("\nCarta 1\n"); 

    printf ("Estado : %s\n", estado ) ;

    printf ("Código : %s\n" , codigo ) ;

    printf ("Nome da Cidade : %s\n" , nomedacidade ) ;

    printf ("População : %lu\n" , populacao) ;

    printf ("Área : %.2f km²\n" , area  ) ;

    printf ("PIB : %.2f bilhões de reais\n" , pib ) ;

    printf ("Número de Pontos Turísticos : %d\n" , pontos ) ;

    printf ("Densidade Populacional : %.2F hab/km²\n" , densidade );

    printf ("PIB per Capita : %.2f reais\n" , percapita );

    printf ( "Super Poder : %.2f\n" , soma1  ) ;


    // Dados da carta 2


    printf("\nCarta 2\n");
    
    printf ("Estado : %s\n", estado2 ) ;

    printf ("Código : %s\n" , codigo2 ) ;

    printf ("Nome da Cidade : %s\n" , nomedacidade2 ) ;

    printf ("População : %lu\n" , populacao2) ;

    printf ("Área : %.2f km²\n" , area2  ) ;

    printf ("PIB : %.2f bilhões de reais\n" , pib2  ) ;

    printf ("Número de Pontos Turísticos : %d\n" , pontos2 ) ;

    printf ("Densidade Populacional : %.2F hab/km²\n" , densidade2 );

    printf ("PIB per Capita : %.2f reais\n" , percapita2 );

    printf ( "Super Poder : %.2f\n" , soma2 );


    // Comparação das Cartas


    printf("\n    ***Comparação de Cartas***:\n");
    printf ("População :%d ***Carta 1 venceu***\n " , resultadopopulacao ) ;
        printf ("Área :%d ***Carta 1 venceu***\n " , resultadoarea );
            printf ("PIB :%d ***Carta 1 venceu***\n " , resultadopib );
                printf ("Pontos Turísticos :%d ***Carta 1 venceu***\n " , resultadoponto  );
                    printf ("Densidade Populacional :%d ***Carta 2 venceu***\n " , resultadodensidade );
                        printf ("PIB per Capita :%d ***Carta 1 venceu***\n " , resultadocar) ;
                            printf ("Super Poder :%d ***Carta 1 venceu***\n" , resultadosuper);



        








    






    return 0;
}
