#include<bits/stdc++.h>
#include<locale.h>
using namespace std;
int main ()
{		setlocale(LC_ALL,"portuguese");
        int M [3][4];
        int x [3];
        int a,b;
                for(a=0;a<3;a++)
                {
                        for(b=0;b<4;b++)
                        {
                                cout << "Matriz M " <<"posição "<< a << "," << b << "\t";
                                cin>> M[a][b];
                                        if((a=0) &&(b=0))
                                        {
                                                x[0] = M[a][b];
                                                x[1] = a;
                                                x[2] = b;   
                                        }
                                        else if(M[a][b]>x[0])
                                                {
                                                        x[0] = M[a][b];
                                                        x[1] = a;
                                                        x[2] = b;
                                                }
                        }
                }
        
                cout << "O maior valor digitado foi = " << x[0] << endl;
                cout << "posição = " << x[1] << "," << x[2] << endl;
return 0;
}
