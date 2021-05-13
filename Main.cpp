#include <bits/stdc++.h>
using namespace std;
long double Vc;
long double Vs;
long double t;
long double enda;
long double endb;
int out;
int main() {
	while (1) {
		printf("车速");
		cin >> Vc;
		printf("声速");
		cin >> Vs;
		printf("时间");
		cin >> t;
		enda = (Vc + Vs) * (t / 2);
		endb = (Vs - Vc) * (t / 2);
		cout << "加:";
		cout << enda << endl;
		cout << "减:";
		cout << endb << endl;
		
		//printf(enda);
		//system("pause");
		//cout <<sizeof(long double) << endl;
		printf("退出1,继续0\n");
		cin >> out;
		if (out == 1) {
			return 0;
		}
	}
}
