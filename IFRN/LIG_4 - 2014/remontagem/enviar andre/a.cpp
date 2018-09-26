#include <iostream>
using namespace std;
int main()
{
int n, n2, aux=0, x=0;
cin>>n;
while(n=n){
        a:
cin>>n2;
for(int t = 1; t<=n2; t++)
    {
    if(n2%t==0){aux++;}
    if(aux==2&&aux<n2){cout<<"Not Prime\n"; aux=0;}
    }

    if(aux==2){cout<<"Prime\n"; aux=0;}
    else if(aux!=2){cout<<"Not Prime\n"; aux=0;}
    x++;
    if(x==n){break;}
}
return 0;
}
