#include <windows.h>
#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(void)
{
    POINT pt_Coords;
    std::cout<<"Aperte alguma para sair...";
    while(!_kbhit())
    {
        int X=pt_Coords.x ,Y=pt_Coords.y , XX = 0, YY = 0;

         SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){0,3});
         GetCursorPos(&pt_Coords);
         std::cout<<"x : "<<pt_Coords.x<<"    \ny : "<<pt_Coords.y<<"    \n";
         _sleep(100);
         XX=pt_Coords.x;
         YY=pt_Coords.y;
         _sleep(100);

         if(XX > X){
            cout << "\nX = Direita    e   " ;
         }else if(XX < X){
            cout << "\nX = Esquerda   e   " ;
         }

         if(YY < Y){
            cout << "Y = Cima\n" << endl;
         }else if(YY > Y){
            cout << "Y = Baixo\n" << endl;
         }
        _sleep(1000);


    }
    return 0;
}
