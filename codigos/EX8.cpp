#include <stdio.h>

void update(int *a,int *b) {
      int soma = *a + *b;
      int dif_abs = *a - *b > 0 ? *a - *b : -(*a - *b);
      
      *a = soma;
      *b = dif_abs;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}