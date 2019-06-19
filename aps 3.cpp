#include<bits/stdc++.h>

using namespace std;

void add();
void sub();
void mpy();
void divd();
void dec();

stack<int>pilha;

int main ()
{
    int  A=9,B=3,C=2,D=1,E=1;

    pilha.push(A);
    cout<< pilha.top()<<endl;
    pilha.push(B);
    cout<< pilha.top()<<endl;
    sub();
    cout<< pilha.top()<<endl;
    pilha.push(C);
    cout<< pilha.top()<<endl;
    pilha.push(D);
    cout<< pilha.top()<<endl;
    pilha.push(E);
    cout<< pilha.top()<<endl;
    mpy();
    cout<< pilha.top()<<endl;
    add();
    cout<< pilha.top()<<endl;
    dec();
    cout<< pilha.top()<<endl;
    divd();
    cout<< pilha.top()<<endl;
    pilha.pop();

    system("pause");
    return 0;
}

void sub ()
{
    int x=0,y=0,z=0;

    y = pilha.top();
    pilha.pop();
    x = pilha.top();
    pilha.pop();
    z = x - y;
    pilha.push(z);
}

void add ()
{
    int x=0,y=0,z=0;

    y = pilha.top();
    pilha.pop();
    x = pilha.top();
    pilha.pop();
    z = x + y;
    pilha.push(z);
}

void mpy ()
{
    int x=0,y=0,z=0;

    y = pilha.top();
    pilha.pop();
    x = pilha.top();
    pilha.pop();
    z = x * y;
    pilha.push(z);
}

void divd ()
{
    int x=0,y=0,z=0;

    y = pilha.top();
    pilha.pop();
    x = pilha.top();
    pilha.pop();
    z = x/y;
    pilha.push(z);
}

void dec()
{
   int y=0;

   y = pilha.top();
   pilha.pop();
   y -=1;
   pilha.push(y);
}
