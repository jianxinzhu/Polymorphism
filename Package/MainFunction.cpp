/*
name: jianxin zhu
date: aug/16/2020
*/

#include<iostream>
#include<vector>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OverNightPackage.h"

using namespace std;
int main()
{
	vector<Package*>packageList{ new TwoDayPackage{"John Zhu","3313 Atlantic Ave, Brooklyn NY 11220",30, 1.35},
	new OverNightPackage{"Alex Don","1128 6th Ave, New York, NY, 10013", 10, 1.35, 20.00} };
	
	for (Package* packagePtr : packageList)
	{
		cout << "------------------" << endl;
		cout<<packagePtr->toString();
	}
}
