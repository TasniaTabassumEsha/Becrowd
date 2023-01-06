#include<iostream>
using namespace std;
int main()
{


int yr,mon,day;
cin>>day;

yr=0;
mon=0;

yr=day/365;
day=day%365;

mon=day/30;
day=day%30;



cout<<yr<<":"<<mon<<":"<<day<<endl;

return 0;
}
