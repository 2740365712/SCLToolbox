#include <windows.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
typedef long long ll;
char ca[10] = "getsum";
char syscommand[100]="shutdown -s -t ";
int cmd, len;
int knowit(char a[100]);
void pingtool();
int main() {
	char input[100];
	while (1) {
		cout << "---------------------------------------------------------------\n���������й�����-SCLToolbox v1.0-beta(20220122)\n���ܲ˵�:\n0.�˳�\n1.����\n2.����\n3.����ָ���\n4.��������\n5.Windows�ػ�С����\n---------------------------------------------------------------\n������ָ�";
		cin >> input;
		len = strlen(input);
		len < 100 ? cmd = knowit(input) : cmd = -1;
		system("cls");
		if (cmd == 0) {
			cout << "Goodbye!";
			break;
		} else if (cmd == 1) {
			cout << "����汾��v1.0-beta(20220122)\n���ߣ��������ࣨ��ҹStarlit-Night��\n�������ڣ�2022��1��22��\nPowered by CPlusPlus";
			Sleep(3000);
		} else if (cmd == 2) {
		} else if (cmd == 3) {
			pingtool();
		} else if (cmd == 4) {
			cout << "��������\n"
			     << "1.���ָ����������λС������\ngetsum n a1 a2 a3 ...... an"
			     << "\n2.��ȡ���°汾��\n���� https://github.com/2740365712/SCLToolbox/releases"
			     << "\n";
			Sleep(3000);
		} else if (cmd == 5) {
			cout << "Windows�ػ�С���֣�20220120��\n��1�������ػ�\n��2������ע��\n��3����������\n��4�����ö�ʱ�ػ�\n��5��ȡ���ػ��ƻ�\n����������ѡ��";
			int userchoice;
			cin >> userchoice;
			switch (userchoice) {
				case 1:
					system("shutdown -p");
					break;
				case 2:
					system("shutdown -l");
					break;
				case 3:
					system("shutdown -r");
					break;
				case 4:
					char sdtime[5];
					printf("�����ڶ������ػ�����0-99999����");
					scanf("%s",sdtime);
					system(strcat(syscommand,sdtime));
					break;
				case 5:
					system("shutdown -a");
					break;
			}
		} else if (cmd == 101) {
			int n;
			double num[10000], sum = 0;
			cin >> n;
			for (int i = 0; i < n; i++) {
				cin >> num[i];
				sum += num[i];
			}
			printf("%.2f\n", sum);
		} else
			cout << "No such command!\n";
	}
	return 0;
}
int knowit(char a[100]) {
	if (len == 1 && a[0] >= '0' && a[0] <= '9') {
		return a[0] - '0';
	} else if (!strcmp(a, ca)) {
		return 101;
	}
	return -1;
}
void pingtool() {
	while (1) {
		int a, pto = 1;
		cout << "����ָ��ߣ��汾20220122��\n-----------------------------------------\n�����б�\n[0]�˳�\n[1]��ʼping����\n[2]��ʼtracert��·�ɸ��٣�����\n[3]����\n-----------------------------------------\n�����룺";
		scanf("%d", &a);
		if (a == 0)
			return;
		else if (a == 1) {
			system("cls");
			switch (pto) {
				case 1:
					system("ping www.baidu.com");
					break;
				case 2:
					system("ping www.luogu.com.cn");
					break;
				case 3:
					system("ping www.ithome.com");
					break;
				default:
					system("ping www.baidu.com");
			}
			cout << endl << endl;
		} else if (a == 2) {
			system("cls");
			switch (pto) {
				case 1:
					system("tracert www.baidu.com");
					break;
				case 2:
					system("tracert www.luogu.com.cn");
					break;
				case 3:
					system("tracert www.ithome.com");
					break;
				default:
					system("tracert www.baidu.com");
			}
		} else if (a == 3) {
			cout << "\n-----------------------------------------\n��ѡ��Ҫping��tracert����վ��\n[1]�ٶȣ�Ĭ�ϣ�\n[2]���\n[3]IT֮��\n�����룺";
			cin >> pto;
			continue;
		} else
			cout << "No such command!";
	}
}
