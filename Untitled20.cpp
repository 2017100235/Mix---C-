#include<bits/stdc++.h>
using namespace std;

struct registro{

char nome[40];
float nota;
};

int main()
{

struct registro aluno[5];
int i;
float media = 7;


for (i=0;i<5;i++)
{
    setbuf(stdin,NULL);
    cout << "nome :";
    gets(aluno[i].nome);setbuf(stdin,NULL);
    cout << "\nnota: ";
    cin >> aluno[i].nota;setbuf(stdin,NULL);
}
for(i=0;i<5;i++)
{
    if (aluno[i].nota>=media)
    {
        cout << fixed << setprecision(2);
        cout<<aluno[i].nome<< "sua nota e "<< aluno[i].nota<<endl;
    }
}
return 0;
}
