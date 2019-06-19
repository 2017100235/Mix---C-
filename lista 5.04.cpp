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
    prim = p;
    p->chave = 1;

        for (i=0;i<3;i++)
        {
            q = new elemento;
            q->chave = p->chave + i;
            cout << h->chave << ", " << p->chave << ", " << q->chave << endl;
            p->prox = q;
            p = q;
        }

    cout << h->chave << ", " << p->chave << ", " << q->chave << endl;
    p = prim;
    cout << endl;
        for (i=0;i<4;i++)
        {
            cout <<p->chave <<endl;
            p = p->prox;
        }

    system("pause");
    return 0;
}
