#include<bits/stdc++.h>

using namespace std;

typedef struct elemento
{
    int chave;
    char vet[3];
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
            p->vet[i] = new char[6];
    strcpy(p->vet[0],"Ana");
    /*p->vet[1] = "Bia";
    p->vet[2] = "Lia";

        for (i=0;i<3;i++)
        {
            q = new elemento;
            q->vet[0] = p->vet[0] + p->vet[0,4-i];
            q->vet[1] = p->vet[1] + p->vet[1,4-i];
            q->vet[2] = p->vet[2] + p->vet[2,4-i];
            */
            cout << q->vet[0] << endl;
          //  cout << q->vet[1] << endl;
            //cout << q->vet[2] << endl;

            //p = q;
        //}

    system("pause");
    return 0;
}
