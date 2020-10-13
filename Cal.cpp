#include <iostream>
using namespace std;
int fnum,snum;
class outpu{
    public:
   void sum(){ 
   cout <<"YOUR OPERATOR = '+'\tThe Sum is :"<<fnum+snum<<endl;
   }
   void prod(){ 
   cout <<"YOUR OPERATOR = '*'\tThe Product is :"<<fnum*snum<<endl;
   }
   void diff(){ 
   cout <<"YOUR OPERATOR = '-'\tThe Difference is :"<<fnum-snum<<endl;
   }
   void qou(){ 
   cout <<"YOUR OPERATOR = '/'\tThe Qoutient is :"<<fnum/snum<<endl;
   }
   void design(){
       cout <<"=========================================="<<endl;
   }
};

int main() {
    
    outpu myobj;
    char op;
    myobj.design();
    cout << "ENTER FIRST NUMBER :";
    cin >> fnum;
    cout << "ENTER SECOND NUMBER :";
    cin >> snum;
    cout << "List \t'+'\t '-'\t '/' \t'*'"<<endl;
    cout << "Enter an operator :"<;
    cin >> op;
    switch (op){
        case '+':
          myobj.design();
          myobj.sum();
          myobj.design();
          break;
          case '*':
          myobj.design();
          myobj.prod();
          myobj.design();
          break;
          case '-':
          myobj.design();
          myobj.diff();
          myobj.design();
          break;
          case '/':
          myobj.design();
          myobj.qou();
          myobj.design();
          break;
          default :
          cout <<"Invalid!";
           
    }
    return 0;
}