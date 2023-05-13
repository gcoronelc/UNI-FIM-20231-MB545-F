// Creditos: Roman Ricardo

#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#include<sstream>
#include<string>

using namespace std;

float pot(float base,int exp){
    float res = 1;
    for(int p = 0;p < exp;p++){
        res = res * base;
    }
    return res;
}
long fact(int g){
    long f = 1;
    for(int i = 0;i < g;i++){
        f = f * (i+1);
    }
    return f;
}
float ex(int x,float n){
    float rex = 0;
    for(int i = 0; i < n; i++){
        rex = rex + pot(x,i)/fact(i);
    }
    return rex;
}

float root(int k){
    float rt = 0;
    while(pot(rt,2) < k){
        rt += 0.00001*k;
    }
    return rt;
}

bool esdivisor(int a,int b){
    return (a == b || a%b == 0 || b%a == 0)?true:false;
}


int main(){
    srand(time(NULL));

    int opt_p;

    goto menu;

    menu:
    printf("\n\n=========================================\n\n     Menu de opciones\n\n=========================================\n\n\n");
    printf("    1.- Aproximar e a la x\n    2.- Divisor\n    3.- Raices de una ecuacion\n    4.- Suma de digitos\n    5.- Salir\n");
    printf("\n=========================================\n\nOpcion? ");
    cin >> opt_p;
    switch(opt_p){
        case 1: goto op1; break;
        case 2: goto op2; break;
        case 3: goto op3; break;
        case 4: goto op4; break;
        case 5: printf("\nFIN DEL PROGRAMA\n"); return 0; break;
        default: printf("\nError de elecciones... Intente otra vez...\n"); goto menu;
    }

    op1:
    int n,x;
    printf("\nInserte una cantidad valida de terminos y valor para la aproximacion\n");
    cin >> n;
    cin >> x;
    cout << ex(x,n) << endl;
    Sleep(3000);
    goto menu;

    op2:
    int a,b;
    printf("\nInserte los dos valores para determinar si es divisor del otro\n");
    cin >> a;
    cin >> b;
    if(esdivisor(a,b) && b > a)
    printf("\n%d es divisor de %d\n",a,b);
    else if(esdivisor(a,b) && a > b)
    printf("\n%d es divisor de %d\n",b,a);
    else
    printf("\nNo son divisores entre esos valores\n");
    Sleep(3000);
    goto menu;

    op3:

    float ra,rb,rc,res1,res2;
    printf("Inserte terminos de la ec: ");
    scanf_s("%f %f %f",&ra,&rb,&rc);
    res1 = (-1 * rb + root(pot(rb,2) - (4 * ra * rc)))/(2 * ra);
    res2 = (-1 * rb - root(pot(rb,2) - (4 * ra * rc)))/(2 * ra);
    printf("\nLas raices son: %.2f y %.2f\n",res1,res2);
    Sleep(3000);
    goto menu;

    op4:

    int n1,n2,n3,ka;
    int dataprimos[1][9] = {2,3,5,7,11,13,17,19,23};
    printf("Inserte el numero de veces que se van a generar numeros: ");
    cin >> ka;
    for(unsigned i = 1;i <= ka;i++){
        string conf = "no";
        n1 = 1 + rand()%9;
        n2 = rand()%10;
        n3 = rand()%10;
        for(unsigned j = 0; j < 9;j++){
            if(n1 + n2 + n3 == dataprimos[0][j]){
                conf = "si";
                break;
            }
        }
        cout << n1 * 100 + n2 * 10 + n3 << " tiene una suma de digitos que " << conf << " es prima" << endl;
    }
    Sleep(1000 * ka);
    goto menu;







}
