#include"763划分字母区间.h"
using namespace std;
int main()
{
	string s = "ababcbacadefegdehijhklij";
	for (auto i : partitionLabels(s))
	{
		cout << i << "  ";
	}
	return 0;
}
