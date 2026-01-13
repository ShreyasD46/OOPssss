#include<iostream>
using namespace std;

//forward declaration
// class complex;

// class Calculator{
//    public:
//    int add(int a,int b){
//     return (a+b);
//    }
//    int sumRealComplex(Complex,Complex);
//    int sumCompComplex(Complex,Complex);
// };

// class Complex{
//   int a;
//   int b;
//   //individually declaring friends AS FUNCTIONS
//   // friend int Calculator :: sumRealComplex(Complex,Complex);
//   // friend int Calculator :: sumRealComplex(Complex,Complex);

//   //DECLARE ENTIRE CALCULATOR CLASS AS FRIEND

//   friend class Calulator;

//    public:
//    void setNumber(int n1,int n2){
//     a=n1;
//     b=n2;
//    }
//    void printNumber(){
//     cout<<"your cmplex number is: "<<a<<" + "<<b<<"i"<<endl;
//    }
// };

//  int Calculator:: sumRealComplex(Complex o1,Complex o2){
//   return (o1.a + o2.a);
// }
// int Calculator:: sumCompComplex(Complex o1,Complex o2){
//   return (o1.b+ o2.b);
// }

class Complex{
  int a,b;
  public:
  //Creating a constructor
  //constructor is a special member function with same name as of clsss,automatically invoked whenever a object is created
  //used tok inistialize the objectsn
  // Complex(void);//constructor declaration//it is a default xnon 
  Complex(int,int);//parametrised constructor
  void printNumber(){
    cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
  }
};

Complex :: Complex(int x,int y)//this is a parametrised constuctor
{
  a=x;
  b=y;
  //cout<<"Hello world";
}
int main(){
  //implicit call
  Complex a(4,6);
  //explicit call
  Complex b = Complex(5,7);
  a.printNumber();
  b.printNumber();
  // Complex o1,o2;
  // o1.setNumber(1,5);
  // o2.setNumber(5,7);
  // Calculator calc;
  // int res=calc.sumRealComplex(o1,o2);
  // cout<<"The sum of ral part of o1 n o2 is"<<res<<endl;
  // int resc=calc.sumCompComplex(o1,o2);
  // cout<<"The sum of ral part of o1 n o2 is"<<res<<endl;

  return 0;
}