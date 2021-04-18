#include<iostream>
#include<cmath>
using namespace std;
class Date
{
private:
int m;
int d;
int y;

public:
Date(int,int,int);
int LeapYear(Date&);
int getDiff(Date&);
int Operator-(Date&);
};
Date::Date(int a,int b,int c)
{
	m=a;
	d=b;
	y=c;
}
const int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int Date::LeapYear(Date&d)
{
	int years=d.y;
	if(d.m<=2)
		years--;
	return years/4-years/100+years/400;
}
int Date::getDiff(Date& temp)
{
	int n1=temp.y*365+temp.d;
	for(int i=0;i<temp.m-1;i++)
	{
		n1+=monthDays[i];
		n1+=LeapYear(temp);
	}

	return n1;
}
int Date::operator-(Date& d)
{
	int diff=getDiff(d);
	return diff;

}
int main()
{
	int day,month,year,end,start;
	char c;
	cout<<"Enter a start date in dd/mm/yyyy format:"<<endl;
	cin>>month>>c>>day>>c>>year;
	Date start=Date(month,day,year);
	cout<<"Enter an end date in dd/mm/yyyy format:"<<endl;
	cin>>month>>c>>day>>c>>year;
	Date end=Date(month,day,year);
	cin>>month>>c>>day>>c>>year;
	Date end=Date(month,day,year);
	int duration=end-start;
	cout<<"The number of days between those two dates are:"<<duration<<endl;
	return 0;
}
