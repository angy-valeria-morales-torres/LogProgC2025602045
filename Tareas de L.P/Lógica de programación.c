#include <stdio.h>
#include <math.h>
int main()
{
    float L, pt, at, h, pi=3.1416;
    //asignacion de valores
    L = 7;
    h = sqrt ( pow(3*L,2)) + pow (L,2) );
    pt = 7*L +2*h + 3*L * pi/2;
    printf ("el perimetro total es %f\n" , pt);
    return 0;
}