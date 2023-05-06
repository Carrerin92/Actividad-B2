#include <iostream>
using namespace std;
int main()
{
	float i,l,a,t;
	cout<<"Inserte el numero de variables a sumar";
	cin>>l;
	i=1;
	cout<<"inserte los valores a sumar";
	while(i<=l){
		cin>>a;
		t=t+a;
		i=i+1;
	}
	cout<<t;
}
