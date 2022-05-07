#include"763PartitionLabels.h"
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
