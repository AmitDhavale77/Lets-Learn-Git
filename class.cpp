#include<iostream>
using namespace std;
class obj{
	
	public:
	int a;
	float h;
		void assign(int x,float y)
		{
			a=x;
			h=y;
		}
		void display()
		{
			cout<<"age is "<<a<<endl;
			cout<<"height is"<<h<<endl;
		}
		obj sum(obj a1)
		{
			obj b;
			b.a=a+a1.a;
			b.h=h+a1.h;
			return b;
		}
};
int main()
{
	obj p,q,r;
	p.assign(20,150.2);
	p.display();
	q.assign(30,20.5);
	q.display();
	r=p.sum(q);
	cout<<"total age is "<<r.a<<endl;
	cout<<"total height is "<<r.h;
	
}
