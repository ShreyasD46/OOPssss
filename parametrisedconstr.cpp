2.Parameterized Constructors:-The constructors that take parameters are called
parameterized constructors.
#include<iostream.h>
class item
{
int m,n;
public:
item(int x, int y)
{
m=x;
n=y;
}
};
// When a constructor has been parameterized, the object declaration statement such as
// item t; may not work. We must pass the initial values as arguments to the constructor function
// when an object is declared. This can be done in 2 ways: item t=item(10,20); //explicit call
// item t(10,20); //implicit call
// Eg:
#include<iostream.h>
#include<conio.h>
class item
{
int m,n;
public:
item(int x,int y)
{
m=x;
n=y;
}
void put();
};
void item::put()
{
cout<<m<<n;
}
void main()
{
item t1(10,20);
item t2=item(20,30);
t1.put();
t2.put();
getch();
}