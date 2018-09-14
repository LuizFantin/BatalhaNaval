/*  Arquivo: BatalhaNaval.c
    Versão: (1.0.0)
    Descrição: Programa que simula um jogo de Batalha Naval utilizando matrizes.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*--FUNÇOES--*/
void contarTiros();
void carregarTabuleiro();
void Tabuleiro();
void inserirMatriz();
void Mapa();
void Fim();
void Mapafinal();

/*-----------*/

/*--MATRIZ--*/
char matMap[15][15]; //MATRIZ DOS MAPAS
char matTab[15][15]; //MATRIZ DO TABULEIRO
/*----------*/

/*--VARIAVEIS--*/
char linha,coluna;
int cont=0,sair=1;
int contVit=0;
int col,lin;
/*-------------*/

/*------------------FUNÇAO PRINCIPAL-------------------*/
//ESSA FUNÇAO E O CORPO PRINCIPAL DO PROGRAMA ONDE UTILIZAMOS AS FUNÇOES EM CONJUNTO.
main()
{ 
    while(sair!=0)   
    {                                    
      system("cls");
      contVit=0;//AQUI FOI COLOCADA A VARIAVEL QUE CONTA OS TIROS PARA QUE SEU VALOR VOLTE A ZERO PARA  A PROXIMA PARTIDA.
      Mapa();
      carregarTabuleiro();               
      while(cont!=75)//ESTE WHILE FOI USADO PARA RODAR O JOGO ATE NO MAXIMO 75 JOGADAS VALIDAS.
      {  
         system("cls");
         Tabuleiro();
         inserirMatriz();
         contarTiros();
         if(contVit==32)//NESSE IF EU TESTEI SE OS PONTOS ATINGIRAM SEU VALOR MAXIMO PARA SABER SE O JOGO FOI GANHO OU NAO.
         {
            system("cls");
            printf("Parabens voce ganhou!!!!");
           	Tabuleiro();
            system("Pause>null");
           	cont=75;
         }
      }
    if(contVit<32)//ESSE IF SO SERA LIDO SE O JOGO ATINGIR O MAXIMO DE 75 RODADAS E AVALIARA SE O JOGADOR TEM MENOS PONTOS DO QUE O NESCESSARIO PARA VITORIA.
    {
       system("cls");
       printf("Voce perdeu\n");
       Tabuleiro();
       Mapafinal();
       system("Pause>null");
    }
    Fim();
    }  
return 0;
}
/*-------------------------------------------------------*/

/*-------------------------------------------------------*/
//NESSA FUNÇAO SE PREENCHE O TABULEIRO COM ESPAÇOS PARA QUE ELE APAREÇA LIMPO PARA O USUARIO.
void carregarTabuleiro()
{     
      for(linha=0;linha<=14;linha++)
      {
          for(coluna=0;coluna<=14;coluna++)
             {
                 matTab[linha][coluna]=' ';
             }
      }
}
/*-------------------------------------------------------*/

