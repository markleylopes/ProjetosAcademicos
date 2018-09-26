#include <iostream>
#include <fstream>

using namespace std;
string t[7][10];
void zerar()
    {
     for(int i=0; i<7; i++)
    {
     for(int j=0; j<10; j++)
    {
     t[i][j]=" ";
    }
    }
    }

    void tab()
    {
     cout<<"   1   2   3   4   5   6   7   8   9   10";
     for(int i=0; i<7 ;i++)
    {
     for(int k=0; k<2; k++)
    {
     for(int j=0; j<10 ;j++)
    {

     if(j%10==0)
    {
        cout<<""<<endl;
     if(j==0&&k==0)
    {
        cout<<"  ---------------------------------------\n";
    }
    }
     if(j==0&&k==0)
    {
        cout<<i+1;
    }
     else if(j==0&&!(k==0))
    {
        cout<<" ";
    }
     if(j==0)
    {
        cout<<"|";
    }
        cout<<t[i][j];cout<<t[i][j];cout<<t[i][j];cout<<"|";
   }

   }
   }
        cout<<"\n  ---------------------------------------";
   }
int main(){
zerar();


system("pause");

};

