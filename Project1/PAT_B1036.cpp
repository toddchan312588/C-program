#include<iostream>
using namespace std;
/*美国总统奥巴马不仅呼吁所有人都学习编程，甚至亲自编写代码，
成为美国历史上首位编写计算机代码的总统。
2014年底，为庆祝“计算机科学教育周”正式启动，
奥巴马编写了一个简单的计算机程序——
在屏幕上画一个正方形。现在你也跟他“一起”编程吧！*/
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