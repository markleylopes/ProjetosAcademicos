#include <iostream>
#include <conio.h>
#include "jogo1.cpp"
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


//cadastro
string w;
//cout<<" diversao> jogar  ouvir musicas teclado virtual / configuracao> alterar tema // sair\n";
//cout<<"\n_> Diversao // Configuracoes ";
mn:
intro();
cout<<"     0 - DIVERSAO \n\n\n";
cout<<"     1 - CONFIGURACOES \n\n";
w=getch();
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
else if(w=="1"){}
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

if(w=="0"){}
else if(w=="1"){    system("MODE 100,200");
system("systeminfo");}

cout<<"      PARA VOLTAR PRESSIONE\n\n\n";
cout<<"      QUALQUER NUMERO  \n\n\n";

w=getch();
if(w!=""){system("cls"); system("MODE 32,40");goto mn;}

}


/*else if(w=="1000")
    {

 cout<<"\n _> Jogar // Musicas // Teclado\n";

    }*/
else if(w!="0"&&w!="1"){system("cls");
goto mn;}




}
