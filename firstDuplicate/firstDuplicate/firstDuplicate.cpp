// firstDuplicate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

int firstDuplicate(std::vector<int> a) {
	int seen[] = { 0 };

	for (int x = 0; x < a.size(); x++)
	{
		if (a[abs(a[x]) - 1] < 0)
		{
			//return the value of the first duplicate number
			return abs(a[x]);
		}
		a[abs(a[x]) - 1] *= -1;
	}
	//if there are no duplicates, return -1
	return -1;
}


int main()
{
	vector<int> myVec = { 2, 1, 3, 5, 3, 2 };
	firstDuplicate(myVec);
	cout << "The first duplicate is " << firstDuplicate(myVec) << endl;
	system("Pause");
    return 0;
}

