#include <iostream.h>
#include <conio.h>
class Multitable{
private:
    int num;
public:
    void table(){
        cout<<"Enter a Number you want to get the multiplication table for ";
        cin>>num;
        for (int i=1;i<=10;i++){
            cout<<num<<"*"<<i<<"="<<num * i<<endl;
        }
    }

};
int main(){
    clrscr();
    Multitable t;
    t.table();
    getch();
    return 0;
}