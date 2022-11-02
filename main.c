#include <stdio.h>

main() {

  int votos=0, votosBrancos=0, votosNulos=0, lolaBunny=0, pernalonga=0, piuPiu=0, patolino=0;

  printf("\nEleição para Presidente dos Looney Tunes\n\n");
  printf("Candidatos:\n\n");
  printf("Lola Bunny - 1\nPernalonga - 2\nPiu-Piu - 3\nPatolino - 4\n\n");
  
  printf("Eleitor 1\nDigite o número do seu candidato: ");
  scanf("%d", &votos);
  if(votos == 1)
    lolaBunny++;
  if(votosBrancos == 2)
    pernalonga++;
  if(votos == 3)
    piuPiu++;
  if(votos == 4)
    patolino++;
  if(votos == 0)
    votosNulos++;
  if(votos > 4)
    votosBrancos++;
    
    printf("\nEleitor 2\nDigite o número do seu candidato: ");
  scanf("%d", &votos);
  if(votos == 1)
    lolaBunny++;
  if(votos == 2)
    pernalonga++;
  if(votos == 3)
    piuPiu++;
  if(votos == 4)
    patolino++;
  if(votos == 0)
    votosNulos++;
  if(votos > 4)
    votosBrancos++;

}