#include <iostream.h>
#include <conio.h>
#include <string.h>

class Palindrome{
private:
    char str[100];

public:
    void getstring(){
        cout<<"enter string";
        cin>> str;
    }
    void checkPalindrome(){
        int length= strlen(str);
        int flag=1;
        for(int i=0;i<length/2;i++){
            if(str[i] != str[length-i-1]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"string is palindrome"<<endl;
        }else{
            cout<<"not palindrome"<<endl;
        }

    }
};
int main(){
    clrscr();
    Palindrome p;
    p.getstring();
    p.checkPalindrome();
    getch();
    return 0;
}