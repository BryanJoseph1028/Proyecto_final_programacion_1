
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(){
        char pp;

    do {
        system("cls");
        system("cls");
        system("cls");
        system("color 7E");
        printf("\n\n\n\n\n\t\t\t께께께께께께께께께께께께께");
        printf("\n\t\t\t�          MENU          �");
        printf("\n\t\t\t께께께께께께께께께께께께께\n\n\n");
        printf("\t\t    께께께께께께께께께께께께께께께께께께\n");
        printf("\t\t    께  1. ADIMISTRAR MARCAS          께\n");
        printf("\t\t    께  2. ADMINISTRAR PRODUCTOS      께\n");
        printf("\t\t    께  3. IMPRIMIR CODIGO DE BARRAS  께\n");
        printf("\t\t    께  4. GENERAR FACTURA            께\n");
        printf("\t\t    께                                께\n");
        printf("\t\t    께                                께\n");
        printf("\t\t    께  5. Salir                      께\n");
        printf("\t\t    께께께께께께께께께께께께께께께께께께");
        //scanf("%s", &pp);
        pp=getch();
        system("color 7C");
        switch(pp){
            case '1': system("cls");system("start marcas.exe");break;
            case '2': system("cls");system("start productos.exe"); break;
            case '3': system("cls");system("start imprimir.exe"); break;
            case '4': system("cls");system("start FACTURA.exe");break;
            case '5':{
                system("cls");system("color 7C");
              cout<<"께께께께께께께께께께께께께�"<<endl;
              cout<<"께       FINALIZANDO     께"<<endl;
              cout<<"께께께께께께께께께께께께께�"<<endl;
              cout<<"께                       께"<<endl;
              cout<<"께                       께"<<endl;
              cout<<"께                       께"<<endl;
              cout<<"께께께께께께께께께께께께께�"<<endl;
                int ter=0;
                for(ter>0;ter<=17;ter++){
                Sleep(90);
                cout<<"껐�"<<endl;
                 }
                 exit(0);
            }
            default: printf("OPCION INVALIDA\n\n\n\n\t\t");Sleep(500);break;
        }
    }while(pp!='5');

    getch();
}
