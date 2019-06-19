#include<bits/stdc++.h>
#include<locale.h>
using namespace std;

exercicios()
	{
        char exer;
        cout << " ,Você ja realizou a lista de exercicios para aprova ?"<<endl;
        cout << "[s/n] sim / não : ";
        cin >> exer;
        while (tolower(exer) == 'n')
        {
            cout<< "Humm.... Poxa vamos terminar a lista, let's go. \n ";
            cout<< "Tente novamente"<<endl;
            cin >>  exer ; 
        } 
    } 
    
parabens ()
{
    cout << " |\\        * *************** *         /|" <<endl;
    cout << " | \\    * ¨    Vc merece,    ¨  *     / |" <<endl;
    cout << " |..\\ *   ¨                  ¨    *  /..|" <<endl;
    cout << " |   O     ¨   Chocolate !!!  ¨     O   |" <<endl;
    cout << " |../  *   ¨                  ¨    * \\..|" <<endl;
    cout << " | /     * ¨   Chocolate !!!  ¨  *    \\ |" <<endl;
    cout << " |/         * *************** *        \\|" <<endl;
    cout << endl;
    cout <<setw(10)<< "<3 "<<setw(10)<< "<3" <<setw(10)<< "<3" << endl;
    cout << endl;
    cout << endl;
}

int main ()
{
    char nome [20];

    setlocale(LC_ALL,"portuguese");
    cout << "Ola tudo bom, vamos à um pequeno teste \n";
    cout << "Digite o seu nome: ";
    cin >> nome;
    system ("cls");
    cout << nome << "!!! "; 
    if (strcmp(nome,"nathaly") == 0)
	{
       	exercicios();
        system("cls");
        parabens();
        parabens();
        parabens();
    }
    else
    {
    	exercicios ();
        cout << "Ooohh, parabens, vc vai se dar muito bem na av1 !!!"<<endl;
    }
    system("pause");
	return 0;   
}

