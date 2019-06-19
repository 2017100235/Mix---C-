#include<bits/stdc++.h>
using namespace std;
int main ()
{       
   int X[3][3],Y[3][3],Z[3][3];
   int a,b;
        for(a=0;a<3;a++)
        {
                for(b=0;b<3;b++)
                {
                        cout << "matriz X " <<a <<","<<b<< "\t";
                        cin>>X[a][b];
                        
                }
        }
        for(a=0;a<3;a++)
        {
                for(b=0;b<3;b++)
                {
                        cout << "matriz Y " <<a <<","<<b<< "\t";
                        cin>>Y[a][b];
                        
                }
        }
        
        for(a=0;a<3;a++)
        {
                for(b=0;b<3;b++)
                {
                        Z[a][b] = X[a][b]+Y[a][b];
                        cout << "matriz Z " << a <<","<<b<< "\t";
                        cout << Z[a][b] << endl;
                }       
        }
return 0;
}
