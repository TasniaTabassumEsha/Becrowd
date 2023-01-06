///Distance Between Two Points
///Distance Between Two Points

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{

    double dis,p1,p2, x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    p1= pow(x2-x1,2);
    p2=pow(y2-y1,2);
    dis=sqrt(p1+p2);
    cout<<fixed<<setprecision(4);
    cout<<dis<<endl;;

    return 0;
}

