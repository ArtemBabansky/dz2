#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
 #include <iostream>
 #include <conio.h>
using namespace std;
///////////////////////////////////////////////////////////
    enum {Maxn=3}; //Максимальное количевство элементов в массиве
    enum {Maxm=3}; //Максимальное количевство элементов в массиве
    int mass[Maxn][Maxm];
   class game {
   private:
    int x;
    int y;
    bool a;
    int b;
    char znac1,znac2,znac3,znac4,znac5,znac6,znac7,znac8,znac9;
    public:
   int init()
    {
    a=true;    //pl X
            for (int i = 0; i <=3; i++)
             {
              for(int j = 0; j <=3; j++)
              {
               mass[i][j]=46;
              }
             }
     }
      //Вывод таблицы
    void show_table( )
      {
        cout << "(00) (01) (02)"<<endl;
        cout << endl;
        cout << "(10) (11) (12)"<<endl;
        cout << endl;
        cout << "(20) (21) (22)"<<endl;
       }
