// Creditos: Roman Ricardo

#include<iostream> //build
#include<stdio.h> //scanf

using namespace std;

float datadesc[3][2] = {{0.05,0.08},{0.06,0.1},{0.08,0.14}};
float dataopt[1][3] = {150,260,350};
float datasd[1][2] = {0.05,0.07};
int ven = 0;
float sd1 = 0;
float sd2 = 0;
float sv = 0;

int main()
{
    goto menu;

menu:
    int opt_p;
    printf("LA CASA DEL INKA\n\n\n****************************\n    SISTEMA DE VENTAS    \n");
    printf("\n    Menu de opciones    \n");
    printf("****************************");
    printf("\n    1.- Procesar venta\n    2.- Reporte de ventas\n    3.- Salir\n");
    printf("****************************\nOpcion? ");
    cin >> opt_p;
    switch(opt_p){
    case 1: goto op1; break;
    case 2: goto op2; break;
    case 3: printf("FIN DEL PROGRAMA\n\nNos vemos en la siguiente venta"); return 0; break;
    default: printf("\nError de alternativa, intente otra vez...\n\n"); goto menu;
    }
    
op1:
    int opcion,dias,edad,desc1,desc2,ventc,cm2,cf2;
    char s;
    ventc = 0;
    desc1 = 0;
    desc2 = 0;
    cm2 = 0;
    cf2 = 0;
    printf("\nCliente #%d\n\n",ven+1);
    printf("Inserte la opcion, dias de hospedaje, edad y sexo con un espacio separados entre cada dato\n");
    scanf("%d %d %d %c",&opcion,&dias,&edad,&s);
    if(dias < 5){
        printf("\nNumero de dias fuera del limite\n");
        goto op1;
    }
    if(edad <= 0){
        printf("\nInserte edad correcta\n");
        goto op1;
    }
    switch(opcion){
    case 1: ventc = dataopt[0][0]; desc1 = ventc * (dias > 10)?datadesc[0][1]:datadesc[0][0]; break;
    case 2: ventc = dataopt[0][1]; desc1 = ventc * (dias > 10)?datadesc[1][1]:datadesc[1][0]; break;
    case 3: ventc = dataopt[0][2]; desc1 = ventc * (dias > 10)?datadesc[2][1]:datadesc[2][0]; break;
    default: printf("\nError de alternativas... intente otra alternativa...\n"); goto op1;
    }
    if(s == 'M'){
        desc2 = ventc * (edad > 50)?datasd[0][0]:0;
        cm2++;
    }
    else if(s == 'F'){
        desc2 = ventc * (edad > 50)?datasd[0][1]:0;
        cf2++;
    }
    else{
    printf("\nError en genero...\n");
    goto op1;
    }
    
    sv += ventc;
    sd1 += desc1;
    sd2 += desc2;
    
    ven++;
    goto menu;
    
op2:
    printf("\n\nReporte de ventas:\n\n\nCantidad total de ventas: %d\n",ven);
    printf("Importe bruto: %.2f\n",sv);
    printf("Cantidad desc 2 masc: %d\n",cm2);
    printf("Cantidad desc 2 fem: %d\n",cf2);
    printf("Monto desc 1: %.2f\n",sd1);
    printf("Monto desc 2: %.2f\n",sd2);
    printf("Importe neto: %.2f\n\n\n",sv - sd1 - sd2);
    goto menu;
}    