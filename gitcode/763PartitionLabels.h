#pragma once

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
using namespace std;
vector<int> partitionLabels(string s)
{
	vector<int> last(26);
	int size = s.length();
	for (int i = 0; i < size; ++i)
	{
		last[s[i] - 'a'] = i;
	}
	int start =0, end = 0;
	vector<int> ans;
	for (int i = 0; i < size; ++i)
	{
		end = max(end, last[s[i] - 'a']);
		if (i == end)
		{
			ans.push_back(end - start + 1);
			start = end + 1;
		}
	}
	return ans;
}
//int main()
//{
//	string s = "ababcbacadefegdehijhklij";
//	for (auto i : partitionLabels(s))
//	{
//		cout << i << "  ";
//	}
//	return 0;
//}

