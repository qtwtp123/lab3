#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<fstream>
#include<string>
#include"Cow.h"
using namespace std;
int main()
{
	Cow a;
	vector<int> cow(8);
	a.read(cow);
	a.topV(cow);
	return 0;
}
