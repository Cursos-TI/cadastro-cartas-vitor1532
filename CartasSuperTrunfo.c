#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Funções Matemáticas:

float calcularDensidadePopulacional(int populacao, float area) {
  return (float) populacao / area;
}

float calcularPIBPerCapita(float pib, int populacao) {
  return (float) (pib * 1000000000) / populacao;
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char firstCard[4], secondCard[4], firstState, secondState, firstCity[50], secondCity[50];
  int firstPopulation, secondPopulation, firstTuristPoints, secondTuristPoints;
  float firstArea, secondArea, firstPIB, secondPIB;
  // Área para entrada de dados

  // Primeira carta
  printf("PRIMEIRA CARTA - Uma letra de 'A' a 'H' (representando um dos oito estados): \n");

  scanf(" %c", &firstState);

  printf("PRIMEIRA CARTA - Código letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
  scanf(" %s", firstCard);

  getchar(); // remove o Enter do buffer

  printf("PRIMEIRA CARTA - digite o nome da Cidade: \n");
  fgets(firstCity, 50, stdin);

  printf("PRIMEIRA CARTA - O número inteiro de habitantes da cidade (População):  \n");
  scanf(" %d", &firstPopulation);

  printf("PRIMEIRA CARTA - A área da cidade em quilômetros quadrados:  \n");
  scanf(" %f", &firstArea);

  printf("PRIMEIRA CARTA - O Produto Interno Bruto da cidade em bilhões de reais: \n");
  scanf(" %f", &firstPIB);

  printf("PRIMEIRA CARTA - A quantidade de pontos turísticos na cidade: \n");
  scanf(" %d", &firstTuristPoints);

  printf("CARTA CADASTRADA COM SUCESSO!!! Agora vamos à segunda carta... \n");


  // Segunda carta
  printf("SEGUNDA CARTA - Uma letra de 'A' a 'H' (representando um dos oito estados): \n");

  scanf(" %c", &secondState);

  printf("SEGUNDA CARTA - Código letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
  scanf(" %s", secondCard);

  getchar(); // remove o Enter do buffer

  printf("SEGUNDA CARTA - digite o nome da Cidade: \n");
  fgets(secondCity, 50, stdin);

  printf("SEGUNDA CARTA - O número inteiro de habitantes da cidade (População):  \n");
  scanf(" %d", &secondPopulation);

  printf("SEGUNDA CARTA - A área da cidade em quilômetros quadrados:  \n");
  scanf(" %f", &secondArea);

  printf("SEGUNDA CARTA - O Produto Interno Bruto da cidade em bilhões de reais: \n");
  scanf(" %f", &secondPIB);

  printf("SEGUNDA CARTA - A quantidade de pontos turísticos na cidade: \n");
  scanf(" %d", &secondTuristPoints);

  printf("Parabéns! Suas cartas foram criadas com sucesso!\n Seguem as informações de cada carta:\n Carta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Númnero de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capta: %.2f reais\n\n\n Carta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Númnero de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capta: %.2f reais\n", firstState, firstCard, firstCity, firstPopulation, firstArea, firstPIB, firstTuristPoints, calcularDensidadePopulacional(firstPopulation, firstArea), calcularPIBPerCapita(firstPIB, firstPopulation), secondState, secondCard, secondCity, secondPopulation, secondArea, secondPIB, secondTuristPoints, calcularDensidadePopulacional(secondPopulation, secondArea), calcularPIBPerCapita(secondPIB, secondPopulation));
  // Área para exibição dos dados da cidade

return 0;
} 
