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

    for(int i=9; i>5; i--)
{
   t[i][5]="f";


}



   }
   void ganhar()
   {

int n=10, h=3, p=0;
while(!(p==4)){

    for(n>h; n--;)
{
    for(int j=0;j<7; j++){
    if(t[n][j]=="f"){p++;}
    }
}
if(p==4){cout<<"ganhou\n"; cout<<h<<endl;break;}
if(p!=4&&h==3){break;}
   n--;
   h++;

   }

   }

int main(){
zerar();
ganhar0();
tab();

ganhar();


system("pause");

};


