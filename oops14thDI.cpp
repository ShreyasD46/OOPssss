#include<iostream>
using namespace std;

class BankDeposit{
  int principal;
  int years;
  float interestRate;
  float returnValue;

  public:
     BankDeposit(){}
     BankDeposit(int p,int y, float r);//r can be a value like 0.04;
     BankDeposit(int p,int y, int r);

};
 BankDeposit :: BankDeposit(int p,int y,float r)
 {
  principal = p;
  years =y;
  interestRate= r;
  returnValue=0;
  for(int i=0;i<y;)
 }



int main(){
  BankDeposit bd1,bd2, bd3;
  int p,y;
  float r;
  int R;

  cout<<"ENter the value of p y and r"<<endl;

  cin>>p>>y>>r;
  bd1 = BankDeposit(p, y ,r);
  bd1.show();

}