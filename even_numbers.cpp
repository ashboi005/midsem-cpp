#include <iostream.h>
#include <conio.h>
class Even{
private:
    int num;
public:
    void printeven(){
        cout<<"enter number"<<endl;
        cin>>num;
        for(int i=0; i<num; i++){
            if(i%2==0){
                cout<<i<<endl;
            }
        }
    }
};
int main(){
    clrscr();
    Even e;
    e.printeven();
    getch();
    return 0;
}