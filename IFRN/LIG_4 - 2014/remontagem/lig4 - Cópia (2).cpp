#include <iostream>
#include <conio.h>
#include "jogo1.cpp"
using namespace std;

int main()
{
    system("MODE 32,40");

//objeto
jogo cad[5];
//_>desenvolviento


//cadastro
string w;
//cout<<" diversao> jogar  ouvir musicas teclado virtual / configuracao> alterar tema // sair\n";
//cout<<"\n_> Diversao // Configuracoes ";
cout<<"   _     _  ____    _  _    ";
cout<<"\n   |     |  |       |  |       ";
cout<<"    |     |  |       +--|    \n  ";
cout<<" ---|  -  |__-|      |_  \n\n"<<endl;


cout<<"_>ESCOLHA UMA DAS OPCOES ABAIXO\n\n\n";
cout<<"     0 - DIVERSAO \n\n\n";
cout<<"     1 - CONFIGURACOES \n\n";
w=getch();
if(w=="0")
   {
system("cls");
cout<<"     0 - JOGAR\n\n\n";
cout<<"     1 - MUSICA\n\n\n";
w=getch();

if(w=="0"){}
if(w=="1"){}
if(w=="2"){}

   }
else if(w=="1")
{
cout<<"     0 - TEMAS\n\n\n";
cout<<"     1 - INFORMACOES DO COMPUTADOR\n\n\n";
}


else if(w=="1000")
    {

 cout<<"\n _> Jogar // Musicas // Teclado\n";

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


system("pause");
}
