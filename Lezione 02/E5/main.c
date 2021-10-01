#include <stdio.h>
#include <math.h>

int main() {
    float cateto1 = 5 ;
    float cateto2 = 10 ;
    float areaQuadrato = 0 ;
    float perimetroQuadrato = 0 ;
    areaQuadrato = cateto1 * cateto2 ;
    perimetroQuadrato = (cateto1 + cateto2) * 2 ;
    printf("Area del quadrato: %.2f \nPerimetro del quadrato: %.2f",
            areaQuadrato, perimetroQuadrato);
    return 0;
}