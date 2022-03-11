#include<iostream>
using namespace std;
int addarray(int *p,int *q,int *r);
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={5,4,3,2,1};
	int arr[5];
	int *p,*q,*r;
	p=arr1;
	q=arr2;
	r=arr;
        int size=addarray(p,q,r);
	cout<<"size of array is "<<size<<endl;
	cout<<"elements in arr are "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<*(r+i)<<endl;
		}	
}
int addarray(int *p,int *q,int *r)
{
	for(int i=0;i<5;i++)
	{
		*(r+i)=*(p+i)+*(q+i);
	}
	int p1=5;
	return p1;
}
