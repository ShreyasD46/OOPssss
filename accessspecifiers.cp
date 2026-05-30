#include<stdio.h>
using namespace std;
class Student{
  private:int roll;
  char name[30];

  public:
  void get_data()
  {
  cout<<"Enter roll nnum  name:"
  cin>>roll>>name;
  }

  void put_data(){
    cout<<"ROll nnnuber:" <<roll<<endl;
    cout<<"Name"
  }

};