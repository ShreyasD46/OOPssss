#include<iostream>
using namespace std;

class Point{
  int a,b;

   public:
   Point(int x,int y){
      a=x;
      b=y   ;
   }

   void displayPoint(){
    cout<<"THe point is ("<<a<<","<<b<<")"<<endl;   }
};

//Create a function (Hint:Make it a friend function) which takes 2 point objectss and computes  the distance those 2 points
int main(){
  Point p(1,1);
  p.displayPoint();

  Point q(4,6);
  q.displayPoint();
  
  return 0;
}
