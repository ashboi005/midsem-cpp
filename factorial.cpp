#include <iostream.h>
#include <conio.h>
class Fact{
private:
    int num;
public:
    void factorial(){
        cout<<"enter number ";
        cin>> num;
        int factor=1;
        while(num>0){
            factor=factor*num;
            num=num-1;
        }
        cout<<factor;
    }
};
int main(){
    clrscr();
    Fact f;
    f.factorial();
    getch();
    return 0;
}
