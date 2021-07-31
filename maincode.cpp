#include <windows.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
typedef long long ll;
char ca[100] = "plus";
int cmd, len;
int knowit(char a[100]);
void pingtool();
int main() {
    char input[100];
    while (1) {
        cout << "---------------------------------------------------------------\n���������й�����-SCLToolbox v0.8.1\n����ָ���˵�:\n0.�˳�\n1.����\n2.����\n3.ping����\n4.��������\n5.Windows�ػ�С����\n---------------------------------------------------------------\n������ָ�";
        cin >> input;
        len = strlen(input);
        len < 100 ? cmd = knowit(input) : cmd = -1;
        system("cls");
        if (cmd == 0) {
            cout << "Goodbye!";
            break;
        } else if (cmd == 1) {
            cout << "�����汾��v0.8.1(20210731)\n���ߣ��������ࣨ��ҹStarlit-Night��\n��д���ڣ�2021��7��31��\n";
            Sleep(3000);
        } else if (cmd == 2) {
        } else if (cmd == 3) {
            pingtool();
        } else if (cmd == 4) {
            cout << "��������\n"
                 << "1.�ӷ�����ָ�ʵ���ԣ�����������λС������\nplus n a1 a2 a3 ���� an"
                 << "\n2.��ȡ���°汾��\n���� https://github.com/2740365712/SCLToolbox/releases"
                 << "\n";
            Sleep(3000);
        } else if (cmd == 5) {
            cout << "Windows�ػ�С���֣�20210731��\n��1�����̹ػ�\n��2��30���Ӻ��ػ�\n��3��1Сʱ���ػ�\n��4��ȡ����ʱ�ػ��ƻ�\n����������ѡ����";
            int userinp;
            cin >> userinp;
            switch (userinp) {
                case 1:
                    system("shutdown -s -t 0");
                    break;
                case 2:
                    system("shutdown -s -t 1800");
                    break;
                case 3:
                    system("shutdown -s -t 3600");
                    break;
                case 4:
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
    } else {
        if (!strcmp(a, ca)) {
            return 101;
        }
    }
    return -1;
}
void pingtool() {
    while (1) {
        int a, pto = 1;
        cout << "ping���ԣ��汾20210731��\n-----------------------------------------\n�����б���\n[1]��ʼping����\n[2]�˳�\n[3]����ping����\n-----------------------------------------\n�����룺";
        scanf("%d", &a);
        if (a == 1) {
            system("cls");
            cout << "���ڿ�ʼping......";
            switch (pto) {
                case 1:
                    system("ping www.luogu.com.cn");
                    break;
                case 2:
                    system("ping www.cloudflare.com");
                    break;
                case 3:
                    system("ping www.ithome.com");
                    break;
                default:
                    system("ping www.luogu.com.cn");
            }
            cout << "\n\n";
        } else if (a == 2)
            break;
        else if (a == 3) {
            cout << "\n-----------------------------------------\n����Ҫping����վ��\n[1]���ȣ�Ĭ�ϣ�\n[2]Cloudflare\n[3]IT֮��\n�����룺";
            cin >> pto;
            continue;
        } else
            cout << "No such command!";
    }
}
