#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0, y = 0;
    
    printf("Antes da alteração: x = %d, y = %d\n", x, y);
    alterar_vars(&x, &y);
    printf("Depois da alteração: x = %d, y = %d\n", x, y);

    return 0;
}

void alterar_vars(int *a, int *b) {
    *a = 10;
    *b = 20;
}
