#include <iostream.h>
#include <conio.h>
class Prime{
private:
    int num;
public:
    void checkprime(){
        cout<<"enter number ";
        cin>> num;
        if(num<=1){
            cout<<"not prime"<<endl;
            return;
        }
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                cout<<"not prime"<<endl;
                return;
            }
        }
        cout<<"prime"<<endl;
    }
};
int main(){
    clrscr();
    Prime p;
    p.checkprime();
    getch();
    return 0;
}