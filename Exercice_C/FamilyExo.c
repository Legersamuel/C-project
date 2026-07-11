/*Ceci est un programme qui te donne les information sur un menmbre d'une famille composee
de 8 personnes , en saisisant un numero */

#include<stdio.h>
int main(){
char number;


printf("Enter un numero pour obtenir les info sur une personne, ex: 1 , 2 , ect... :");
scanf("%c",&number);

if(number=='1')
{
printf("Ce numero correspond au numero du pere\n");
printf("Nom complet:Jacques Junior\nDate de naissance:24 Janvier 1990\nsexe: Masculin\nPoids :90 kilos\nHauteur:80m");
}
else
    if(number=='2')
     {
       printf("Ce numero correspond au numero de la pere\n");
       printf("Nom complet:Jacques Junia\nDate de naissance:2 Mars 1990\nsexe: feminin\nPoids :65 kilos\nHauteur:60m");
     }
    else
      if(number=='3')
       {
         printf("Ce numero correspond au numero de la premiere enfant (la plus grande)\n");
         printf("Nom complet:Jacques Rosanda\nDate de naissance:9 Janvier 2020\nsexe: feminin\nPoids :40 kilos\nHauteur:55m");
       }
       else
        if(number=='4')
         {
           printf("Ce numero correspond au numero du second enfant\n");
           printf("Nom complet:Jacques Steevens\nDate de naissance:24 Janvier 2022\nsexe: Masculin\nPoids :40 kilos\nHauteur:52m");
         }
         else
          if(number=='5')
           {
            printf("Ce numero correspond au numero du troisieme enfant\n");
            printf("Nom complet:Jacques Richard\nDate de naissance:3 Avril 2024\nsexe: Masculin\nPoids :55 kilos\nHauteur:40m");
           }
           else
            if(number=='6')
             {
               printf("Ce numero correspond au numero du quatrieme enfant\n");
               printf("Nom complet:Jacques Ruth\nDate de naissance:1 Juillet 2026\nsexe: feminin\nPoids :50 kilos\nHauteur:40m");
             }
             else
              if(number=='7')
               {
                printf("Ce numero correspond au numero du cinquieme enfant\n");
                printf("Nom complet:Jacques Messi\nDate de naissance:24 juin 2026\nsexe: Masculin\nPoids :20 kilos\nHauteur:30m");
               }
               else
                if(number=='8')
                 {
                   printf("Ce numero correspond au numero du sixieme enfant\n");
                   printf("Nom complet:Jacques Rosie\nDate de naissance:24 novembre 2028\nsexe: Masculin\nPoids :20 kilos\nHauteur:28m");
                 }

return 0;
}