#include <iostream>
using namespace std;
int main()
{
	float x,y;
	cin>>x>>y;
	if (x<y){
		cout<<x<<" es menor";
	}else if(x==y){
		cout<<"son iguales";
	}else{
		cout<<x<<" es mayor";
	}
	return (0);
}
