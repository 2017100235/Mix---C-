#include<bits/stdc++.h>
using namespace std;
main ()
{
	int v;
	cin>>v;
	cout <<( ((v%4)==0 && (v%100)!=0 ) ? "e ano bisexto": "nao e ano bisexto");
}
