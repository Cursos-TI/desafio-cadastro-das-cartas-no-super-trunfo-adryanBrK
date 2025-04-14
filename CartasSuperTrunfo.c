#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída (necessária para usar printf)

    struct carta {
        char nome[50];     // Nome do país
        char letra;        // Letra identificadora (ex: 'A', 'B', etc.)
        char codigo[4];     // codigo com a letra do estado e 2 numeros
        int populacao;     // Em milhões
        float area;        // Em mil km² (por exemplo: 8516 para Brasil)
        float densidade;   // hab/km²
        float pib;         // Em trilhõe
        float idh;         // indice de desenvolvimento umano vai de 0 até 1
    };

void imprimircarta(struct carta pais) {                    // Função que imprime os dados de uma carta (país)
    printf("========= CARTA DO PAIS ==========\n");
    printf("pais: %s\n", pais.nome);                          // Mostra o nome do país
    printf("estado: %c\n", pais.letra);                       // Mostra a letra identificadora
    printf("codigo: %s\n", pais.codigo);
    printf("populacao: %d milhoes\n", pais.populacao);                 // Mostra a população
    printf("area: %.0f milhoes km²\n", pais.area);                       // Mostra a área do país
    printf("densidade demografica: %.1f hab/km²\n", pais.densidade);       // Mostra a densidade
    printf("pib: R$%.2f trilhoes\n", pais.pib);                            // Mostra o PIB formatado
    printf("idh: %.3f\n", pais.idh);                                 // Mostra o IDH com 3 casas decimais
    printf("==================================\n");
}

int main() {
    // Cria uma carta dos pais com valores específicos
   struct carta argentina = {
        "argentina",
        'B',
        "B01",
        45,
        278,
        16.4,
        0.5,
        0.846
    };

    struct carta mexico = {
        "mexico",
        'C',
        "C01",
        130,
        1,
        67,
        1.1,
        0.779,
    };

    struct carta brasil = {
    "brasil",
    'S',
    "S01",
    213,
    8516,
    25.0,
    2.0,
    0.754
  };

  struct carta canada = {
      "canada",
      'A',
      "A01",
      38,
      9985,
      3.8,
      2.2,
      0.936
  };

  struct carta japao = {
      "japao",
      'H',
      "H01",
      125,
      378,
      330.7,
      4.9,
      0.925
  };

  struct carta alemanha = {
      "alemanha",
      'S',
      "S02",
      83,
      357,
      232.6,
      4.2,
      0.942
  };

  struct carta nigeria = {
      "nigeria",
       'B',
       "B02",
      216,
      924,
      234.0,
      0.5,
      0.535
  };

// Imprime todas as cartas usando a função imprimircarta
imprimircarta(argentina);
imprimircarta(mexico);
imprimircarta(brasil);
imprimircarta(canada);
imprimircarta(japao);
imprimircarta(alemanha);
imprimircarta(nigeria);

    return 0;    // Indica que o programa terminou com sucesso
}
