#include<bits/stdc++.h>

using namespace std;

typedef struct
{
    string nome;
    string sexo;
    int id;
}cadastro;

void perguntas();
void sexo(cadastro *p);
void idade(cadastro *p);

int main ()
{
    int i,resp;
    bool achou;
    cadastro vet[3];

    for (i=0;i<3;i++)
    {
        cout << "\nnome: ";
        getline(cin,vet[i].nome);
        cout << "\nsexo: \n[Masculino/Feminino]";
        getline(cin,vet[i].sexo);
        cout <<"\n idade: ";
        cin>> vet[i].id;
        setbuf(stdin,NULL);
    }
    system("cls");

    achou = true;
        while(achou)
        {
            perguntas();
            cin >> resp;
            switch (resp)
            {
                case 1:
                    sexo(&vet[0]);
                    break;
                case 2:
                    idade(&vet[0]);
                    break;
                case 3:
                    cout << "Saindo do programa"<< endl;
                    achou = false;
                    break;
                default:
                    cout<< "Numero invalido"<< endl;
            }
        }

    system("pause");
    return 0;
}

void perguntas()
{
    cout<<"Escolha o tipo de busca:\n 1-Sexo\n 2-Idade\n 3-Sair "<<endl;
}

void sexo(cadastro *p)
{
    string str;
    int n;

    setbuf(stdin,NULL);
    cout<< "Qual sexo deseja busca [masculino/feminino]:\n"<< endl;
    getline(cin,str);

        for (n=0;n<3;n++)
        {
            if (strcmp(strlwr(str)strlwr(p[n].sexo))==0)
                cout <<"Nome: " <<p[n].nome << " Idade: " << p[n].id << " Sexo: " << p[n].sexo << endl;
        }
}

void idade(cadastro *p)
{
    int re,h;

    cout << "Qual idade voce quer buscar " << endl;
    cin >> re;
        for(h=0;h<3;h++)
        {
            if (re == p[h].id)
                cout << "Nome: " << p[h].nome << " Idade: " << p[h].id << " Sexo: " << p[h].sexo << endl;
        }
}