/*-------------------------------------------------------*/
//ESSA FUNÇAO MOSTRA-SE O TABULEIRO COM AS JOGADAS,A LENGENDA E O CONTADOR DE JOGADAS E PONTOS.
void Tabuleiro()
{
     
     printf("\n               ___                            ___  ");
     printf("\n          _____| |________               _____| |________");
     printf("\n          |o o o o o o o / BATALHA NAVAL |o o o o o o o /  ");
     printf("\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
     printf("\n     0   1   2   3   4   5   6   7   8   9  10   11  12  13  14");
	 printf("\n    ___________________________________________________________");	     
     printf("\n\n 0 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[0][0],matTab[0][1],matTab[0][2],matTab[0][3],matTab[0][4],matTab[0][5],matTab[0][6],matTab[0][7],matTab[0][8],matTab[0][9],matTab[0][10],matTab[0][11],matTab[0][12],matTab[0][13],matTab[0][14]);
     printf("\n\n 1 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[1][0],matTab[1][1],matTab[1][2],matTab[1][3],matTab[1][4],matTab[1][5],matTab[1][6],matTab[1][7],matTab[1][8],matTab[1][9],matTab[1][10],matTab[1][11],matTab[1][12],matTab[1][13],matTab[1][14]);
     printf("\n\n 2 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[2][0],matTab[2][1],matTab[2][2],matTab[2][3],matTab[2][4],matTab[2][5],matTab[2][6],matTab[2][7],matTab[2][8],matTab[2][9],matTab[2][10],matTab[2][11],matTab[2][12],matTab[2][13],matTab[2][14]);
     printf("\n\n 3 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[3][0],matTab[3][1],matTab[3][2],matTab[3][3],matTab[3][4],matTab[3][5],matTab[3][6],matTab[3][7],matTab[3][8],matTab[3][9],matTab[3][10],matTab[3][11],matTab[3][12],matTab[3][13],matTab[3][14]);
     printf("\n\n 4 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[4][0],matTab[4][1],matTab[4][2],matTab[4][3],matTab[4][4],matTab[4][5],matTab[4][6],matTab[4][7],matTab[4][8],matTab[4][9],matTab[4][10],matTab[4][11],matTab[4][12],matTab[4][13],matTab[4][14]);
     printf("\n\n 5 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[5][0],matTab[5][1],matTab[5][2],matTab[5][3],matTab[5][4],matTab[5][5],matTab[5][6],matTab[5][7],matTab[5][8],matTab[5][9],matTab[5][10],matTab[5][11],matTab[5][12],matTab[5][13],matTab[5][14]);
     printf("\n\n 6 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[6][0],matTab[6][1],matTab[6][2],matTab[6][3],matTab[6][4],matTab[6][5],matTab[6][6],matTab[6][7],matTab[6][8],matTab[6][9],matTab[6][10],matTab[6][11],matTab[6][12],matTab[6][13],matTab[6][14]);
     printf("\n\n 7 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[7][0],matTab[7][1],matTab[7][2],matTab[7][3],matTab[7][4],matTab[7][5],matTab[7][6],matTab[7][7],matTab[7][8],matTab[7][9],matTab[7][10],matTab[7][11],matTab[7][12],matTab[7][13],matTab[7][14]);
     printf("\n\n 8 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[8][0],matTab[8][1],matTab[8][2],matTab[8][3],matTab[8][4],matTab[8][5],matTab[8][6],matTab[8][7],matTab[8][8],matTab[8][9],matTab[8][10],matTab[8][11],matTab[8][12],matTab[8][13],matTab[8][14]);
     printf("\n\n 9 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[9][0],matTab[9][1],matTab[9][2],matTab[9][3],matTab[9][4],matTab[9][5],matTab[9][6],matTab[9][7],matTab[9][8],matTab[9][9],matTab[9][10],matTab[9][11],matTab[9][12],matTab[9][13],matTab[9][14]);
     printf("\n\n10 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[10][0],matTab[10][1],matTab[10][2],matTab[10][3],matTab[10][4],matTab[10][5],matTab[10][6],matTab[10][7],matTab[10][8],matTab[10][9],matTab[10][10],matTab[10][11],matTab[10][12],matTab[10][13],matTab[10][14]);
     printf("\n\n11 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[11][0],matTab[11][1],matTab[11][2],matTab[11][3],matTab[11][4],matTab[11][5],matTab[11][6],matTab[11][7],matTab[11][8],matTab[11][9],matTab[11][10],matTab[11][11],matTab[11][12],matTab[11][13],matTab[11][14]);
     printf("\n\n12 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[12][0],matTab[12][1],matTab[12][2],matTab[12][3],matTab[12][4],matTab[12][5],matTab[12][6],matTab[12][7],matTab[12][8],matTab[12][9],matTab[12][10],matTab[12][11],matTab[12][12],matTab[12][13],matTab[12][14]);
     printf("\n\n13 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[13][0],matTab[13][1],matTab[13][2],matTab[13][3],matTab[13][4],matTab[13][5],matTab[13][6],matTab[13][7],matTab[13][8],matTab[13][9],matTab[13][10],matTab[13][11],matTab[13][12],matTab[13][13],matTab[13][14]);
     printf("\n\n14 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matTab[14][0],matTab[14][1],matTab[14][2],matTab[14][3],matTab[14][4],matTab[14][5],matTab[14][6],matTab[14][7],matTab[14][8],matTab[14][9],matTab[14][10],matTab[14][11],matTab[14][12],matTab[14][13],matTab[14][14]);   
	 printf("\n    ___________________________________________________________");	    
	 printf("\nVoce jogou %d vez(es)\n",cont);
     printf("\nVoce acertou %d tiro(s)\n",contVit);
     printf("\nLegendas\nH: 3 Hidroavioes-3 espacos\nS: 4 Submarinos-1 espaco\nC: 3 Cruzadores-2 espacos\nE: 2 Encouracados-4 espacos\nP: 1 Porta-Avioes-5 espacos \n*: Tiro na agua\n");

}
/*-------------------------------------------------------*/

/*-------------------------------------------------------*/
//NESSA FUNÇAO USAMOS UM SWITCH CASE PARA PREENCHER A MATRIZ DOS MAPAS, ONDE O JOGADOR ESCOLHE O MAPA LOGO AO ENTRAR NO JOGO. 
void Mapa()
{
	 int opcao;
     printf("MENU\n");
     printf("Selecione um mapa para jogar:\n");
     printf("1-Mapa 1\n2-Mapa 2\n3-Mapa 3\n4-Mapa 4\n");
     scanf("%d",&opcao);
     switch(opcao)
     {
                  case 1:
                       {
                       matMap[11][2]='H';
                       matMap[10][3]='H';
                       matMap[11][4]='H';
                       matMap[8][7]='H';
                       matMap[9][8]='H';
                       matMap[8][9]='H';
                       matMap[3][13]='H';
                       matMap[4][12]='H';
                       matMap[5][13]='H';
                       matMap[0][1]='S';
                       matMap[11][14]='S';
                       matMap[12][11]='S';
                       matMap[14][2]='S';
                       matMap[1][4]='C';
                       matMap[2][4]='C';
                       matMap[6][4]='C';
                       matMap[7][4]='C';
                       matMap[6][1]='C';
                       matMap[6][2]='C';
                       matMap[0][11]='P';
                       matMap[0][12]='P';
                       matMap[0][13]='P';
                       matMap[0][14]='P';
                       matMap[0][10]='P';
                       matMap[4][6]='E';
                       matMap[4][7]='E';
                       matMap[4][8]='E';
                       matMap[4][9]='E';
                       matMap[14][11]='E';
                       matMap[14][12]='E';
                       matMap[14][13]='E';
                       matMap[14][14]='E';
                       for(linha=0;linha<=14;linha++)//ESSE FOR FOI USADO PARA PREENHER OS ESPAÇOS QUE NAO AVIAM BARCOS COM '*' PARA REPRESENTAR OS TIROS NA AGUA.
                       {
                          for(coluna=0;coluna<=14;coluna++)
                          {
                             if((matMap[linha][coluna]!='H')&&(matMap[linha][coluna]!='P')&&(matMap[linha][coluna]!='C')&&(matMap[linha][coluna]!='E')&&(matMap[linha][coluna]!='S'))
                             {
                                matMap[linha][coluna]='*';
                             }
                          }
                       }
                       break;
                       }
                  case 2:
                       {
                       matMap[13][0]='H';
                       matMap[14][1]='H';
                       matMap[13][2]='H';
                       matMap[6][3]='H';
                       matMap[5][4]='H';
                       matMap[6][5]='H';
                       matMap[12][9]='H';
                       matMap[11][10]='H';
                       matMap[12][10]='H';
                       matMap[10][0]='S';
                       matMap[0][11]='S';
                       matMap[11][14]='S';
                       matMap[5][8]='S';
                       matMap[0][14]='C';
                       matMap[1][14]='C';
                       matMap[4][11]='C';
                       matMap[5][11]='C';
                       matMap[12][4]='C';
                       matMap[12][5]='C';
                       matMap[9][5]='P';
                       matMap[9][6]='P';
                       matMap[9][7]='P';
                       matMap[9][8]='P';
                       matMap[9][9]='P';
                       matMap[1][1]='E';
                       matMap[2][1]='E';
                       matMap[3][1]='E';
                       matMap[4][1]='E';
                       matMap[2][5]='E';
                       matMap[2][6]='E';
                       matMap[2][7]='E';
                       matMap[2][8]='E';
                       for(linha=0;linha<=14;linha++)
                       {
                          for(coluna=0;coluna<=14;coluna++)
                          {
                             if((matMap[linha][coluna]!='H')&&(matMap[linha][coluna]!='P')&&(matMap[linha][coluna]!='C')&&(matMap[linha][coluna]!='E')&&(matMap[linha][coluna]!='S'))
                             {
                                matMap[linha][coluna]='*';
                             }
                          }
                       }
                       break;
                       }
                  case 3:
                       {
                       matMap[7][2]='H';
                       matMap[6][3]='H';
                       matMap[7][4]='H';
                       matMap[13][12]='H';
                       matMap[14][13]='H';
                       matMap[13][14]='H';
                       matMap[11][9]='H';
                       matMap[10][10]='H';
                       matMap[12][10]='H';
                       matMap[0][6]='S';
                       matMap[0][11]='S';
                       matMap[10][13]='S';
                       matMap[5][0]='S';
                       matMap[2][12]='C';
                       matMap[2][13]='C';
                       matMap[7][10]='C';
                       matMap[7][11]='C';
                       matMap[0][1]='C';
                       matMap[0][2]='C';
                       matMap[10][1]='P';
                       matMap[11][1]='P';
                       matMap[12][1]='P';
                       matMap[13][1]='P';
                       matMap[14][1]='P';
                       matMap[3][6]='E';
                       matMap[4][6]='E';
                       matMap[5][6]='E';
                       matMap[6][6]='E';
                       matMap[10][6]='E';
                       matMap[11][6]='E';
                       matMap[12][6]='E';
                       matMap[13][6]='E';
                       for(linha=0;linha<=14;linha++)
                       {
                          for(coluna=0;coluna<=14;coluna++)
                          {
                             if((matMap[linha][coluna]!='H')&&(matMap[linha][coluna]!='P')&&(matMap[linha][coluna]!='C')&&(matMap[linha][coluna]!='E')&&(matMap[linha][coluna]!='S'))
                             {
                                matMap[linha][coluna]='*';
                             }
                          }
                       }
                       break;
                       }
                  case 4:
                       {
                       matMap[10][0]='H';
                       matMap[11][1]='H';
                       matMap[9][1]='H';
                       matMap[2][8]='H';
                       matMap[1][9]='H';
                       matMap[2][10]='H';
                       matMap[12][12]='H';
                       matMap[11][11]='H';
                       matMap[13][11]='H';
                       matMap[14][14]='S';
                       matMap[7][14]='S';
                       matMap[0][14]='S';
                       matMap[0][4]='S';
                       matMap[0][0]='C';
                       matMap[1][0]='C';
                       matMap[9][4]='C';
                       matMap[8][4]='C';
                       matMap[3][13]='C';
                       matMap[3][14]='C';
                       matMap[13][4]='P';
                       matMap[13][5]='P';
                       matMap[13][6]='P';
                       matMap[13][7]='P';
                       matMap[13][8]='P';
                       matMap[5][1]='E';
                       matMap[5][2]='E';
                       matMap[5][3]='E';
                       matMap[5][4]='E';
                       matMap[7][8]='E';
                       matMap[7][9]='E';
                       matMap[7][10]='E';
                       matMap[7][11]='E';
                       for(linha=0;linha<=14;linha++)
                       {
                          for(coluna=0;coluna<=14;coluna++)
                          {
                             if((matMap[linha][coluna]!='H')&&(matMap[linha][coluna]!='P')&&(matMap[linha][coluna]!='C')&&(matMap[linha][coluna]!='E')&&(matMap[linha][coluna]!='S'))
                             {
                                matMap[linha][coluna]='*';
                             }
                          }
                       }
                       break;
                       }
                       default:
                       {
					   printf("Selecione uma opcao valida");
                       system("PAUSE>null");
                       system("cls");
                       Mapa();
                       }
                       
     }   
}
/*-------------------------------------------------------*/    

/*-------------------------------------------------------*/ 
//ESSA FUNÇAO FOI USADA PARA PREENCHER A MATRIZ COM AS COORDENADAS DADAS PELO JOGADOR.
void inserirMatriz()
{
     printf("\nEscolha linha\n");
     scanf("%d",&lin);
     printf("Escolha coluna\n");
     scanf("%d",&col);
     
     if((lin<=14)&&(col<=14))//AQUI SE TESTA SE POSIÇAO ESTA OCUPADA OU NAO.
     {
          if((matTab[lin][col]=='H')||(matTab[lin][col]=='P')||(matTab[lin][col]=='C')||(matTab[lin][col]=='E')||(matTab[lin][col]=='S')||(matTab[lin][col]=='*'))
          {
              printf("\nPosicao ja ocupada,jogue em outra posicao");
              system("PAUSE>NULL");
	      }
          else if(matTab[lin][col]==' ')//AQUI SE O ESPAÇO INDICADO FOR VALIDO ELE PREENCHERA O LOCAL DA MATRIZ BASEADO NAS COORDENADAS.
          {
              matTab[lin][col]=matMap[lin][col]; 
              cont=cont+1;//ESSA VARIAVEL VAI SER RESPONSSAVEL POR CONTAR AS RODADAS,ASSIM SO SEGUINDO ADIANTE CASO A JOGADA SEJA VALIDA.
          }
     }
     else if((lin>14)||(col>14))//AQUI SE TESTA SE A JOGADA ESTA DENTRO DAS POSSIBILIDADES POSSIVEIS.
     {
         printf("Posicao invalida,digite as coordenadas novamente");
         system("PAUSE>NULL");
     }
}
/*-------------------------------------------------------*/      
 
/*-------------------------------------------------------*/                       
//ESSA FUNÇAO DA A OPÇAO DE CONTINUAR O JOGO OU NAO.ELA SO E UTILIZADA AO FIM DO PROGRAMA.
void Fim()
{
	char fim;
	system("cls");
	printf("\nDeseja sair? S/N\n");
    scanf(" %c",&fim);
    if(fim=='s')
    {
      sair=0;
    }
	else if(fim=='n')
	{
      cont=0;
	}
}
/*-------------------------------------------------------*/

/*-------------------------------------------------------*/
//AQUI E ONDE CONTAMOS OS TIROS QUE ACERTARAM OU NAO ASSIM SEMPRE ADICIONANDO AO CONTADOR DE PONTOS.
void contarTiros()
{
    if((matMap[lin][col]!=' ')&&(matMap[lin][col]!='*')&&(col<15)&&(lin<15))
    {
   	  contVit=contVit+1;
    }
}
/*-------------------------------------------------------*/

/*-------------------------------------------------------*/
void Mapafinal()
{
	 printf("\n    ___________________________________________________________");	     
     printf("\n\n 0 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[0][0],matMap[0][1],matMap[0][2],matMap[0][3],matMap[0][4],matMap[0][5],matMap[0][6],matMap[0][7],matMap[0][8],matMap[0][9],matMap[0][10],matMap[0][11],matMap[0][12],matMap[0][13],matMap[0][14]);
     printf("\n\n 1 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[1][0],matMap[1][1],matMap[1][2],matMap[1][3],matMap[1][4],matMap[1][5],matMap[1][6],matMap[1][7],matMap[1][8],matMap[1][9],matMap[1][10],matMap[1][11],matMap[1][12],matMap[1][13],matMap[1][14]);
     printf("\n\n 2 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[2][0],matMap[2][1],matMap[2][2],matMap[2][3],matMap[2][4],matMap[2][5],matMap[2][6],matMap[2][7],matMap[2][8],matMap[2][9],matMap[2][10],matMap[2][11],matMap[2][12],matMap[2][13],matMap[2][14]);
     printf("\n\n 3 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[3][0],matMap[3][1],matMap[3][2],matMap[3][3],matMap[3][4],matMap[3][5],matMap[3][6],matMap[3][7],matMap[3][8],matMap[3][9],matMap[3][10],matMap[3][11],matMap[3][12],matMap[3][13],matMap[3][14]);
     printf("\n\n 4 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[4][0],matMap[4][1],matMap[4][2],matMap[4][3],matMap[4][4],matMap[4][5],matMap[4][6],matMap[4][7],matMap[4][8],matMap[4][9],matMap[4][10],matMap[4][11],matMap[4][12],matMap[4][13],matMap[4][14]);
     printf("\n\n 5 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[5][0],matMap[5][1],matMap[5][2],matMap[5][3],matMap[5][4],matMap[5][5],matMap[5][6],matMap[5][7],matMap[5][8],matMap[5][9],matMap[5][10],matMap[5][11],matMap[5][12],matMap[5][13],matMap[5][14]);
     printf("\n\n 6 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[6][0],matMap[6][1],matMap[6][2],matMap[6][3],matMap[6][4],matMap[6][5],matMap[6][6],matMap[6][7],matMap[6][8],matMap[6][9],matMap[6][10],matMap[6][11],matMap[6][12],matMap[6][13],matMap[6][14]);
     printf("\n\n 7 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[7][0],matMap[7][1],matMap[7][2],matMap[7][3],matMap[7][4],matMap[7][5],matMap[7][6],matMap[7][7],matMap[7][8],matMap[7][9],matMap[7][10],matMap[7][11],matMap[7][12],matMap[7][13],matMap[7][14]);
     printf("\n\n 8 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[8][0],matMap[8][1],matMap[8][2],matMap[8][3],matMap[8][4],matMap[8][5],matMap[8][6],matMap[8][7],matMap[8][8],matMap[8][9],matMap[8][10],matMap[8][11],matMap[8][12],matMap[8][13],matMap[8][14]);
     printf("\n\n 9 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[9][0],matMap[9][1],matMap[9][2],matMap[9][3],matMap[9][4],matMap[9][5],matMap[9][6],matMap[9][7],matMap[9][8],matMap[9][9],matMap[9][10],matMap[9][11],matMap[9][12],matMap[9][13],matMap[9][14]);
     printf("\n\n10 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[10][0],matMap[10][1],matMap[10][2],matMap[10][3],matMap[10][4],matMap[10][5],matMap[10][6],matMap[10][7],matMap[10][8],matMap[10][9],matMap[10][10],matMap[10][11],matMap[10][12],matMap[10][13],matMap[10][14]);
     printf("\n\n11 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[11][0],matMap[11][1],matMap[11][2],matMap[11][3],matMap[11][4],matMap[11][5],matMap[11][6],matMap[11][7],matMap[11][8],matMap[11][9],matMap[11][10],matMap[11][11],matMap[11][12],matMap[11][13],matMap[11][14]);
     printf("\n\n12 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[12][0],matMap[12][1],matMap[12][2],matMap[12][3],matMap[12][4],matMap[12][5],matMap[12][6],matMap[12][7],matMap[12][8],matMap[12][9],matMap[12][10],matMap[12][11],matMap[12][12],matMap[12][13],matMap[12][14]);
     printf("\n\n13 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[13][0],matMap[13][1],matMap[13][2],matMap[13][3],matMap[13][4],matMap[13][5],matMap[13][6],matMap[13][7],matMap[13][8],matMap[13][9],matMap[13][10],matMap[13][11],matMap[13][12],matMap[13][13],matMap[13][14]);
     printf("\n\n14 | %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c   %c |",matMap[14][0],matMap[14][1],matMap[14][2],matMap[14][3],matMap[14][4],matMap[14][5],matMap[14][6],matMap[14][7],matMap[14][8],matMap[14][9],matMap[14][10],matMap[14][11],matMap[14][12],matMap[14][13],matMap[14][14]);   
	 printf("\n    ___________________________________________________________");	    
}
