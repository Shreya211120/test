#include<iostream>
using namespace std;
class B
{
	public:B(){cout<<endl<<"Bank Account";}
	void w() {cout<<endl<<"Base w";}
};
class S:public B{
	public:S(){cout<<endl<<"Savings";}
	void w() {cout<<endl<<"SA w";}
};
class C:public B{
	public:C(){cout<<endl<<"Current";}
	void w(){cout<<endl<<"CA w";}
};
int main()
{
	/*D *p=new D;
	p->f();*/
	B *r[2];
	r[0]=new S;
	r[1]=new C;
	for(int i=0;i<2;i++)
		r[i]->w();
	return 0;
}
