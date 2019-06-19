#include<bits/stdc++.h>

using namespace std;

typedef struct elemento
{
    int chave;
    elemento *prox;
}elemento;

int main ()
{
    elemento *p,*prim,*h,*q;
    int i;

    prim = NULL;
    p = new elemento;
    h = p;
    p->chave = 1;

        for (i=0;i<3;i++)
        {
            q= new elemento;
            q->chave = p->chave + 2;
            cout << h->chave << ", " << p->chave <<", "<< q->chave <<endl;
            p = q;
        }
     cout << h->chave << ", " << p->chave <<", "<< q->chave <<endl;

system("pause");
return 0;
}
