#include <iostream>
#include <string>
int cal_com(int salary,int sale,int cp);
using namespace std;
int main()
{
	string name;
	int salary,sale,cp,tcp,total;
	cout<<"**************Homework 2***************"<<endl;
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Salary : ";
	cin>>salary;
	cout<<"Enter Sale : ";
	cin>>sale;
	cout<<"Enter Commisstion Percent: ";
	cin>>cp;
	cout<<"----------------output----------------"<<endl;
	cout<<"Your Name = "<<name<<endl;
	cout<<"Total Revenue : "<<cal_com(salary,sale,cp)<<" Bath"<<endl;
}
int cal_com(int salary,int sale,int cp)
{

	int total;
	int tcp;
	tcp = cp*sale/100;
	total = tcp+salary;
	return(total);

}