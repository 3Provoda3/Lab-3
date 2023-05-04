#include <stdio.h>
#include <math.h>

int main() {
    int f, r;
    double e;
    
    printf("Введіть значення змінних f: ");
    scanf("%d", &f);
    printf("Введіть значення змінних r: ");
    scanf("%d", &r);
    
    if (f == 5)
        e = 3 * f + 2 * r;
    if (f == 0)
        e = 8 * sqrt(r) / (2 * f - 4);
    if (f == -5)
        e = f * r - 9;
        
    printf("e = %.2lf\n", e);
    
    return 0;
}
