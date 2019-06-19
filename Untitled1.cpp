#include<bits/stdc++.h>
#include<locale.h>
using namespace std;

struct reg
{
    char nome[40];
    float salario, salario_liquido;
    float desconto[3];
};
struct reg_2
{
    char name[40];
};

int main()
{
  struct reg funcionario[4];
  struct reg_2 funci[2];
  float sal_bruto,ma_sal_liquido,me_sal_liquido;
  int i,j;

  setlocale(LC_ALL,"portuguese");
  for(i=0;i<4;i++)                  // cadastro do funcionario
  {
      setbuf(stdin,NULL);
      cout<<"Nome: ";
      gets(funcionario[i].nome);setbuf(stdin,NULL);

      cout<<"\nSalario bruto: ";
      cin>>funcionario[i].salario;setbuf(stdin,NULL);

      sal_bruto+=funcionario[i].salario;

          for(j=0;j<3;j++)
          {
            setbuf(stdin,NULL);
            cout<<"\n"<<j+1<<"º desconto: ";
            cin>>funcionario[i].desconto[j];
          }
  }
    for(i=0;i<4;i++)                // calculo do salario liquido
    {
        funcionario[i].salario_liquido=funcionario[i].salario;
        for(j=0;j<3;j++)
            {
            funcionario[i].salario_liquido-=funcionario[i].desconto[j];
            }
    }
    ma_sal_liquido=funcionario[0].salario_liquido;
    strcpy(funci[0].name,funcionario[0].nome);

    me_sal_liquido=funcionario[1].salario_liquido;
    strcpy(funci[1].name,funcionario[0].nome);

    for(i=1;i<4;i++)   // Quem possui o maximo é o minimo de salario liquido
    {
        if (funcionario[i].salario_liquido > ma_sal_liquido)
            {
                ma_sal_liquido=funcionario[i].salario_liquido;
                strcpy(funci[0].name,funcionario[i].nome);
            }
        if (funcionario[i].salario_liquido < me_sal_liquido)
            {
                me_sal_liquido=funcionario[i].salario_liquido;
                strcpy(funci[1].name,funcionario[i].nome );
            }
    }
    cout << fixed<< setprecision(2);
    cout<<"\nO Sr.(a) "<< funci[0].name <<" tem o maior salario liquido, "<< ma_sal_liquido <<" R$"<<endl;
    cout<<"O Sr.(a) "<< funci[1].name <<" tem o menor salario liquido, "<< me_sal_liquido <<" R$"<<endl;
    cout<<"A media de salario bruto é de "<< (sal_bruto/4) <<" R$"<<endl;
    getchar();
    return 0;
}
