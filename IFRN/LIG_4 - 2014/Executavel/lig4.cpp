#include <iostream>
#define T 240
#include <windows.h>
#include <conio.h>
#include <locale.h>
using namespace std;
string jj;
int c, v=1, we=0;
int jogada=0;
int j1=0, j2=0;
class jogo
{
private:

string j;//jogador
public:

string t[10][7];//tabuleiro

void cadastro()
{
cout<<"Digite seu nome:";
cin>>j;
}

void escrever ()
{
jj=j;
}
void sobescrever ()
{
j=jj;
}
void checarcadastro()
{
string p;

cin>>p;
if(p==j)
{}

}

void zerar()
    {
     for(int i=0; i<10; i++)
    {
     for(int r=0; r<7; r++)
    {
     t[i][r]=" ";
    }
    }
    }

    void tab()
    {
     cout<<"   1   2   3   4   5   6   7";
     for(int i=0; i<10 ;i++)
    {
     for(int k=0; k<2; k++)
    {
     for(int r=0; r<7 ;r++)
    {

     if(r%7==0)
    {
        cout<<""<<endl;
     if(r==0&&k==0)
    {
        cout<<"   ---------------------------\n";
    }
    }
     if(r==0&&k==0)
    {
        cout<<" "<<i;
    }
     else if(r==0&&!(k==0))
    {
        cout<<"  ";
    }
     if(r==0)
    {
        cout<<"|";
    }
        cout<<t[i][r];cout<<t[i][r];cout<<t[i][r];cout<<"|";
   }

   }
   }
        cout<<"\n   ---------------------------\n";
   }

void ganhador (){
     if (t[0][0]=="0" && t[0][1]=="0" && t[0][2]=="0" && t[0][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][1]=="0" && t[0][2]=="0" && t[0][3]=="0" && t[0][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][2]=="0" && t[0][3]=="0" && t[0][4]=="0" && t[0][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][3]=="0" && t[0][4]=="0" && t[0][5]=="0" && t[0][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][0]=="0" && t[1][1]=="0" && t[1][2]=="0" && t[1][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][1]=="0" && t[1][2]=="0" && t[1][3]=="0" && t[1][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][2]=="0" && t[1][3]=="0" && t[1][4]=="0" && t[1][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][3]=="0" && t[1][4]=="0" && t[1][5]=="0" && t[1][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][0]=="0" && t[2][1]=="0" && t[2][2]=="0" && t[2][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][1]=="0" && t[2][2]=="0" && t[2][3]=="0" && t[2][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][2]=="0" && t[2][3]=="0" && t[2][4]=="0" && t[2][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][3]=="0" && t[2][4]=="0" && t[2][5]=="0" && t[2][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][0]=="0" && t[3][1]=="0" && t[3][2]=="0" && t[3][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][1]=="0" && t[3][2]=="0" && t[3][3]=="0" && t[3][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][2]=="0" && t[3][3]=="0" && t[3][4]=="0" && t[3][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][3]=="0" && t[3][4]=="0" && t[3][5]=="0" && t[3][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][0]=="0" && t[4][1]=="0" && t[4][2]=="0" && t[4][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][1]=="0" && t[4][2]=="0" && t[4][3]=="0" && t[4][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][2]=="0" && t[4][3]=="0" && t[4][4]=="0" && t[4][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][3]=="0" && t[4][4]=="0" && t[4][5]=="0" && t[4][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][0]=="0" && t[5][1]=="0" && t[5][2]=="0" && t[5][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][1]=="0" && t[5][2]=="0" && t[5][3]=="0" && t[5][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][2]=="0" && t[5][3]=="0" && t[5][4]=="0" && t[5][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][3]=="0" && t[5][4]=="0" && t[5][5]=="0" && t[5][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][0]=="0" && t[6][1]=="0" && t[6][2]=="0" && t[6][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][1]=="0" && t[6][2]=="0" && t[6][3]=="0" && t[6][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][2]=="0" && t[6][3]=="0" && t[6][4]=="0" && t[6][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][3]=="0" && t[6][4]=="0" && t[6][5]=="0" && t[6][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[7][0]=="0" && t[7][1]=="0" && t[7][2]=="0" && t[7][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[7][1]=="0" && t[7][2]=="0" && t[7][3]=="0" && t[7][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[7][2]=="0" && t[7][3]=="0" && t[7][4]=="0" && t[7][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[7][3]=="0" && t[7][4]=="0" && t[7][5]=="0" && t[7][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[8][0]=="0" && t[8][1]=="0" && t[8][2]=="0" && t[8][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[8][1]=="0" && t[8][2]=="0" && t[8][3]=="0" && t[8][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[8][2]=="0" && t[8][3]=="0" && t[8][4]=="0" && t[8][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[8][3]=="0" && t[8][4]=="0" && t[8][5]=="0" && t[8][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[9][0]=="0" && t[9][1]=="0" && t[9][2]=="0" && t[9][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[9][1]=="0" && t[9][2]=="0" && t[9][3]=="0" && t[9][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[9][2]=="0" && t[9][3]=="0" && t[9][4]=="0" && t[9][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[9][3]=="0" && t[9][4]=="0" && t[9][5]=="0" && t[9][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][0]=="0" && t[1][0]=="0" && t[2][0]=="0" && t[3][0]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][0]=="0" && t[2][0]=="0" && t[3][0]=="0" && t[4][0]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][0]=="0" && t[3][0]=="0" && t[4][0]=="0" && t[5][0]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][0]=="0" && t[4][0]=="0" && t[5][0]=="0" && t[6][0]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][0]=="0" && t[5][0]=="0" && t[6][0]=="0" && t[7][0]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][0]=="0" && t[6][0]=="0" && t[7][0]=="0" && t[8][0]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][0]=="0" && t[7][0]=="0" && t[8][0]=="0" && t[9][0]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][1]=="0" && t[1][1]=="0" && t[2][1]=="0" && t[3][1]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][1]=="0" && t[2][1]=="0" && t[3][1]=="0" && t[4][1]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][1]=="0" && t[3][1]=="0" && t[4][1]=="0" && t[5][1]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][1]=="0" && t[4][1]=="0" && t[5][1]=="0" && t[6][1]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][1]=="0" && t[5][1]=="0" && t[6][1]=="0" && t[7][1]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][1]=="0" && t[6][1]=="0" && t[7][1]=="0" && t[8][1]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][1]=="0" && t[7][1]=="0" && t[8][1]=="0" && t[9][1]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][2]=="0" && t[1][2]=="0" && t[2][2]=="0" && t[3][2]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][2]=="0" && t[2][2]=="0" && t[3][2]=="0" && t[4][2]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][2]=="0" && t[3][2]=="0" && t[4][2]=="0" && t[5][2]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][2]=="0" && t[4][2]=="0" && t[5][2]=="0" && t[6][2]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][2]=="0" && t[5][2]=="0" && t[6][2]=="0" && t[7][2]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][2]=="0" && t[6][2]=="0" && t[7][2]=="0" && t[8][2]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][2]=="0" && t[7][2]=="0" && t[8][2]=="0" && t[9][2]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][3]=="0" && t[1][3]=="0" && t[2][3]=="0" && t[3][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][3]=="0" && t[2][3]=="0" && t[3][3]=="0" && t[4][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][3]=="0" && t[3][3]=="0" && t[4][3]=="0" && t[5][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][3]=="0" && t[4][3]=="0" && t[5][3]=="0" && t[6][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][3]=="0" && t[5][3]=="0" && t[6][3]=="0" && t[7][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][3]=="0" && t[6][3]=="0" && t[7][3]=="0" && t[8][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][3]=="0" && t[7][3]=="0" && t[8][3]=="0" && t[9][3]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][4]=="0" && t[1][4]=="0" && t[2][4]=="0" && t[3][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][4]=="0" && t[2][4]=="0" && t[3][4]=="0" && t[4][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][4]=="0" && t[3][4]=="0" && t[4][4]=="0" && t[5][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][4]=="0" && t[4][4]=="0" && t[5][4]=="0" && t[6][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][4]=="0" && t[5][4]=="0" && t[6][4]=="0" && t[7][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][4]=="0" && t[6][4]=="0" && t[7][4]=="0" && t[8][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][4]=="0" && t[7][4]=="0" && t[8][4]=="0" && t[9][4]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][5]=="0" && t[1][5]=="0" && t[2][5]=="0" && t[3][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][5]=="0" && t[2][5]=="0" && t[3][5]=="0" && t[4][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][5]=="0" && t[3][5]=="0" && t[4][5]=="0" && t[5][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][5]=="0" && t[4][5]=="0" && t[5][5]=="0" && t[6][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][5]=="0" && t[5][5]=="0" && t[6][5]=="0" && t[7][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][5]=="0" && t[6][5]=="0" && t[7][5]=="0" && t[8][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][5]=="0" && t[7][5]=="0" && t[8][5]=="0" && t[9][5]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][6]=="0" && t[1][6]=="0" && t[2][6]=="0" && t[3][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[1][6]=="0" && t[2][6]=="0" && t[3][6]=="0" && t[4][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[2][6]=="0" && t[3][6]=="0" && t[4][6]=="0" && t[5][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[3][6]=="0" && t[4][6]=="0" && t[5][6]=="0" && t[6][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[4][6]=="0" && t[5][6]=="0" && t[6][6]=="0" && t[7][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[5][6]=="0" && t[6][6]=="0" && t[7][6]=="0" && t[8][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[6][6]=="0" && t[7][6]=="0" && t[8][6]=="0" && t[9][6]=="0"){j1++; cout<<" Jogador 1 venceu!\n"; we=1; }
else if (t[0][0]=="1" && t[0][1]=="1" && t[0][2]=="1" && t[0][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[0][1]=="1" && t[0][2]=="1" && t[0][3]=="1" && t[0][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[0][2]=="1" && t[0][3]=="1" && t[0][4]=="1" && t[0][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[0][3]=="1" && t[0][4]=="1" && t[0][5]=="1" && t[0][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][0]=="1" && t[1][1]=="1" && t[1][2]=="1" && t[1][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][1]=="1" && t[1][2]=="1" && t[1][3]=="1" && t[1][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][2]=="1" && t[1][3]=="1" && t[1][4]=="1" && t[1][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][3]=="1" && t[1][4]=="1" && t[1][5]=="1" && t[1][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][0]=="1" && t[2][1]=="1" && t[2][2]=="1" && t[2][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][1]=="1" && t[2][2]=="1" && t[2][3]=="1" && t[2][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][2]=="1" && t[2][3]=="1" && t[2][4]=="1" && t[2][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][3]=="1" && t[2][4]=="1" && t[2][5]=="1" && t[2][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][0]=="1" && t[3][1]=="1" && t[3][2]=="1" && t[3][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][1]=="1" && t[3][2]=="1" && t[3][3]=="1" && t[3][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][2]=="1" && t[3][3]=="1" && t[3][4]=="1" && t[3][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][3]=="1" && t[3][4]=="1" && t[3][5]=="1" && t[3][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][0]=="1" && t[4][1]=="1" && t[4][2]=="1" && t[4][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][1]=="1" && t[4][2]=="1" && t[4][3]=="1" && t[4][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][2]=="1" && t[4][3]=="1" && t[4][4]=="1" && t[4][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][3]=="1" && t[4][4]=="1" && t[4][5]=="1" && t[4][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][0]=="1" && t[5][1]=="1" && t[5][2]=="1" && t[5][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][1]=="1" && t[5][2]=="1" && t[5][3]=="1" && t[5][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][2]=="1" && t[5][3]=="1" && t[5][4]=="1" && t[5][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][3]=="1" && t[5][4]=="1" && t[5][5]=="1" && t[5][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][0]=="1" && t[6][1]=="1" && t[6][2]=="1" && t[6][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][1]=="1" && t[6][2]=="1" && t[6][3]=="1" && t[6][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][2]=="1" && t[6][3]=="1" && t[6][4]=="1" && t[6][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][3]=="1" && t[6][4]=="1" && t[6][5]=="1" && t[6][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[7][0]=="1" && t[7][1]=="1" && t[7][2]=="1" && t[7][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[7][1]=="1" && t[7][2]=="1" && t[7][3]=="1" && t[7][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[7][2]=="1" && t[7][3]=="1" && t[7][4]=="1" && t[7][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[7][3]=="1" && t[7][4]=="1" && t[7][5]=="1" && t[7][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[8][0]=="1" && t[8][1]=="1" && t[8][2]=="1" && t[8][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[8][1]=="1" && t[8][2]=="1" && t[8][3]=="1" && t[8][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[8][2]=="1" && t[8][3]=="1" && t[8][4]=="1" && t[8][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[8][3]=="1" && t[8][4]=="1" && t[8][5]=="1" && t[8][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[9][0]=="1" && t[9][1]=="1" && t[9][2]=="1" && t[9][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[9][1]=="1" && t[9][2]=="1" && t[9][3]=="1" && t[9][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[9][2]=="1" && t[9][3]=="1" && t[9][4]=="1" && t[9][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[9][3]=="1" && t[9][4]=="1" && t[9][5]=="1" && t[9][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[0][0]=="1" && t[1][0]=="1" && t[2][0]=="1" && t[3][0]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][0]=="1" && t[2][0]=="1" && t[3][0]=="1" && t[4][0]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][0]=="1" && t[3][0]=="1" && t[4][0]=="1" && t[5][0]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][0]=="1" && t[4][0]=="1" && t[5][0]=="1" && t[6][0]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][0]=="1" && t[5][0]=="1" && t[6][0]=="1" && t[7][0]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][0]=="1" && t[6][0]=="1" && t[7][0]=="1" && t[8][0]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][0]=="1" && t[7][0]=="1" && t[8][0]=="1" && t[9][0]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[0][1]=="1" && t[1][1]=="1" && t[2][1]=="1" && t[3][1]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][1]=="1" && t[2][1]=="1" && t[3][1]=="1" && t[4][1]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][1]=="1" && t[3][1]=="1" && t[4][1]=="1" && t[5][1]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][1]=="1" && t[4][1]=="1" && t[5][1]=="1" && t[6][1]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][1]=="1" && t[5][1]=="1" && t[6][1]=="1" && t[7][1]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][1]=="1" && t[6][1]=="1" && t[7][1]=="1" && t[8][1]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][1]=="1" && t[7][1]=="1" && t[8][1]=="1" && t[9][1]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[0][2]=="1" && t[1][2]=="1" && t[2][2]=="1" && t[3][2]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][2]=="1" && t[2][2]=="1" && t[3][2]=="1" && t[4][2]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][2]=="1" && t[3][2]=="1" && t[4][2]=="1" && t[5][2]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][2]=="1" && t[4][2]=="1" && t[5][2]=="1" && t[6][2]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][2]=="1" && t[5][2]=="1" && t[6][2]=="1" && t[7][2]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][2]=="1" && t[6][2]=="1" && t[7][2]=="1" && t[8][2]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][2]=="1" && t[7][2]=="1" && t[8][2]=="1" && t[9][2]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[0][3]=="1" && t[1][3]=="1" && t[2][3]=="1" && t[3][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][3]=="1" && t[2][3]=="1" && t[3][3]=="1" && t[4][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][3]=="1" && t[3][3]=="1" && t[4][3]=="1" && t[5][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][3]=="1" && t[4][3]=="1" && t[5][3]=="1" && t[6][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][3]=="1" && t[5][3]=="1" && t[6][3]=="1" && t[7][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][3]=="1" && t[6][3]=="1" && t[7][3]=="1" && t[8][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][3]=="1" && t[7][3]=="1" && t[8][3]=="1" && t[9][3]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[0][4]=="1" && t[1][4]=="1" && t[2][4]=="1" && t[3][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][4]=="1" && t[2][4]=="1" && t[3][4]=="1" && t[4][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][4]=="1" && t[3][4]=="1" && t[4][4]=="1" && t[5][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][4]=="1" && t[4][4]=="1" && t[5][4]=="1" && t[6][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][4]=="1" && t[5][4]=="1" && t[6][4]=="1" && t[7][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][4]=="1" && t[6][4]=="1" && t[7][4]=="1" && t[8][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][4]=="1" && t[7][4]=="1" && t[8][4]=="1" && t[9][4]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[0][5]=="1" && t[1][5]=="1" && t[2][5]=="1" && t[3][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][5]=="1" && t[2][5]=="1" && t[3][5]=="1" && t[4][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][5]=="1" && t[3][5]=="1" && t[4][5]=="1" && t[5][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][5]=="1" && t[4][5]=="1" && t[5][5]=="1" && t[6][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][5]=="1" && t[5][5]=="1" && t[6][5]=="1" && t[7][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][5]=="1" && t[6][5]=="1" && t[7][5]=="1" && t[8][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][5]=="1" && t[7][5]=="1" && t[8][5]=="1" && t[9][5]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[0][6]=="1" && t[1][6]=="1" && t[2][6]=="1" && t[3][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[1][6]=="1" && t[2][6]=="1" && t[3][6]=="1" && t[4][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[2][6]=="1" && t[3][6]=="1" && t[4][6]=="1" && t[5][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[3][6]=="1" && t[4][6]=="1" && t[5][6]=="1" && t[6][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[4][6]=="1" && t[5][6]=="1" && t[6][6]=="1" && t[7][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[5][6]=="1" && t[6][6]=="1" && t[7][6]=="1" && t[8][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
else if (t[6][6]=="1" && t[7][6]=="1" && t[8][6]=="1" && t[9][6]=="1"){j2++; cout<<" Jogador 2 venceu!\n"; we=1;}
}


void musicas(){
    int k=0;
    while(k==0){


    system("cls");
string m;

cout<<"0 - SITIO DO PICA-PAU AMARELO\n\n\n";
cout<<"1 - BOB ESPONJA\n\n\n";
cout<<"2 - C D E F\n\n\n";
cout<<"3 - METRONOMO\n\n\n";
cout<<"4 - SOL\n\n\n";
cout<<"OBS: VOCE SO PODERA SAIR QUANDO  "<<endl<<endl;
cout<<"     A MUSICA ACABAR "<<endl<<endl;
cout<<"     PARA VOLTAR PRESSIONE\n\n\n";
cout<<"     OUTRO NUMERO  \n\n\n";
m = getch();
if(m=="0"){

       for(int i=0; i<3; i++){
           Beep(659.30,T);
           Beep(597.30,1.5*T);
           Beep(493.90,1.5*T);
           Beep(440,1.2*T);
           Beep(392,T);
           Beep(440,2.5*T);
           Beep(392,2*T);
           Beep(597.30,T);
           Beep(659.30,3*T);

           Beep(659.30,T);
           Beep(597.30,1.5*T);
           Beep(493.90,1.5*T);
           Beep(440,1.2*T);
           Beep(392,T);
           Beep(440,4*T);
}
}
else if(m=="1"){
    int ir=0;
  while(ir<3)
  {
     Beep(440,T);
     Beep(415.30,T);
     Beep(440,T);
     Beep(493.90,0.8*T);
     Beep(440,3*T);
     Beep(164.81,4*T);
     Beep(110,4*T);
 ir++;
 }
     Beep(440,T);
     Beep(415.30,T);
     Beep(440,T);
     Beep(493.90,T);
     Beep(440,2*T);
     Beep(554.40,2*T);
     Beep(587.30,4*T);
}
else if(m=="2"){

    Beep(523.30,T);
 Beep(587.30,T);
 Beep(659.30,T);
 Beep(698.50,2*T);
 Beep(698.50,T);
 Beep(698.50,2*T);

 Beep(523.30, T);
 Beep(587.30, T);
 Beep(523.30, T);
 Beep(587.30,2*T);
 Beep(587.30,T);
 Beep(587.30,2*T);

 Beep(523.30, T);
 Beep(783.99, T);
 Beep(698.50, T);
 Beep(659.30,2*T);
 Beep(659.30, T);
 Beep(659.30,2*T);

 Beep(523.30, T);
 Beep(587.30,T);
 Beep(659.30,T);
 Beep(698.50,2*T);
 Beep(698.50,T);
 Beep(698.50,2*T);

}
else if(m=="3"){
     Beep(523.30,10*T);

}
else if(m=="4"){

    Beep(523.30,T);    Beep(698.50,T);
Beep(523.30,T);    Beep(698.50, T);
Beep(523.30,T);    Beep(783.99,2*T);
Beep(523.30,T);    Beep(698.50,T);
Beep(523.30,T);    Beep(698.50, T);
Beep(523.30,T);    Beep(783.99, 2*T);
Beep(523.30,T);    Beep(783.99,2* T);
Beep(698.50,2* T); Beep(659.30,2*T);
Beep(523.30,T);    Beep(783.99,2* T);
Beep(698.50,2* T); Beep(659.30,2*T);

}
else

k=3;
}
}

void teclado()
{
string a;
int loop=0;

cout<<"TECLE A LETRA CORRESPONDENTE\n";
cout<<"A NOTA EX: C==DO\n\n\n";
cout<<"A QUALQUER MOMENTO TECLE s/S\n";
cout<<"PARA SAIR\n\n\n";
cout<<"1 - INICIAR\n\n\n";
cout<<"2 - SAIR\n\n\n";
string aa;
 aa = _getch();
        system("MODE 34,15");

if(aa=="1"){}
else if(aa=="2"){loop=1;}
while(loop==0){
system("cls");
cout<<"|   |   ||   ||   ||   ||   ||   |"<<endl;
cout<<"|   |   ||   ||   ||   ||   ||   |"<<endl;
cout<<"| C | D || E || F || G || A || B |"<<endl;
cout<<"|   |   ||   ||   ||   ||   ||   |"<<endl;
cout<<"|___|___||___||___||___||___||___|"<<endl;
              a = _getch();
    if(a=="c"||a=="C"){system("cls");
cout<<"|---|   ||   ||   ||   ||   ||   |"<<endl;
cout<<"|---|   ||   ||   ||   ||   ||   |"<<endl;
cout<<"| C | D || E || F || G || A || B |"<<endl;
cout<<"|---|   ||   ||   ||   ||   ||   |"<<endl;
cout<<"|___|___||___||___||___||___||___|"<<endl;Beep(260,T);
     }
else if(a=="d"||a=="D"){
     system("cls");
cout<<"|   |---||   ||   ||   ||   ||   |"<<endl;
cout<<"|   |---||   ||   ||   ||   ||   |"<<endl;
cout<<"| C | D || E || F || G || A || B |"<<endl;
cout<<"|   |---||   ||   ||   ||   ||   |"<<endl;
cout<<"|___|___||___||___||___||___||___|"<<endl;Beep(290,T);}
else if(a=="e"||a=="E"){
     system("cls");
cout<<"|   |   ||---||   ||   ||   ||   |"<<endl;
cout<<"|   |   ||---||   ||   ||   ||   |"<<endl;
cout<<"| C | D || E || F || G || A || B |"<<endl;
cout<<"|   |   ||---||   ||   ||   ||   |"<<endl;
cout<<"|___|___||___||___||___||___||___|"<<endl;Beep(330,T);}
else if(a=="f"||a=="F"){
     system("cls");
cout<<"|   |   ||   ||---||   ||   ||   |"<<endl;
cout<<"|   |   ||   ||---||   ||   ||   |"<<endl;
cout<<"| C | D || E || F || G || A || B |"<<endl;
cout<<"|   |   ||   ||---||   ||   ||   |"<<endl;
cout<<"|___|___||___||___||___||___||___|"<<endl;Beep(350,T);}
else if(a=="g"||a=="G"){
     system("cls");
cout<<"|   |   ||   ||   ||---||   ||   |"<<endl;
cout<<"|   |   ||   ||   ||---||   ||   |"<<endl;
cout<<"| C | D || E || F || G || A || B |"<<endl;
cout<<"|   |   ||   ||   ||---||   ||   |"<<endl;
cout<<"|___|___||___||___||___||___||___|"<<endl;Beep(390,T);}
else if(a=="a"||a=="A"){
     system("cls");
cout<<"|   |   ||   ||   ||   ||---||   |"<<endl;
cout<<"|   |   ||   ||   ||   ||---||   |"<<endl;
cout<<"| C | D || E || F || G || A || B |"<<endl;
cout<<"|   |   ||   ||   ||   ||---||   |"<<endl;
cout<<"|___|___||___||___||___||___||___|"<<endl;Beep(440,T);}
else if(a=="b"||a=="B"){
     system("cls");
cout<<"|   |   ||   ||   ||   ||   ||---|"<<endl;
cout<<"|   |   ||   ||   ||   ||   ||---|"<<endl;
cout<<"| C | D || E || F || G || A || B |"<<endl;
cout<<"|   |   ||   ||   ||   ||   ||---|"<<endl;
cout<<"|___|___||___||___||___||___||___|"<<endl;Beep(490,T);}
else if(a=="S"||a=="s"){break;}
else
loop=0;
}
}
};


void getnumber()
{
string caractere;
b:
caractere = getch();

if(caractere=="1"){c=0;}
else if(caractere=="2"){c=1;}
else if(caractere=="3"){c=2;}
else if(caractere=="4"){c=3;}
else if(caractere=="5"){c=4;}
else if(caractere=="6"){c=5;}
else if(caractere=="7"){c=6;}
else
goto b;
}


using namespace std;
void intro()
{

cout<<"   _     _  ____    _  _    ";
cout<<"\n   |     |  |       |  |       ";
cout<<"    |     |  |       +--|    \n  ";
cout<<" ---|  -  |__-|      |_  \n\n"<<endl;


cout<<"_>ESCOLHA UMA DAS OPCOES ABAIXO\n\n\n";
}
int main()
{

    system("MODE 32,40");
    system("color 17");

//objeto
jogo cad[5];
//_>desenvolviento


string w;

mn:
intro();
cout<<"     0 - DIVERSAO \n\n\n";
cout<<"     1 - CONFIGURACOES \n\n\n";
cout<<"     PARA SAIR PRESSIONE s/S\n";


w=getch();

if(w=="s"||w=="S"){return 0;}

if(w=="0")
   {
system("cls");
intro();
cout<<"     0 - JOGAR\n\n\n";
cout<<"     1 - MUSICA\n\n\n";
cout<<"     PARA VOLTAR PRESSIONE\n\n\n";
cout<<"     OUTRO NUMERO  \n\n\n";

w=getch();
if(w!="0"&&w!="1"){system("cls");goto mn;}
if(w=="0")
{
    system("cls");
intro();
cout<<" 0 - JOGAR CONTRA O COMPUTADOR\n";
cout<<"      NO MODO FACIL\n\n\n";
cout<<" 1 - JOGAR CONTRA OUTRA PESSOA\n\n\n";

cout<<"     PARA VOLTAR PRESSIONE\n\n\n";
cout<<"     OUTRO NUMERO  \n\n\n";

w=getch();
if(w!="0"&&w!="1"){system("cls");goto mn;}

if(w=="0")
{
    system("cls");
cout<<"\n\n";
 cad[0].zerar();
cad[0].tab();

    while(jogada==0)
        {

  cout<<"JOGADOR 1\n";

 getnumber();
    system("cls");
    cout<<"\n\n";

    for(int linha=10; linha>-1;linha--)
    {
    if(cad[0].t[linha][c]==" "){cad[0].t[linha][c]="0";cad[0].tab();break;};

    }
  cad[0].ganhador();
  if(we==1){goto mn;}

      cout<<"JOGADOR2_PC\n";
    //pcpcpcpcpcpcpcpcpcpcpcpcppcpcpcpcpcpcpcpcpcppcpcppcpcpcpcpcpcpcpcpcpcp


    system("cls");
    cout<<"\n\n";

int cll=0;
int li=10;

    for(li>-1;li--;)
    {

        if(cad[0].t[li][cll]==" "){cad[0].t[li][cll]="1";cad[0].tab();break;}
if(li==1){cll++; li=10;}

    }

cad[0].ganhador();
  if(we==1){goto mn;}

    }
}

if(w=="1")
{
 system("cls");
    cout<<"\n\n";
   cad[0].zerar();

cad[0].tab();
    int jogada=0;
    while(jogada==0){
        c:

             system("cls");
    cout<<"\n\n";
    cad[0].tab();

    cout<<"JOGADOR 1\n";

 getnumber();


 system("cls");
    cout<<"\n\n";

    for(int linha=10; linha>-1;linha--)
    {
    if(cad[0].t[linha][c]==" "){cad[0].t[linha][c]="0"; cad[0].tab();break;}
if(linha==0&&(cad[0].t[linha][c]=="1"||cad[0].t[linha][c]=="0")){goto c;}

    }

  cad[0].ganhador();
  if(we==1){goto mn;}
  d:
system("cls");
    cout<<"\n\n";
    cad[0].tab();

      cout<<"JOGADOR 2\n";
     getnumber();

      system("cls");
    cout<<"\n\n";
    for(int linha=10; linha>-1;linha--)
    {
        if(cad[0].t[linha][c]==" "){cad[0].t[linha][c]="1";cad[0].tab();break;}

if(linha==0&&(cad[0].t[linha][c]=="1"||cad[0].t[linha][c]=="0")){goto d;}
    }
cad[0].ganhador();
  if(we==1){goto mn;}


    }
}
}
else if(w=="1")

{
    system("cls");
    intro();
cout<<"     0 - MUSICAS\n\n\n";
cout<<"     1 - TECLADO\n\n\n";
cout<<"      PARA VOLTAR PRESSIONE\n\n\n";
cout<<"      OUTRO NUMERO  \n\n\n";

w=getch();
if(w!="0"&&w!="1"){system("cls");goto mn;}
if(w=="0")
{
cad[0].musicas();
system("cls");
goto mn;
}
else if(w=="1")
{
    system("cls");
    intro();
cad[0].teclado();
 system("MODE 32,40");
system("cls");
goto mn;
}

}
   }
else if(w=="1")
{
    system("cls");
    intro();
cout<<"  0 - TEMAS\n\n\n";
cout<<"  1 - INFORMACOES DO COMPUTADOR\n\n\n";
cout<<"      PARA VOLTAR PRESSIONE\n\n\n";
cout<<"      OUTRO NUMERO  \n\n\n";

w=getch();
if(w!="0"&&w!="1"){system("cls");goto mn;}

if(w=="0")
    {

cout<<"0 - AQUA(PADRAO)\n\n\n";
cout<<"1 - FLORESTA\n\n\n";
cout<<"2 - BLACK'GREEN\n\n\n";
cout<<"3 - PRETO E BRANCO\n";
cout<<"    ESPECIAL PARA DEFICIENTES VISUAIS\n\n\n";
w=getch();
if(w=="0"){system("color 17");}
else if(w=="1"){system("color 3a");}
else if(w=="2"){system("color 0a");}
else if(w=="3"){system("color 0f");}
system("cls");
goto mn;
    }
else if(w=="1"){    system("MODE 100,200");
system("systeminfo");}

cout<<"      PARA VOLTAR PRESSIONE\n\n\n";
cout<<"      QUALQUER NUMERO  \n\n\n";

w=getch();
if(w!=""){system("cls"); system("MODE 32,40");goto mn;}

}

else if(w!="0"||w!="1"||w!="s"||w!="S"){system("cls");
goto mn;}




}
