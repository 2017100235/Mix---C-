#include<bits/stdc++.h>

using namespace std;

void entrar(int);
void listar();

typedef struct elemento
{
    char chave[100];
    elemento *prox;
}elemento;

elemento *p,*q,*prim;

int main ()
{
int resp=0,cont=0;
bool achou;

achou = true;
    while (achou)
    {
        cout << "\n1- Entrar com novos dados \n2- Listar dados \n3-Sair "<<endl;
        cin >> resp;
            switch (resp)
            {
                case 1 :
                    cont++;
                    entrar(cont);
                    break;
                case 2:
                    listar();
                    break;
                case 3:
                    cout<<"Saindo" <<endl;
                    achou = false;
                    break;
                default :
                    cout<<"Erro de digitação" << endl;
            }
        setbuf(stdin,NULL);
    }

system("pause");
return 0;
}

void entrar(int c)
{
    p = new elemento;

    setbuf(stdin,NULL);
    cout << "Digite a string: ";
    cin.getline(p->chave,100);

    fstream outfile;
    outfile.open("Dados.txt", ios :: app);
    outfile << p->chave <<endl;

    outfile.close();

        if (c == 1)
            prim = p;
        q = p;
        p = new elemento;
        q->prox = p;
}

void listar()
{
    char str[100];

    fstream infile;
    infile.open("Dados.txt", ios :: in);

        if (!infile)
            cout << "File 404" <<endl;
        else
        {
            while (infile)
            {
                infile >> str;
                cout << str << endl;
            }
        }
    infile.close();
}
