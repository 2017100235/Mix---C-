#include<bits/stdc++.h>

using namespace std;

int main ()
{
    string str;

    fstream outfile;

    outfile.open("conseguir.txt", ios:: app);
    cout<< "Digite: ";
    getline(cin,str);
    outfile << str << endl;

    outfile.close();


    fstream infile;
    infile.open("conseguir.txt");

    cout << "Eu digitei : \n" << endl;
    while (infile)
    {
        getline(infile,str);
        cout << str << endl;
    }

    infile.close();

    system("pause");
    return 0;
}
