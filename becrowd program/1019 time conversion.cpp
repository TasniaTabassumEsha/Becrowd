#include<iostream>
using namespace std;
int main()
{


int h,m,s;

cin>>s;
h=0;
m=0;
h=s/3600;//sec to hr
s=s%3600;
m=s/60;// sec to min
s=s%60;//sec

cout<<h<<":"<<m<<":"<<s<<endl;

return 0;
}
