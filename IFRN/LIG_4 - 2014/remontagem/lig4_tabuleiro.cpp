#include <iostream>
#include <fstream>


using namespace std;
string t[7][10];
void zerar(){ for(int i=0; i<7; i++)
    {
    for(int j=0; j<10; j++)
    {
            t[i][j]=" ";
    }
    }}

    void tab(){
    cout<<"   1   2   3   4   5   6   7   8   9   10\n";
cout<<"1|"; cout<<t[0][0];cout<<t[0][0];cout<<t[0][0]; cout<<"|"; cout<<t[0][1];cout<<t[0][1];cout<<t[0][1]; cout<<"|"; cout<<t[0][2]; cout<<t[0][2];cout<<t[0][2]; cout<<"|"; cout<<t[0][3];cout<<t[0][3];cout<<t[0][3];cout<<"|"; cout<<t[0][4];cout<<t[0][4];cout<<t[0][4]; cout<<"|"; cout<<t[0][5];cout<<t[0][5];cout<<t[0][5]; cout<<"|";cout<<t[0][6];cout<<t[0][6];cout<<t[0][6]; cout<<"|";cout<<t[0][7];cout<<t[0][7];cout<<t[0][7]; cout<<"|";cout<<t[0][8];cout<<t[0][8];cout<<t[0][8]; cout<<"|"; cout<<t[0][9];cout<<t[0][9];cout<<t[0][9];cout<<"|\n";
cout<<" |"; cout<<t[0][0];cout<<t[0][0];cout<<t[0][0]; cout<<"|"; cout<<t[0][1];cout<<t[0][1];cout<<t[0][1]; cout<<"|"; cout<<t[0][2]; cout<<t[0][2];cout<<t[0][2]; cout<<"|"; cout<<t[0][3];cout<<t[0][3];cout<<t[0][3];cout<<"|"; cout<<t[0][4];cout<<t[0][4];cout<<t[0][4]; cout<<"|"; cout<<t[0][5];cout<<t[0][5];cout<<t[0][5]; cout<<"|";cout<<t[0][6];cout<<t[0][6];cout<<t[0][6]; cout<<"|";cout<<t[0][7];cout<<t[0][7];cout<<t[0][7]; cout<<"|";cout<<t[0][8];cout<<t[0][8];cout<<t[0][8]; cout<<"|"; cout<<t[0][9];cout<<t[0][9];cout<<t[0][9];cout<<"|\n";
cout<<"  ---------------------------------------\n";
cout<<"2|"; cout<<t[1][0];cout<<t[1][0];cout<<t[1][0]; cout<<"|"; cout<<t[1][1];cout<<t[1][1];cout<<t[1][1]; cout<<"|"; cout<<t[1][2]; cout<<t[1][2];cout<<t[1][2]; cout<<"|"; cout<<t[1][3];cout<<t[1][3];cout<<t[1][3];cout<<"|"; cout<<t[1][4];cout<<t[1][4];cout<<t[1][4]; cout<<"|"; cout<<t[1][5];cout<<t[1][5];cout<<t[1][5]; cout<<"|";cout<<t[1][6];cout<<t[1][6];cout<<t[1][6]; cout<<"|";cout<<t[1][7];cout<<t[1][7];cout<<t[1][7]; cout<<"|";cout<<t[1][8];cout<<t[1][8];cout<<t[1][8]; cout<<"|"; cout<<t[1][9];cout<<t[1][9];cout<<t[1][9];cout<<"|\n";
cout<<" |"; cout<<t[1][0];cout<<t[1][0];cout<<t[1][0]; cout<<"|"; cout<<t[1][1];cout<<t[1][1];cout<<t[1][1]; cout<<"|"; cout<<t[1][2]; cout<<t[1][2];cout<<t[1][2]; cout<<"|"; cout<<t[1][3];cout<<t[1][3];cout<<t[1][3];cout<<"|"; cout<<t[1][4];cout<<t[1][4];cout<<t[1][4]; cout<<"|"; cout<<t[1][5];cout<<t[1][5];cout<<t[1][5]; cout<<"|";cout<<t[1][6];cout<<t[1][6];cout<<t[1][6]; cout<<"|";cout<<t[1][7];cout<<t[1][7];cout<<t[1][7]; cout<<"|";cout<<t[1][8];cout<<t[1][8];cout<<t[1][8]; cout<<"|"; cout<<t[1][9];cout<<t[1][9];cout<<t[1][9];cout<<"|\n";
cout<<"  ---------------------------------------\n";
cout<<"3|"; cout<<t[2][0];cout<<t[2][0];cout<<t[2][0]; cout<<"|"; cout<<t[2][1];cout<<t[2][1];cout<<t[2][1]; cout<<"|"; cout<<t[2][2]; cout<<t[2][2];cout<<t[2][2]; cout<<"|"; cout<<t[2][3];cout<<t[2][3];cout<<t[2][3];cout<<"|"; cout<<t[2][4];cout<<t[2][4];cout<<t[2][4]; cout<<"|"; cout<<t[2][5];cout<<t[2][5];cout<<t[2][5]; cout<<"|";cout<<t[2][6];cout<<t[2][6];cout<<t[2][6]; cout<<"|";cout<<t[2][7];cout<<t[2][7];cout<<t[2][7]; cout<<"|";cout<<t[2][8];cout<<t[2][8];cout<<t[2][8]; cout<<"|"; cout<<t[2][9];cout<<t[2][9];cout<<t[2][9];cout<<"|\n";
cout<<" |"; cout<<t[2][0];cout<<t[2][0];cout<<t[2][0]; cout<<"|"; cout<<t[2][1];cout<<t[2][1];cout<<t[2][1]; cout<<"|"; cout<<t[2][2]; cout<<t[2][2];cout<<t[2][2]; cout<<"|"; cout<<t[2][3];cout<<t[2][3];cout<<t[2][3];cout<<"|"; cout<<t[2][4];cout<<t[2][4];cout<<t[2][4]; cout<<"|"; cout<<t[2][5];cout<<t[2][5];cout<<t[2][5]; cout<<"|";cout<<t[2][6];cout<<t[2][6];cout<<t[2][6]; cout<<"|";cout<<t[2][7];cout<<t[2][7];cout<<t[2][7]; cout<<"|";cout<<t[2][8];cout<<t[2][8];cout<<t[2][8]; cout<<"|"; cout<<t[2][9];cout<<t[2][9];cout<<t[2][9];cout<<"|\n";
cout<<"  ---------------------------------------\n";
cout<<"4|"; cout<<t[3][0];cout<<t[3][0];cout<<t[3][0]; cout<<"|"; cout<<t[3][1];cout<<t[3][1];cout<<t[3][1]; cout<<"|"; cout<<t[3][2]; cout<<t[3][2];cout<<t[3][2]; cout<<"|"; cout<<t[3][3];cout<<t[3][3];cout<<t[3][3];cout<<"|"; cout<<t[3][4];cout<<t[3][4];cout<<t[3][4]; cout<<"|"; cout<<t[3][5];cout<<t[3][5];cout<<t[3][5]; cout<<"|";cout<<t[3][6];cout<<t[3][6];cout<<t[3][6]; cout<<"|";cout<<t[3][7];cout<<t[3][7];cout<<t[3][7]; cout<<"|";cout<<t[3][8];cout<<t[3][8];cout<<t[3][8]; cout<<"|"; cout<<t[3][9];cout<<t[3][9];cout<<t[3][9];cout<<"|\n";
cout<<" |"; cout<<t[3][0];cout<<t[3][0];cout<<t[3][0]; cout<<"|"; cout<<t[3][1];cout<<t[3][1];cout<<t[3][1]; cout<<"|"; cout<<t[3][2]; cout<<t[3][2];cout<<t[3][2]; cout<<"|"; cout<<t[3][3];cout<<t[3][3];cout<<t[3][3];cout<<"|"; cout<<t[3][4];cout<<t[3][4];cout<<t[3][4]; cout<<"|"; cout<<t[3][5];cout<<t[3][5];cout<<t[3][5]; cout<<"|";cout<<t[3][6];cout<<t[3][6];cout<<t[3][6]; cout<<"|";cout<<t[3][7];cout<<t[3][7];cout<<t[3][7]; cout<<"|";cout<<t[3][8];cout<<t[3][8];cout<<t[3][8]; cout<<"|"; cout<<t[3][9];cout<<t[3][9];cout<<t[3][9];cout<<"|\n";
cout<<"  ---------------------------------------\n";
cout<<"5|"; cout<<t[4][0];cout<<t[4][0];cout<<t[4][0]; cout<<"|"; cout<<t[4][1];cout<<t[4][1];cout<<t[4][1]; cout<<"|"; cout<<t[4][2]; cout<<t[4][2];cout<<t[4][2]; cout<<"|"; cout<<t[4][3];cout<<t[4][3];cout<<t[4][3];cout<<"|"; cout<<t[4][4];cout<<t[4][4];cout<<t[4][4]; cout<<"|"; cout<<t[4][5];cout<<t[4][5];cout<<t[4][5]; cout<<"|";cout<<t[4][6];cout<<t[4][6];cout<<t[4][6]; cout<<"|";cout<<t[4][7];cout<<t[4][7];cout<<t[4][7]; cout<<"|";cout<<t[4][8];cout<<t[4][8];cout<<t[4][8]; cout<<"|"; cout<<t[4][9];cout<<t[4][9];cout<<t[4][9];cout<<"|\n";
cout<<" |"; cout<<t[4][0];cout<<t[4][0];cout<<t[4][0]; cout<<"|"; cout<<t[4][1];cout<<t[4][1];cout<<t[4][1]; cout<<"|"; cout<<t[4][2]; cout<<t[4][2];cout<<t[4][2]; cout<<"|"; cout<<t[4][3];cout<<t[4][3];cout<<t[4][3];cout<<"|"; cout<<t[4][4];cout<<t[4][4];cout<<t[4][4]; cout<<"|"; cout<<t[4][5];cout<<t[4][5];cout<<t[4][5]; cout<<"|";cout<<t[4][6];cout<<t[4][6];cout<<t[4][6]; cout<<"|";cout<<t[4][7];cout<<t[4][7];cout<<t[4][7]; cout<<"|";cout<<t[4][8];cout<<t[4][8];cout<<t[4][8]; cout<<"|"; cout<<t[4][9];cout<<t[4][9];cout<<t[4][9];cout<<"|\n";
cout<<"  ---------------------------------------\n";
cout<<"6|"; cout<<t[5][0];cout<<t[5][0];cout<<t[5][0]; cout<<"|"; cout<<t[5][1];cout<<t[5][1];cout<<t[5][1]; cout<<"|"; cout<<t[5][2]; cout<<t[5][2];cout<<t[5][2]; cout<<"|"; cout<<t[5][3];cout<<t[5][3];cout<<t[5][3];cout<<"|"; cout<<t[5][4];cout<<t[5][4];cout<<t[5][4]; cout<<"|"; cout<<t[5][5];cout<<t[5][5];cout<<t[5][5]; cout<<"|";cout<<t[5][6];cout<<t[5][6];cout<<t[5][6]; cout<<"|";cout<<t[5][7];cout<<t[5][7];cout<<t[5][7]; cout<<"|";cout<<t[5][8];cout<<t[5][8];cout<<t[5][8]; cout<<"|"; cout<<t[5][9];cout<<t[5][9];cout<<t[5][9];cout<<"|\n";
cout<<" |"; cout<<t[5][0];cout<<t[5][0];cout<<t[5][0]; cout<<"|"; cout<<t[5][1];cout<<t[5][1];cout<<t[5][1]; cout<<"|"; cout<<t[5][2]; cout<<t[5][2];cout<<t[5][2]; cout<<"|"; cout<<t[5][3];cout<<t[5][3];cout<<t[5][3];cout<<"|"; cout<<t[5][4];cout<<t[5][4];cout<<t[5][4]; cout<<"|"; cout<<t[5][5];cout<<t[5][5];cout<<t[5][5]; cout<<"|";cout<<t[5][6];cout<<t[5][6];cout<<t[5][6]; cout<<"|";cout<<t[5][7];cout<<t[5][7];cout<<t[5][7]; cout<<"|";cout<<t[5][8];cout<<t[5][8];cout<<t[5][8]; cout<<"|"; cout<<t[5][9];cout<<t[5][9];cout<<t[5][9];cout<<"|\n";
cout<<"  ---------------------------------------\n";
cout<<"7|"; cout<<t[6][0];cout<<t[6][0];cout<<t[6][0]; cout<<"|"; cout<<t[6][1];cout<<t[6][1];cout<<t[6][1]; cout<<"|"; cout<<t[6][2]; cout<<t[6][2];cout<<t[6][2]; cout<<"|"; cout<<t[6][3];cout<<t[6][3];cout<<t[6][3];cout<<"|"; cout<<t[6][4];cout<<t[6][4];cout<<t[6][4]; cout<<"|"; cout<<t[6][5];cout<<t[6][5];cout<<t[6][5]; cout<<"|";cout<<t[6][6];cout<<t[6][6];cout<<t[6][6]; cout<<"|";cout<<t[6][7];cout<<t[6][7];cout<<t[6][7]; cout<<"|";cout<<t[6][8];cout<<t[6][8];cout<<t[6][8]; cout<<"|"; cout<<t[6][9];cout<<t[6][9];cout<<t[6][9];cout<<"|\n";
cout<<" |"; cout<<t[6][0];cout<<t[6][0];cout<<t[6][0]; cout<<"|"; cout<<t[6][1];cout<<t[6][1];cout<<t[6][1]; cout<<"|"; cout<<t[6][2]; cout<<t[6][2];cout<<t[6][2]; cout<<"|"; cout<<t[6][3];cout<<t[6][3];cout<<t[6][3];cout<<"|"; cout<<t[6][4];cout<<t[6][4];cout<<t[6][4]; cout<<"|"; cout<<t[6][5];cout<<t[6][5];cout<<t[6][5]; cout<<"|";cout<<t[6][6];cout<<t[6][6];cout<<t[6][6]; cout<<"|";cout<<t[6][7];cout<<t[6][7];cout<<t[6][7]; cout<<"|";cout<<t[6][8];cout<<t[6][8];cout<<t[6][8]; cout<<"|"; cout<<t[6][9];cout<<t[6][9];cout<<t[6][9];cout<<"|\n";
cout<<"  ---------------------------------------\n";

    }
int main(){
zerar();
    t[0][0]="0";
        t[0][1]="0";
            t[0][2]="0";
                t[4][1]="0";

tab();










system("pause");

};

