#include<bits/stdc++.h>
#include<locale.h>
using namespace std;
float delta (float,float,float);
float x1 (float,float,float);
float x2 (float,float,float);
int main ()
{
	float a,b,c,d;
	setlocale(LC_ALL,"portuguese");
	cout << "a= ";cin >> a;
	cout << endl;
	cout << "b= ";cin >> b; 
	cout << endl;
	cout << "c= ";cin >> c;
	cout << "\n \n";
	cout << a<<"x^2 "<<b<<"x "<<c<<endl;	
	d = delta(a,b,c);
	if (d<0)
	cout << "Não é possivel ter o x1 e x2, pois, o delta e negativo \n ";
	else{
	cout << fixed << setprecision(2);
	cout << "Delta = " << d <<endl;
	cout << "x1 = " << x1(a,b,d)<<endl;
	cout << "x2 = " << x2(a,b,d)<<endl;
	cout << "Vertice = " << -(b/(2*a))<<endl;
	system("pause");
	}
	return 0;
}
float delta (float x, float y, float z)
{
	return ((pow(y,2))-4*x*z);
}
float x1 (float x,float y, float z)
{
	return (((-y)+sqrt(z))/(2*x));
}
float x2 (float x,float y, float z)
{
	return (((-y)-sqrt(z))/(2*x));
}
