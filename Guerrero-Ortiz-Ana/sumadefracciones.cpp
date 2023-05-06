#include <iostream>
using namespace std;
int main()
{
	int a1,a2,b1,b2,c1,c2;
	cout<<"inserte el numerador y denominador de la 1ra cantidad\n";
	cin>>a1>>a2;
	cout<<"inserte el numerador y denominador de la 2da cantidad\n";
	cin>>b1>>b2;
	if(a2==b2){
		c1=a1+b1;
		cout<<"la suma entre "<<a1<<"/"<<a2<<" y "<<b1<<"/"<<b2<<" es "<<c1<<"/"<<b2;
	}else{
		c2=b2*a2;
		c1=(a1*b2)+(b1*a2);
		cout<<"la suma entre "<<a1<<"/"<<a2<<" y "<<b1<<"/"<<b2<<" es "<<c1<<"/"<<c2;
	}
}
