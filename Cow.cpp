#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<fstream>
#include<string>
#include"Cow.h"

int Cow::read(vector<int> cow)
{
	int i=0;
	int in;
	string num;
	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{
		cerr<<"Failed";
		exit(1);
	}
	getline(inFile,num);
	while(inFile>>in)
	{
		cow.at(i)=in;	
		i++;
	}
	inFile.close();
}
	


int Cow::topV(vector<int> cow)
{
	int j=0;
	sort(cow.begin(),cow.end());
	int sum=0;
	for(j=8;j>8-5;j--)
	{
		sum+=cow.at(j);	
	}
	cout<<sum<<endl;
}
