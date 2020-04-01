#include <iostream>
#include <windows.h>
#include "groups.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char small_letters[] = "��������賿������������������������";
	char big_letters[] = "���å�Ū��Ȳ����������������������ۨ�";
	int unsigned const rows = 10;
	string arr[rows];
	read_groups(arr, rows);
	change_groups(arr, rows);
	int a = count_groups(arr);
	write_groups(arr, a);
}