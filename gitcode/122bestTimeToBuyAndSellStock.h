#pragma once
//买卖股票的最佳时机
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
using namespace std;
int maxprofit(vector<int>& prices)
{
	int ans = 0,n=prices.size();
	for (int i = 1; i <n; ++i)
	{
		ans += max(0, prices[i] - prices[i - 1]);
	}
	return ans;
}
//int main()
//{
//	vector<int> prices{ 7,1,5,3,6,4 };
//	cout<<"最大利润："<<maxprofit(prices);
//	return 0;
//}

