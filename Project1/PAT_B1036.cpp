#include<iostream>
using namespace std;
/*������ͳ�°��������������˶�ѧϰ��̣��������Ա�д���룬
��Ϊ������ʷ����λ��д������������ͳ��
2014��ף�Ϊ��ף���������ѧ�����ܡ���ʽ������
�°����д��һ���򵥵ļ�������򡪡�
����Ļ�ϻ�һ�������Ρ�������Ҳ������һ�𡱱�̰ɣ�*/
int main() {
	int n;
	char ch;
	scanf("%d %c", &n, &ch);
	int row;
	if (n % 2 == 1)row = n / 2 + 1;
	else row = n / 2;

	for (int i = 0; i < n; i++) {
		cout << ch;
	}
	cout << endl;
	for (int i = 2; i < row; i++) {
		cout << ch;
		for (int j = 0; j < n - 2; j++) cout << " ";
		cout << ch << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << ch;
	}
	return 0;
}