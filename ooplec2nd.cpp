#include<iostream>
using namespace std;
//   class binary //student
//  {
//        string s;
//      int a,b,c;
// int roll;
// char name[20];
 
  public:
  /*  void getdata(){
  //    cout<<"Enter your roll no:"<<endl;
  //    cin>>roll ;
  //    cout<<"Enter name:"<<endl;
  //    cin>>name ;
}*/
// void read(void);
// void chk_bin(void);
// void onescomp(void);
// void display(void);
// };
   /*void putdata(){
    {cout<<"Roll no:"<<roll<<endl; 
cout<<"Name:"<<name<<endl; 
} 
   }*/
  // void binary :: read(void){
  //   cout<<"Enter a binary number"<<endl;
  //   cin>>s;
  // }
  // void binary :: chk_bin(void){
  //   for(int i=0;i< s.length();i++){
  //     if(s.at(i)!='0' && s.at(i)!= '1'){
  //       cout<<"Incorrect binary format"<<endl;
  //       exit(0);
  //     }else{cout<<"correct binary format"<<endl;}
  //   }
  // }
  // void binary :: onescomp(void){
  //   for(int i=0;i< s.length();i++){
  //     if(s.at(i)=='0'){
  //       s.at(i)='1';
  //     }
  //     else if(s.at(i)=='1'){
  //       s.at(i)='0';
  //   }
  // }}
  // void binary :: display(void) {
  //   for(int i=0;i< s.length();i++){
  //     cout<<s.at(i)<<endl;
  //   }
  // }
//      int d, e;
//      void setData(int a1,int b1,int c1);
//      void getData(){
//       cout<<"the value of a "<<a<<endl;
//       cout<<"the value of b "<<b<<endl;
//       cout<<"the value of c "<<c<<endl;
//       cout<<"the value of d "<<d<<endl;
//       cout<<"the value of e "<<e<<endl;
//    }//
  

//  void Employee :: setData(int a1,int b1,int c1){
//        a=a1;
//        b=b1;
//        c=c1;
//  }

// int main(){
//    //student harry;
//    //harry.a=134; as a is private

//   //   harry.getdata();
//   // harry.putdata();
//   //  harry.setData(1,2,4);
//   //  harry.getData();
//   binary b;
//   b.read();
//   b.chk_bin();
//   b.onescomp();
//   b.display();


//   return 0;

// }
class Shop{
   int itemId[100];
  int itemPrice[100;
  int counter;
public:
  void initCounter(void){counter=0;};
  void setPrice(void);
  void displayPrice(void);

};

void Shop:: setPrice(void){
  cout<<"Enter Id of your item no"<<counter<<endl;
  cin>> itemId[counter];
  cout<<"Enter price of your item"<<endl;
  cin>> itemPrice[counter];
    counter++;
}

void Shop:: displayPrice(void){
  for(int i=0;i<counter;i++){
    cout<<"The Price of item with Id:"<<itemId[i]<<"is"<<itemPrice[i]<<endl;
  }
}
int main(){
  Shop dukaan;
  dukaan.initCounter();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.displayPrice();
  return 0;
}
 