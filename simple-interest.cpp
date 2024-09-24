
#include <iostream.h>
#include <conio.h>
class Interest{
public:

    void interest(int p, int r, int t){
        int i=(p*r*t)/100;
        cout<<i;
    }
};
int main()
{
    clrscr();
    Interest a1;
    int p,r,t;
    cout<<"enter principle ";
    cin>>p;

    cout<<"enter rate ";
    cin>>r;

    cout<<"enter time ";
    cin>>t;

    a1.interest(p,r,t);
    getch();
    return 0;
};