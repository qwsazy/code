#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for (int i = 1; i <= size; i++ ) {
        for (int j = 1; j < size; j++ ) {
            printf("%d ", j);
        }
        printf("%d\n", size);
    }

    return 0;
}

/*
Условие задачи

Вывести числовой квадрат заданного размера.
В каждой строке числа идут с единицы через пробел.
Размер считать с клавиатуры.

Пример ввода

2


Пример вывода

1 2
1 2
*/