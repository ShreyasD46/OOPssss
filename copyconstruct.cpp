// Copy Constructor: A copy constructor is used to declare and initialize an object from
// another object.
// Eg:
// item t2(t1);
// or
// item t2=t1;
// 1. The process of initializing through a copy constructor is known as copy initialization.
// 2. t2=t1 will not invoke copy constructor. t1 and t2 are objects, assigns the values of t1 to t2.
// 3. A copy constructor takes a reference to an object of the same class as itself as
// an argument. 
#include<iostream.h>
class sample
{
int n;
public:
sample()
{
n=0;
}
sample(int a)
{
n=a;
}
sample(sample &x)
{
n=x.n;
}
void display()
{
cout<<n;
}
};
void main()
{
sample A(100);
sample B(A);
sample C=A;
sample D;
D=A;
A.display();
B.display();
C.display();
D.display();
}
Output: 100 100 100 100