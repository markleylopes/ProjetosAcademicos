#include <iostream>
#include <fstream>
#include <conio.h>
#include "jogo1.cpp"
using namespace std;

int main()
{
    system("MODE 32,40");

//objeto
jogo cad[5];
//_>desenvolviento

//importar

 string line;
 ifstream a ("user.txt");
  if (a.is_open())
 {
   int cont;
   while ( getline (a,line) )
  {

   jj=line;
   cad[cont].sobescrever();
   cont++;
  }

    a.close();
 }
  else if(!(a.is_open()))
   {

   ofstream user;
   a.open ("user.txt");
   a.close();

   }



//fim importar
//cadastro
string w;
cout<<"0 cadastro 1 jogar\n";
w=getch();
if(w=="0")
    {
        for(int i=0; i<5;i++)
{

cad[i].escrever();
if(jj=="")
{
cad[i].cadastro();
break;
}
else if(i==4&&!(jj=="")){
cout<<"Memoria cheia\n";}

}}
else if(w=="1")
    {
   cad[0].zerar();
cad[0].tab();
    int jogada=0;
    while(jogada==0){
    cout<<"jogador 1\n";

 getnumber();
    // system("cls");

    for(int linha=10; linha>0;linha--)
    {
    if(cad[0].t[linha][c]==" "){cad[0].t[linha][c]="0";cad[0].tab();break;};

    }
  cad[0].ganhador();
      cout<<"jogador2\n";
     getnumber();
  //  system("cls");

    for(int linha=10; linha>0;linha--)
    {
        if(cad[0].t[linha][c]==" "){cad[0].t[linha][c]="1";cad[0].tab();break;};

    }
cad[0].ganhador();

    }
    }
else if(w=="7"){cout<<"saiu\n";}

//fimcadastro
//_criar arquivo
ofstream user;
user.open ("user.txt");
//_escrever
for(int i=0; i<5;i++)
{
cad[i].escrever();
user <<jj<<endl;
}
user.close();

system("pause");
}
