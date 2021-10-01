#include <stdio.h>
#include <math.h>

int main() {
    float cateto1 = 5 ;
    float cateto2 = 10 ;
    float areaTriangolo = 0 ;
    float perimetroTriangolo = 0 ;
    areaTriangolo = (cateto1 * cateto2) / 2 ;
    perimetroTriangolo = (sqrt((cateto1 * cateto1) + (cateto2 * cateto2))) + cateto1 + cateto2 ;
    printf("Area del triangolo rettangolo: %.2f \nPerimetro del triangolo rettangolo: %.2f",
            areaTriangolo, perimetroTriangolo);
    return 0;
}