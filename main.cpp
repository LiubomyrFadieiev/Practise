#include <iostream>
#include <windows.h>
#include "groups.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char small_letters[] = "àáâã´äåºæçè³¿éêëìíîïğñòóôõö÷øùüşÿıû¸ú";
	char big_letters[] = "ÀÁÂÃ¥ÄÅªÆÇÈ²¯ÉÊËÌÍÎÏĞÑÒÓÔÕÖ×ØÙÜŞ×İÛ¨Ú";
	int unsigned const rows = 10;
	string arr[rows];
	read_groups(arr, rows);
	change_groups(arr, rows);
	int a = count_groups(arr);
	write_groups(arr, a);
}