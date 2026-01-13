#include <iostream>
using namespace std;

// class Complex
// {
//   int a,b;
//   public:
   
//    Complex(){
//     a=0;
//     b=0;
//    }
//     Complex(int x,int y){
//       a=x;
//       b=y;
//     }
//     Complex(int x){
//       a=x;
//       b=0;
//     }
//     void printNumber(){
//       cout<<"YOUR NUMBER IS"<<a<<" + "<<b<<"i"<<endl; 
//     }
// } ;
class Simple{
  int data1;
  int data2;
  public:
  Simple(int a,int b=9){
     data1=a;
     data2=b;

  }

  void printData();
};

void Simple :: printData(){
  cout<<"the value of data is  "<< data1<<" "<<data2<<endl;

}

int main(){
  
  // Complex(4,6);
  // c1.printNumber();

  // Complex c2(5);
  // c2.printNumber();

  // Complex c3;
  // c3.printNumber();
  Simple s(1);
  s.printData();

  

  return 0; 
}
