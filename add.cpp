#include <iostream>
#include <string>
using namespace std;

//������� ��� ���� �����
void change_groups(string arr[], int rows) {
	char small_letters[] = "��������賿������������������������";
	char big_letters[] = "���å�Ū��Ȳ����������������������ۨ�";
	int letter_len = sizeof(big_letters) / sizeof(big_letters[0]);
	char au[] = "qwertyuiopasdfghjklzxcvbnm";
	char AU[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	int stringlen; string str;
	string checkch; // checkch = (check)(ch)ange
	bool dec = true;
	for (int i = 0; i < rows; i++) {
		str = arr[i];
		stringlen = str.length();
		checkch = "";
		for (int ii = 0; ii < stringlen; ii++) {
			for (int j = 0; j < 37; j++) {

				if (str[ii] == small_letters[j]) { checkch = checkch + big_letters[j]; dec = false; break; }
				else if (str[ii] == big_letters[j]) { checkch = checkch + small_letters[j]; dec = false; break; }
				else { dec = true; }
			}
			if (dec) { checkch = checkch + str[ii]; }
		}
		arr[i] = checkch;
	}
}

// ������� ��� ����������� ���������� ���� � �����
int count_groups(string arr[]) {
	int i = 0;
	while (arr[i] != "" && i < 10) {
		i++;
	}
	return i;
}

// ������� ��� 
void read_groups(string arr[], int rows) {
	string checkr = ""; 
	bool dec = true;
	for (int i = 0; i < rows; i++) {
		cout << "������ ������ ��� ������ ��� ����� " << i + 1 << ". ��� ��������� ����� ������ ������ ('.')" << endl;
		getline(cin, checkr);
		if (checkr == ".") {
			system("cls");
			break;
		}
		else if (checkr.length() < 3 || checkr.length() > 50) {
			cout << "�� ����� ����������� ������� �������, ���������� �� ���." << endl;
			--i;
		}
		else {
			arr[i] = checkr;
			system("cls");
		}
	}
}
void write_groups(string arr[], int count) {
	for (int i = 0; i < count; i++) {
		cout << "[" << i+1 << "] = " << arr[i] << endl;
	}
}