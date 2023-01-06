#include <iostream>

using namespace std;

int main()
{

int money;
cin>>money;
cout<<money<<endl;

cout<<""<<money/100<<" nota(s) de R$ 100,00"<<endl;
money=money % 100;

cout<<""<<money/50<<" nota(s) de R$ 50,00"<<endl;
money=money%50;

cout<<""<<money/20<<" nota(s) de R$ 20,00 "<<endl;
money=money % 20;

cout<<""<<money/10<<" nota(s) de R$ 10,00"<<endl;
money=money%10;

cout<<""<<money/5<<" nota(s) de R$ 5,00"<<endl;
money=money % 5;

cout<<""<<money/2<<" nota(s) de R$ 2,00"<<endl;
money=money%2;

cout<<""<<money/1<<" nota(s) de R$ 1,00"<<endl;


    return 0;
}

