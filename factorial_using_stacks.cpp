#include <iostream.h>
#include <conio.h>
class Fact{
private:
    int num;
    int answer;
public:
    void inputs(){
      cout<<"enter number ";
        cin>> num;
      answer=factorial(num);
      cout<<"factorial of given number is "<<n<<" is "<<answer;
    }
    int factorial(num){
        int factor=1;
        if (num==0){
          return 1;
        }else{
          answer=num*factorial(num-1);
        }
        return answer;
    }
};
int main(){
    clrscr();
    Fact f;
    f.inputs();
    getch();
    return 0;
}
