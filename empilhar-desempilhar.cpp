#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n,i;
    string s;

    cout << "digite: "<< endl;
    getline(cin,s);
    stack<char>p;
        i = s.size();
        for (n=0;n<i;n++)
            p.push(s[n]);
        while (!p.empty())
        {
            cout<<p.top()<<endl;
            p.pop();
        }
    system("pause");
    return 0;
}
