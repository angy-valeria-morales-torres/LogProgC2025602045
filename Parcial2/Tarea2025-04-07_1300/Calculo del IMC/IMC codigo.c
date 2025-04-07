#include <stdio.h>

int main()
{
int peso;
float IMC, h;

printf ("ingrese su peso (kg): ");
scanf ("%d", &peso);
printf ("ingrese su altura (m): ");
scanf ("%f", &h);
IMC= peso/(h*h);
printf ("su IMC es:%2f\n", IMC);
if(IMC>=40){
    printf ("obesidad clase 3\n");
} else if (IMC>=35.00 && IMC<=39){
    printf ("Obesidad clase 2\n");
} else if (IMC>=30.00 && IMC<=34.09){
    printf ("Obesidad clase 1\n");
} else if (IMC>=25.00 && IMC<=29.09){
    printf ("Sobrepeso\n");
} else if (IMC>=18.05 && IMC<=24.09){
    printf ("Peso normal\n");
} else if (IMC<=18.04){
    printf ("peso bajo");
}

return 0;
}
