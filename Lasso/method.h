#pragma once
#include <iostream>
class Data
{
public:
	int n;
	double* A, b;
};

enum Status
{
	ERROR = 0, SOLVED = 1, UNBOUNDED = 2
};

class Solution
{
	double* sol;
	double value, time;
	Status status;
};

class Method
{
public:
	Data* data;
	virtual Status solve();
	Solution* solution;
};
