#include <iostream>
#include <fstream>

using namespace std;
string t[10][7];
void zerar()
    {
     for(int i=0; i<10; i++)
    {
     for(int j=0; j<7; j++)
    {
     t[i][j]=" ";
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
 void ganhar0()
   {

    for(int j=5,i=6;i>2; i--)
{
    t[i][j--]="f";
}

   }
   void ganhar()
   {

int p=0;
int j=9;
for(int rr=0; rr<8; rr++){
for(int r=0; r<8; r++)
{

for(int i=6;i>2; i--)
{
    if(t[i][j--]=="f"){p++;}
}
if(p==4){cout<<"ganhou\n";break;}
j=9;

j=j-r;

   }
   }


   }

int main(){
zerar();
ganhar0();
tab();

ganhar();


system("pause");

};


