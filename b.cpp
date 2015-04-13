#include<vector>
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include"Clock.h"
using namespace std;
void insertion_sort(vector<int> &v)
{
	int insert, moveitem;
	for(int next=1; next<v.size();++next)
	{
		insert=v.at(next);
		moveitem=next;
		while((moveitem>0)&&(v.at(moveitem-1)>insert))
		{
			v.at(moveitem)=v.at(moveitem-1);
			--moveitem;
		}
		v.at(moveitem)=insert;
	}
}

int main()
{
	Clock clk;
	int size =100000;
	vector<int> v1(size),v2;
	srandom(time(NULL));
	for(int j=0;j<4;j++)
	{
	size/=10^j;
	for(int i=0;i<size;++i)
		vi.at(i)=random();
	v2=v1;
	clk.start();
	sort(v1.begin(),v1.end());
	cout<<"sort():"<<clk.getElapsedTime()<<"seconds\n";
	cout<<"v1/v2 are"<<((v1==v2)?"the same. \n":"different. \n");
	clk.start();
	insertion_sort(v2);
	cout<< "insertion_sort():"<<clk.getElapsedTime()<<"seconds\n";
	cout<<"v1/v2 are"<<((v1==v2)?"the same.\n":"different.\n");
	}
	return 0;
}
