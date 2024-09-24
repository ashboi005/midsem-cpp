#include <iostream.h>
class Oddoreven{
public:

    void oddoreven(int a){

        if (a%2==0){
            cout<<a<<"is even";
        }else{
            cout<<a<<"is odd";
        }
    }
};
int main()
{
    Oddoreven a1;
    int a;
    cout<<"enter number";
    cin>>a;
    a1.oddoreven(a);
    return 0;
};