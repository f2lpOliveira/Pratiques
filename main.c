#include <stdio.h>

main() {

  int votos = 0, votosBrancos = 0, votosNulos = 0, lolaBunny = 0,
      pernalonga = 0, piuPiu = 0, patolino = 0;

  printf("\nEleição para Presidente dos Looney Tunes\n\nCandidatos:\n\nLola "
         "Bunny - 1\nPernalonga - 2\nPiu-Piu - 3\nPatolino - 4\n\n");

  printf("Eleitor 1\nDigite o número do seu candidato: ");
  scanf("%d", &votos);
  if (votos == 1) {
    lolaBunny++;
  } else if (votos == 2) {
    pernalonga++;
  } else if (votos == 3) {
    piuPiu++;
  } else if (votos == 4) {
    patolino++;
  } else if (votos == 0) {
    votosNulos++;
  } else if (votos > 4) {
    votosBrancos++;
  }

  printf("\nEleitor 2\nDigite o número do seu candidato: ");
  scanf("%d", &votos);
  if (votos == 1) {
    lolaBunny++;
  } else if (votos == 2) {
    pernalonga++;
  } else if (votos == 3) {
    piuPiu++;
  } else if (votos == 4) {
    patolino++;
  } else if (votos == 0) {
    votosNulos++;
  } else if (votos > 4) {
    votosBrancos++;
  }

  printf("\nEleitor 3\nDigite o número do seu candidato: ");
  scanf("%d", &votos);
  if (votos == 1) {
    lolaBunny++;
  } else if (votos == 2) {
    pernalonga++;
  } else if (votos == 3) {
    piuPiu++;
  } else if (votos == 4) {
    patolino++;
  } else if (votos == 0) {
    votosNulos++;
  } else if (votos > 4) {
    votosBrancos++;
  }

  printf("\nEleitor 4\nDigite o número do seu candidato: ");
  scanf("%d", &votos);
  if (votos == 1) {
    lolaBunny++;
  } else if (votos == 2) {
    pernalonga++;
  } else if (votos == 3) {
    piuPiu++;
  } else if (votos == 4) {
    patolino++;
  } else if (votos == 0) {
    votosNulos++;
  } else if (votos > 4) {
    votosBrancos++;
  }

  printf("\nEleitor 5\nDigite o número do seu candidato: ");
  scanf("%d", &votos);
  if (votos == 1) {
    lolaBunny++;
  } else if (votos == 2) {
    pernalonga++;
  } else if (votos == 3) {
    piuPiu++;
  } else if (votos == 4) {
    patolino++;
  } else if (votos == 0) {
    votosNulos++;
  } else if (votos > 4) {
    votosBrancos++;
  }
  printf("\n\nTotal de Votos:\n\nLola Bunny = %d\nPernalonga = %d\nPiu-Piu = "
         "%d\nPatolino = %d\nVotos Brancos = %d\nVotos Nulos = %d\n",
         lolaBunny, pernalonga, piuPiu, patolino, votosBrancos, votosNulos);

  if (votosNulos + votosBrancos == 5) {
    printf("\nNenhum candidato foi eleito!");
  } else if (lolaBunny > pernalonga && lolaBunny > piuPiu &&
             lolaBunny > patolino) {
    printf("\nLola Bunny foi Eleita!");
  } else if (pernalonga > lolaBunny && pernalonga > piuPiu &&
             pernalonga > patolino) {
    printf("\nPernalonga foi Eleito!");
  } else if (piuPiu > lolaBunny && piuPiu > pernalonga && piuPiu > patolino) {
    printf("\nPiu-Piu foi Eleito!");
  } else if (patolino > lolaBunny && patolino > pernalonga &&
             patolino > piuPiu) {
    printf("\nPatolino foi Eleito!");
  } else if (lolaBunny == pernalonga && lolaBunny == piuPiu &&
             lolaBunny == patolino) {
    printf("\nLola Bunny, Pernalonga, Piu-Piu e Patolino empataram!");
  } else if (lolaBunny == pernalonga && lolaBunny != 0) {
    printf("\nLola Bunny e Pernalonga empataram!");
  } else if (lolaBunny == piuPiu && lolaBunny != 0) {
    printf("\nLola Bunny e Piu-Piu empataram!");
  } else if (lolaBunny == patolino && lolaBunny != 0) {
    printf("\nLola Bunny e Patolino empataram!");
  } else if (pernalonga == piuPiu && pernalonga != 0) {
    printf("\nPernalonga e Piu-Piu empataram!");
  } else if (pernalonga == patolino && pernalonga != 0) {
    printf("\nPernalonga e Patolino empataram!");
  } else if (piuPiu == patolino && piuPiu != 0) {
    printf("\nPiu-Piu e Patolino empataram!");
  }
}