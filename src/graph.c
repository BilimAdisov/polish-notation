#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "calcul.h"
#include "draw.h"
#include "mystack.h"

int main() {
    // Инициализация графа
    char **graph = calloc_matrix(HEIGHT, WIDTH + 1);

    struct st *operations = NULL;
    char input_string[80], output_string[80];

    // Ввод арифметического выражения
    fflush(stdin);
    fgets(input_string, 80, stdin);
    
    // Преобразование выражения в польскую нотацию
    parsing_in_polish_notation(operations, input_string, output_string);
    printf("\n%s\n", output_string);
    fflush(stdin);

    // Инициализация объекта HEAD
    HEAD head;
    init(&head);
    
    // Сначала обрабатываем граф
    init_graph(graph, HEIGHT, WIDTH);
    add_func_for_graph(graph, HEIGHT, WIDTH, output_string, &head);
    draw_graph(graph, HEIGHT);
    free_matrix(graph, HEIGHT);
    
    // Затем выполняем вычисление
    int x = 5;
    double y = counter(output_string, &head, x);
    printf("%lf\n", y);

    return 0;
}