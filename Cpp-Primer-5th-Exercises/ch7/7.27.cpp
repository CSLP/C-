#include<iostream>
#include"Screen.h"
using std::cout;
using std::cin;
using std::endl;
int main()
{
    Screen myScreen(5,5,'X');
    myScreen.display(cout);
    cout<<"\n";
    myScreen.move(4,0).set('#').display(cout);
    cout<<"\n";
    myScreen.display(cout);
    cout<<"\n";
}
