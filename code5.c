#include <stdio.h>
int main() {
    
    int m = 4;  
    int n = 5;  

    for (int i = 0; i < m; i++) {
        printf("i = %d: ", i);
           for (int j = 0; j < n; j++) {
            printf("%d ", i * n + j);
        }
        printf("\n");
    }

    return 0;
}
