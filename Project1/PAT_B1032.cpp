#include<iostream>
#include<map>
using namespace std;
/*Ϊ������ʵ˵���ھ�����������ļ�ǿ��PAT��֯��һ���ھ�����ܴ�����
����ݱ������ͳ�Ƴ�������ǿ���Ǹ�ѧУ��*/
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