#include <stdio.h>
#include <conio.h>
main()
{
printf("Calcolo IMC\n");
printf("Inserisci peso (in Kg): ");
int peso;
scanf("%d",&peso);
printf("Inserisci altezza (in m): ");
float altezza;
scanf("%f",&altezza);
float imc;
imc=(float)(peso/(altezza*altezza));
printf("I.M.C.= %.2f",imc);
getch();
}
