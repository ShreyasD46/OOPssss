#include<iostream>
using namespace std;

class Employee{
  int id;
  static int count;
  public:
      void setData(void){
        cout<<"entr the id "<<endl;
        cin>>id;
        count++;
      }
      void getData(void){
        
        cout<<"Id of this employee is "<<id<<"and this is employee number "<<count<<endl;
      }
      static void getCount(void){
        //cout<<id; throws an error
        cout<<"The value of count is "<<count<<endl;
      }
};
//count is static data member of class Emlpyeev
int Employee :: count;// default value 0
int main(){
  Employee harry,rohan,luv;
  harry.setData();
  harry.getData();
  Employee::getCount();

  rohan.setData();
  rohan.getData();
  Employee::getCount();

  luv.setData();
  luv.getData();
  Employee::getCount();
  return 0;
}
