#include <stdio.h>
#include <stdlib.h> //necessário para usar as funções malloc() e free()
#include <stdlib.h>

int main(void)
{
  int i,j,n_linhas,n_colunas;
  
  //matrizes dinâmicas de duas dimensões portanto vamos necessitar um ponteiro para a linha
  //e outro ponteiro apontando para coluna
  
  int **matriz1,**matriz2,**matriz_soma; 
  FILE *ptrArq;
  
  //Abrindo o arquivo
  ptrArq = fopen("ArqMatrizes.txt", "r");
  
  //Verificando se a abertura do arquivo foi bem sucedida
  if (ptrArq == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    printf("Saindo do programa...\n");
    system("pause");
    exit(1);//abortando o programa
  }
  
  // Leitura das dimensões da matriz a partir dos valores do arquivo
  fscanf(ptrArq,"%d %d",&n_linhas,&n_colunas);
  
  // Alocar a memória necessária para as matrizes  
  //----------------- Alocando a matriz1 ---------------
  
  // alocar a quantidade de linhas
  matriz1 = (int **)calloc(n_linhas,sizeof(int *)); 
  for (i = 0; i < n_linhas; i++)
  {
   // alocar a quantidade de colunas de cada linha
    matriz1[i] = (int *)calloc(n_colunas,sizeof(int));
  }
    
  //----------------- Alocando a matriz2 ---------------
  matriz2 = (int **)calloc(n_linhas,sizeof(int *));
  
  for (i = 0; i < n_linhas; i++)
  {
    matriz2[i] = (int *)calloc(n_colunas,sizeof(int));
  }
    
   
  // ------- Ler os valores para as matrizes a partir do arquivo texto ------   
  for (i = 0; i < n_linhas; i++)
  {
    for (j = 0; j < n_colunas; j++)
    {
      fscanf(ptrArq,"%d",&matriz1[i][j]);//ler um inteiro do arquivo e armazenar na matriz1
  }      
  }
    
      
  for (i = 0; i < n_linhas; i++)
  {
    for (j = 0; j < n_colunas; j++)
    {
      fscanf(ptrArq,"%d",&matriz2[i][j]);//ler um inteiro do arquivo e armazenar na matriz2
  }     
  }
      
  fclose(ptrArq);//Fechar o arquivo
      
  // --------------- Mostrar as matrizes lidas ---------------------
  printf("Matrizes lidas do arquivo:\n");
  for (i = 0; i < n_linhas; i++)
  {
    for (j = 0; j < n_colunas; j++)
    {
      printf("%2d ",matriz1[i][j]);
  }      
    
  printf("       ");  //Espaçamento entre as duas matrizes
    
    for (j = 0; j < n_colunas; j++)
    {
        printf("%2d ",matriz2[i][j]);
  }           
    printf("\n");
  }
  
  // Alocar memoria para matriz soma
  matriz_soma = (int **)calloc(n_linhas,sizeof(int *));
  
  for (i = 0; i < n_linhas; i++)
  {
    matriz_soma[i] = (int *)calloc(n_colunas,sizeof(int));
  }
    
    
  // Calcular matriz soma
  for (i = 0; i < n_linhas; i++)
  {
    for (j = 0; j < n_colunas; j++)
    {
       matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
  }     
  }    
      
  // Mostrar matriz soma
  printf("\nMatriz soma:\n");
  for (i = 0; i < n_linhas; i++)
  {
    for (j = 0; j < n_colunas; j++)
    {
       printf("%3d ",matriz_soma[i][j]);  
  }     
    printf("\n");
  }        
  
  //liberando a memória da matriz1 
  //para matrizes a liberação da memória ocorre na ordem inversa da alocação
    for (i=0; i < n_linhas; i++)
  {
    free (matriz1[i]) ;
  }     
  free (matriz1) ;

  //liberando a memória da matriz2 
  for (i=0; i < n_linhas; i++)
     free (matriz2[i]) ;
  free (matriz2) ;

  //liberando a memória da matriz_soma
  for (i=0; i < n_linhas; i++)
     free (matriz_soma[i]) ;
  free (matriz_soma);
  
  printf("\n");     
  system("pause"); 
  return 0;
}