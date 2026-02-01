// CHARACTERISTICS OF CONSTRUCTOR
// 
// They should be declared in the public section.
// 
// They are invoked automatically when the objects are created.
// 
// They do not have return type, not even void. 
// They cannot be inherited, though a derived class can call the base class constructor. 
// Like other c++ functions, they can have default arguments.
// 
// Constructors cannot be virtual.
// 
// We cannot refer to their addresses.
// 
// They make „implicit calls‟ to the operators new and delete when memory allocation is required.
// Constructors are of 3 types:
// 1. Default Constructor
// 2. Parameterized Constructor
// 3. Copy Constructor

1.default constructors:a constructors that accepts no parameters
#include<iostream.h>
#include<conio.h>
class item{
  private:
  int m,n;
  public:
  item(){
    m = 10;
    n = 20;
  }
  void put();
};
void item :: put
{
  cout<<m<<n;
}

void main(){
  item t;
  t.put();
  getch();
}