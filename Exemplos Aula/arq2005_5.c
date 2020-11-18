#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *arquivo;
  char linha[100];
  char *resultado;
  int i;

  // Abre um arquivo TEXTO para LEITURA
  arquivo = fopen("exemplo.txt", "rt");
  if (arquivo == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return 1;
  }
  i = 1;
  while (!feof(arquivo))
  {
	// Lê uma linha (inclusive com o '\n')
      resultado = fgets(linha, 100, arquivo);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (resultado)  // Se foi possível ler
	    printf("Linha %d : %s",i,linha);
      i++;
  }
  fclose(arquivo);
  return 1;
}