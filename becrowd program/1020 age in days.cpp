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



cout<<yr<<" ano(s)"<<endl<<mon<<" mes(es)"<<endl<<day<<" dia(s)"<<endl;

return 0;
}
