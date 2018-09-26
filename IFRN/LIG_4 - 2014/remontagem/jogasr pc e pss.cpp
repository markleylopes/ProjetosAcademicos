#include <iostream>
#include <fstream>
#include <conio.h>
#include "jogo1.cpp"
using namespace std;

int main()
{
    system("MODE 32,40");
 system("color 17");
cout<<"   _     _  ____    _  _    ";
cout<<"\n   |     |  |       |  |       ";
cout<<"    |     |  |       +--|    \n  ";
cout<<" ---|  -  |__-|      |_  \n"<<endl;
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

    for(int linha=10; linha>-1;linha--)
    {
    if(cad[0].t[linha][c]==" "){cad[0].t[linha][c]="0";cad[0].tab();break;};

    }
  cad[0].ganhador();
      cout<<"jogador2\n";
    //pcpcpcpcpcpcpcpcpcpcpcpcppcpcpcpcpcpcpcpcpcppcpcppcpcpcpcpcpcpcpcpcpcp


  //  system("cls");
int cll=0;
int li=10;

    for(li>-1;li--;)
    {

        if(cad[0].t[li][cll]==" "){cad[0].t[li][cll]="1";cad[0].tab();break;}
if(li==1){cll++; li=10;}

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

