#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{

int optiune ,optiune2, suma, tranzactie;

printf("\t\t\t\tBancomat\n\n\n");
printf("Alegeti limba:\n\n");
printf("1.Romana\n");
printf("2.Spanish\n");
printf("3.Franch\n
printf("4.English\n\n");
printf("Tastati:");

scanf("%d",&optiune);

if(optiune==1){
printf("\nBun venit\n\n");
printf("1.Interogare sold");
printf("\n2.Extragere numerar");
printf("\n3.Iesire");
printf("\n\nTastati:");}

else{
printf("\n\nAceasta limba nu este disponibila.\n\n");
return 0;
}

scanf("%d",&optiune2);
switch(optiune2){
case 1:
printf("\nDspuneti de 80000 RONI");
printf("\n\nApasati 0 pentru a efectua o tranzactie, sau 1 pentru a iesi.");
printf("\nTastati:");
scanf("%d",&tranzactie);

if(tranzactie==0){
printf("\nIntroduceti suma:");
scanf("%d",&suma);

if(suma<1500){
printf("\n\nAti extrs: %d RONI\n",suma);
printf("La revedere.\n\n");
return 0;
}
else{
printf("\nNu dispuneti de aceasta suma.\n");
printf("La revedere.\n\n");
return 0;
}}
if(tranzactie==1){
printf("\n\nLa revedere\n\n");
return 0;
}
else{
printf("Ati tastat gresit\n\n");
return 0;
}

case 2:
printf("Introduceti suma:");
scanf("%d",&suma);
if(suma<1500){
printf("\n\nAti extras:%d RONI",suma);
printf("\nLa revedere.\n\n");
return 0;
}
else{
printf("\n\nNu dispuneti de aceasta suma.\n");
printf("La revedere.\n\n");
return 0;
}

case 3:
printf("La revedere.\n\n");
return 0;
}
}