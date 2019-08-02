#include <iostream>
using namespace std;

string task (unsigned  int a)
{
   if (a>1000)
    {
        if (a>1000000)return  "Ti millioner!";
        return "Horosho";
    }
    return "Rabotai bolshe";
}

   int main()
   {
    unsigned  int a ;
    cout<<"Vasha zarplata($): ";
    cin >>a;
    cout <<task(a)<<"...no ti molodec";
    return 0;
   }
