


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