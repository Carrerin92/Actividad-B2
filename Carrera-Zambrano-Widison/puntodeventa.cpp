#include<iostream>
using namespace std;
int main()
{
     float x,a,tb,pdesc=0.1,vdesc,tdd,piva=0.12,viva,tf;
     int i=0, l=0;
     cin>>l;
     do{
        cin>>x;
        i=i+1;
        a=a+x;
     }while(i<l);
     tb=a;
     vdesc=tb*pdesc;
     tdd=tb-vdesc;
     viva=tdd*piva;
     tf=tdd+viva;
     cout<<tf<<endl;
     return (0);
}
