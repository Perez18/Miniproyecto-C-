#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include  <string.h>
#include <ctype.h>


main(){

int opcion_ingrediente();

int menu=0,tamano_pizza=0 ,tipo_pizza=0,ingrediente_adicional=0, opcion_refresco=0,tipo_refresco=0,opcion_postre=0,salir=5;

float   precio_pizza=0,precio_total_personal=0,precio_total_familiar=0,precio_total_pizza=0,
        precio_total_jamon =0,precio_total_pepperoni=0,precio_total_pollo=0,precio_total_vegetariana=0,
        precio_refresco=0,precio_total_refresco=0,precio_total_te=0,precio_total_soda=0,precio_total_botella=0,precio_total_alamcenada=0,precio_botella=0,
        precio_total_combo=0,precio_combo=0,precio_combo_almacenado=0,
        precio_total_postre=0,precio_postre=0,precio_total_flan=0,precio_total_cheesecake=0,precio_total_tiramisu=0,
        precio_total_regular=0,precio_total_grande=0, precio_total_pagar=0,monto_vendido_dia=0;

char  agrandar[5],tipo_agrandar[10]="",botella_agua[5],
     nombre_refresco[10]="",agrandar_refresco[10]="", combo[5],nombre_pizza[10]="",nombre_postre[10]="",ver_porcentaje[5];


do{
printf("\n \t \tPIZZERIA SUPERPIZZA");
printf("\n \t \t     --MENU--");
printf("\n 1-PIZZAS");printf("\n \tPERSONAL....... $5.50"); printf("\n \tFAMILIAR......... $12.00  ");
printf("\n 2-REFRESCO");printf("\n \tREGULAR......$1.50 "); printf("\n \tGRANDE....... $2.25");
printf("\n 3-AGUA");printf("\n \t BOTELLA DE AGUA.......$1.50");
printf("\n 4-COMBO"); printf("\n \tCOMBO DE PIZZA PERSONAL Y REFRESCO REGULAR.......$6.75");
printf("\n 5-POSTRE");printf("\n \tFLAN....... $3.50"); printf("\n \tCHEESECAKE....$3.50  ");printf("\n \tTIRAMISU....$3.50  ");
printf("\n 0-SALIR ");
printf("\n  ELIJA SU OPCION:");
scanf("%d",&menu);

switch(menu)
{
case 1:

        printf("\n \t *********************");
        printf("\n \t ELIJA EL TAMANO DE PIZZA:");
        printf("\n \t 1-PERSONAL  ");
        printf(" \t 2-FAMILIAR ");
        printf("\n \t OPCION:");
        scanf("%d",&tamano_pizza);

     if(tamano_pizza>=1 && tamano_pizza <=2){
         if(tamano_pizza == 1){
            strcpy(nombre_pizza,"PERSONAL");
            precio_pizza = 5.50;
            precio_total_personal = precio_total_personal + precio_pizza ;

            }else if(tamano_pizza == 2){
            strcpy(nombre_pizza,"FAMILIAR");
             precio_pizza = 12.00 ;
             precio_total_familiar = precio_total_familiar + precio_pizza ;

         }
         else{

            printf("Opcion Invalida");
         }

          printf("\n \t ELIJA EL TIPO DE PIZZA:");
          printf("\n \t 1-JAMON");
          printf("\t 2-PEPPERONI");
          printf("\t 3-POLLO");
          printf("\t 4-VEGETARIANA");
          printf("\n \t ESCRIBA SU ELECCION :");
          scanf("%d",&tipo_pizza);
        if(tipo_pizza >=1 && tipo_pizza <=4){
         precio_total_pizza = precio_total_pizza + precio_pizza;
           switch(tipo_pizza){
                case 1:
                precio_total_jamon=precio_total_jamon+precio_pizza;

                printf("DESEA AGREGAR UN INGREDIENTE ADICIONAL COSTO ADICIONAL $1.00(S/N):");
                scanf("%s",agrandar);
                if(strcmp(agrandar,"S")==0 || strcmp(agrandar,"s")==0 ){

                  opcion_ingrediente();
                 }

                break;
                case 2:
                 precio_total_pepperoni=precio_total_pepperoni+precio_pizza;
                 printf("DESEA AGREGAR UN INGREDIENTE ADICIONAL COSTO ADICIONAL $1.00(S/N):");
                 scanf("%s",agrandar);
                 if(strcmp(agrandar,"S")==0 || strcmp(agrandar,"s")==0 ){
                  opcion_ingrediente();
                 }

                break;
                case 3:
                    precio_total_pollo=precio_total_pollo+precio_pizza;
                    printf("DESEA AGREGAR UN INGREDIENTE ADICIONAL COSTO ADICIONAL $1.00(S/N):");
                    scanf("%s",agrandar);
                   if(strcmp(agrandar,"S")==0 || strcmp(agrandar,"s")==0 ){

                  opcion_ingrediente();
                 }

                break;
                case 4:
                precio_total_vegetariana=precio_total_vegetariana+precio_pizza;
                     printf("DESEA AGREGAR UN INGREDIENTE ADICIONAL COSTO ADICIONAL $1.00(S/N):");
                     scanf("%s",agrandar);
                     if(strcmp(agrandar,"S")==0 || strcmp(agrandar,"s")==0 ){
                     opcion_ingrediente();
                 }
                break;

                default:
                printf("ELECCION NO VALIDA");
              }


           }
           else{
             printf("\nINGREDIENTE INCORRECTO");
             precio_pizza=0;
             precio_total_personal=0;
             precio_total_familiar=0;
           }
       }
   else{
            printf("\nCOMPRA CANCELADA");
         }

break;
case 2:
      printf("\n \t *********************");
      printf("\n \t ELIJA EL TAMANO DE REFRESCO");
      printf("\n \t 1-REGULAR");
      printf(" \t 2-GRANDE");
      printf("\n \t OPCION:");
      scanf("%d",&opcion_refresco);
    if(opcion_refresco>=1 && opcion_refresco <=2){

         if(opcion_refresco==1){
             strcpy(nombre_refresco,"REGULAR");
            precio_refresco= 1.50;
            precio_total_regular= precio_total_regular + precio_refresco;
         }
         else if (opcion_refresco==2){
                strcpy(nombre_refresco,"GRANDE");
                precio_refresco=2.25;
                precio_total_grande= precio_total_grande + precio_refresco;

         }
         else{

            printf("OPCION INVALIDA");
         }
      printf("\n \t ELIJA EL TIPO DE REFRESCO:");
      printf(" 1-SODA");
      printf(" \t 2-TE FRIO");
      printf(" \n \t ESCRIBA SU ELECCION:");
      scanf("%d",&tipo_refresco);
      if(tipo_refresco>= 1 && tipo_refresco <=2){
          precio_total_refresco= precio_total_refresco + precio_refresco;
          switch(tipo_refresco){
                 case 1:
                 printf("\nDESEA AGRANDAR EL RESFRESCO  (COSTO ADICIONAL  $0.70) (S/N):");
                 scanf("%s",agrandar_refresco);
                          if(strcmp(agrandar_refresco,"S")==0 || strcmp(agrandar_refresco,"s")==0  ){
                                printf("%d",opcion_refresco);
                                if(opcion_refresco ==1){
                                  precio_total_soda= precio_refresco + 0.70 ;
                                }
                                else{

                                  precio_total_soda= precio_refresco + 0.70 ;
                                 }
                                  precio_total_refresco= precio_refresco + 0.70 ;
                                  printf("\n \t ---------ORDEN PROCESADA CON REFRESCO AGRANDADO---------");
                               }
                          else{

                               precio_total_soda= precio_total_soda + precio_refresco;
                               }

                 break;
                 case 2:
                 printf("\nDESEA AGRANDAR EL RESFRESCO  (COSTO ADICIONAL  $0.70) (S/N):");
                         scanf("%s",agrandar_refresco);
                         if(strcmp(agrandar_refresco,"S")==0 || strcmp(agrandar_refresco,"s")==0  ){
                                   if(opcion_refresco ==1){
                                precio_total_te= precio_refresco + 0.70 ;
                                }
                                else{

                                precio_total_te= precio_refresco + 0.70 ;
                                 }
                                  precio_total_refresco= precio_refresco + 0.70 ;
                                printf("\n \t ---------ORDEN PROCESADA CON REFRESCO AGRANDADO---------");

                         }
                 else{

                             precio_total_te= precio_total_te + precio_refresco;
                         }
            break;

            default:

            printf("OPCION INVALIDA");
             }
       }

     }
     else{

        printf("COMPRA CANCELADA");
     }

break;
case 3:
        printf("\t DESEA COMPRAR LA BOTELLA DE AGUA(S/N):");
        scanf("%s",botella_agua);
         if(strcmp(botella_agua,"S")==0 || strcmp(botella_agua,"s")==0 ){
           precio_botella=1.50;
           precio_total_botella= precio_total_botella+ precio_botella;
           precio_total_alamcenada=precio_total_alamcenada+precio_total_botella;
           printf("\nCOMPRA  REALIZADA");
          }
          else
          {
            printf("\nCOMPRA CANCELADA");
           }
break;
case 4:
            printf("\t DESEA REALIZAR LA COMPRA DEL COMBO (S/N):");
            scanf("%s",combo);
            if(strcmp(combo,"S")==0 || strcmp(combo,"s")==0 ){
             precio_combo=6.75;
             precio_total_combo= precio_total_combo+ precio_combo;
             precio_combo_almacenado=precio_combo_almacenado+precio_total_combo;
             printf("\nCOMPRA  REALIZADA");
             }
            else
            {
               printf("\nCOMPRA CANCELADA");
            }

break;
case 5:

        printf("\n \t *********************");
        printf("\n \t ELIJA EL POSTE DE SU PREFERENCIA:");
        printf("\n \t 1-FLAN  ");
        printf(" \t 2-CHEESECAKE ");
        printf(" \t 3-TIRAMISU ");
        printf("\n \t OPCION:");
        scanf("%d",&opcion_postre);
        if(opcion_postre >= 1 && opcion_postre <= 3){
                         precio_postre=3.50;
            precio_total_postre= precio_total_postre+ precio_postre;
             printf("\nCOMPRA  REALIZADA");

            switch(opcion_postre){
                case 1:
                strcpy(nombre_postre,"FLAN");
                precio_total_flan=precio_total_flan+precio_postre;
                break;
                case 2:
                strcpy(nombre_postre,"CHEESECAKE");
                precio_total_cheesecake= precio_total_cheesecake+ precio_postre;

                break;
                case 3:
                strcpy(nombre_postre,"TIRAMISU");
                precio_total_tiramisu=precio_total_tiramisu+precio_postre;

                break;
                default:
                printf("Opcion invalida");
              }
        }
        else
        {
            printf("\nCOMPRA CANCELADA");}


    break;

default:
    if(menu==0){

            printf("\n \t \t HASTA LUEGO \n");
            getch();

    }
}
if(menu>= 1 && menu <=5){
precio_total_pagar = precio_total_jamon +precio_total_pepperoni+precio_total_pollo+precio_total_soda+precio_total_te+precio_total_botella+
precio_total_combo+precio_total_flan+precio_total_cheesecake+precio_total_tiramisu;

printf("\n \n  SI DESEA ALGO MAS PRESIONE CUALQUIERA TECLA NUMERICA, PARA IMPRIMIR LA FACTURA PRESIONE 5:");
scanf("%d",&salir);
if(salir == 5){
        //IMPRIMIR FACTURA EN PANTALLA
system("cls");
printf("\t------FACTURA--------------");
printf("\n \t \t \t  MONTO ");
printf("\n PIZZA JAMON   %s \t %5.2f",tipo_agrandar,precio_total_jamon);
printf("\n PIZZA  PEPPERONI  %s \t %5.2f",tipo_agrandar,precio_total_pepperoni);
printf("\n PIZZA POLLO  %s \t\t %5.2f ",tipo_agrandar,precio_total_pollo);
printf("\n PIZZA VEGETARIANA   %s \t %5.2f",tipo_agrandar,precio_total_vegetariana);
printf("\n REFRESCO SODA \t \t %5.2f",precio_total_soda);
printf("\n REFRESCO TE FRIO \t %5.2f",precio_total_te);
printf("\n BOTELLA DE AGUA \t %5.2f",precio_total_botella);
printf("\n COMBO DE PIZZA PERSONAL Y REFRESCO REGULAR %5.2f",precio_total_combo);
printf("\n POSTRE FLAN \t \t %5.2f",precio_total_flan);
printf("\n POSTRE CHEESECAKE \t %5.2f",precio_total_cheesecake);
printf("\n POSTRE TIRAMISU \t %5.2f",precio_total_tiramisu);

//printf("\n \n PRECIO TOTAL A PAGAR: %5.2f",precio_total_pizza +precio_total_refresco+precio_total_botella+precio_total_combo+precio_total_postre);
printf("\n \n PRECIO TOTAL A PAGAR: %5.2f",precio_total_pagar);

//VENTAD DEL DIA
printf("\n\n\t------VENTAS DEL DIA--------------");
monto_vendido_dia= monto_vendido_dia + precio_total_pagar;  //
printf("\n \n \tPIZZA TOTAL:%5.2f",precio_total_pizza);   //(50/80)*100
printf("\n \tREFRESCO TOTAL: %5.2f",precio_total_refresco);
printf("\n \tBOTELLA DE AGUA: %5.2f",precio_total_alamcenada);
printf("\n\tCOMBO : %5.2f",precio_combo_almacenado);
printf("\n \tPRECIO TOTAL POSTRE: %5.2f",precio_total_postre);
printf("\n \tVENTA TOTAL DEL DIA: %5.2f",monto_vendido_dia);

printf("\n \n--------------------------------");
printf("\n \nVER PORCENTAJE DE VENTA(S/N):");
scanf("%s",ver_porcentaje);
    if(strcmp(ver_porcentaje,"S")==0 || strcmp(ver_porcentaje,"s")==0) {
system("cls");
printf("\n\n\t------PORCENTAJE DEL DIA--------------");
printf("\n \n PIZZA : %5.2f PORCIENTO",(precio_total_pizza/monto_vendido_dia)*100);   //(50/80)*100
printf("\n REFRESCO : %5.2f PORCIENTO",(precio_total_refresco/monto_vendido_dia)*100);
printf("\n BOTELLA  : %5.2f PORCIENTO",(precio_total_alamcenada/monto_vendido_dia)*100);
printf("\n COMBO    : %5.2f PORCIENTO",(precio_combo_almacenado/monto_vendido_dia)*100);
printf("\n POSTRE: %5.2f PORCIENTO",(precio_total_postre/monto_vendido_dia)*100);
getch();
}
//LIMPIAR DATOS DE LA PANTALLA FACTURA
precio_total_jamon=0,precio_total_pollo=0,precio_total_pepperoni=0,precio_total_vegetariana=0,precio_total_botella=0,precio_total_soda=0,precio_total_te=0,
precio_total_combo=0,precio_total_flan=0,precio_total_cheesecake=0,precio_total_tiramisu=0,precio_total_pagar=0;

//LIMPIAR DATOS NOMBRE DE PRODUCTOS
strcpy(tipo_agrandar,"");
 }

  system("cls");
}
system("cls");


} while( menu!= 0);


}

int opcion_ingrediente(){

printf("Ok");
}

