#include <iostream>

using namespace std;
string jj;
int c, v=1, we=0;
int jogada=0;
int j1=0, j2=0;
class jogo
{
private:

string j;//jogador
string p;//pontuação
public:

string t[10][7];//tabuleiro
//daffdfsfsfsfgasgsgasgasgfsgggggfggfgfgfgfgf

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

int ganhador (){
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

