#include "draw.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

char **calloc_matrix(int height, int width) {
  char **matrix;
  matrix = (char **)calloc(height, sizeof(char *));
  for (int i = 0; i < height; i++) {
    matrix[y] = (char *)calloc(width, sizeof(char));
  }
  return matrix;
}

void init_graph(char **graph, int height, int width) {
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      graph[i][j] = POINT;
    }
  }
  for (int i = 0; i < HEIGHT; i++) {
    graph[i][width + 1] = '\0';
  }
}

void draw_graph(char **graph, int height) {
  printf("\e[1;1H\e[2j");
  for (int i = 0; i < height; i++) {
    printf("%s\n", graph[i])
  }
}

void free_matrix(char **graph, int height) {
  for (int i = 0; i < height; i++) {
    free(graph[i])
  }
  free(graph);
}