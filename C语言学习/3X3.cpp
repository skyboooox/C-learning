#include<iostream>
#include<cmath> 
using namespace std;

int a[11]={0,1,2,3,4,5,6,7,8,9,10},i,x[11]sum=0;
bool buffer(int a,int b)
{
	int c=a+b,counter=0;
	for(int i=2;i<=sqrt(c);i++)
	{
		if(c%i==0)counter++;
	 } 
	if(counter!=0)return true;
	else return false;
 } 
 
int main()
{
	if(i==11)
	{
		for(int i=1;i<9;i++)
		{
			if(buffer(x[i],x[i+1]))return; 
		}
		if(buffer(x[8],x[1])||buffer(x[9],x[2])||buffer(x[9],x[4])||buffer(x[9],x[6]))return;
		sum++;
		for(int i=1;i<=3;i++)cout<<x[i]<<' ';
		cout<<endl;
		cout<<x[8]<<' '<<x[9]<<' '<<x[4]<<endl;
		cout<<x[7]<<' '<<x[6]<<' '<<x[5]<<endl<<endl<<endl; 
	}
	else
	{
		for(int j=i;j<=10;j++)
		{
			swap(a[i],a[j]);
			x[i]=a[i];
			func(i+1);
			swap(a[i],a[j]);
		}
	};
	cout<<"总数："<<sum;
	return 0; 
 } 