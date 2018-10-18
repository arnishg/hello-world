#include <iostream>
using namespace std;
int (*p)(int,int);

int sum(int a,int b)
{
    return a+b;
}
int main() {
	// your code goes here
	int a=5;
	int b=5;
	p=sum;
    cout<<p(a,b);
	return 0;
}
