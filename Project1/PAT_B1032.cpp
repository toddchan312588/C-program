#include<iostream>
#include<map>
using namespace std;
/*为了用事实说明挖掘机技术到底哪家强，PAT组织了一场挖掘机技能大赛。
请根据比赛结果统计出技术最强的那个学校。*/
int main() {
	int n;
	map<int, int> m;
	scanf("%d", &n);
	int temp1, temp2;
	for (int i = 0; i < n; i++) {
		cin >> temp1 >> temp2;
		if (m.find(temp1) != m.end()) {
			m[temp1] += temp2;
		}
		else {
			m[temp1] = temp2;
		}
	}
	int school, mark=-100;
	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter) {
		if (iter->second > mark) {
			mark = iter->second;
			school = iter->first;
		}
	}
	cout << school << " " << mark;

}