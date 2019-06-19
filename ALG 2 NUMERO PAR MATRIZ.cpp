#include<bits/stdc++.h>
using namespace std;
int main ()
{       
   int MAT[3][4];
   int a,b;
        for(a=0;a<3;a++)
        {
                for(b=0;b<4;b++)
                        cin>>MAT[a][b];
        }
        for(a=0;a<3;a++)
        {
                for(b=0;b<4;b++)
                {
                        if (MAT[a][b]%2==0)
                                cout << " Valores pares= " << MAT [a][b] << " posição" << a << "," << b << endl;
                }       
        }
   return 0;
}
