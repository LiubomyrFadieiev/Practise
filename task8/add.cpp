#include <iostream>
using namespace std;
void change_groups(string arr[], int rows){
	char small_letters[] = "абвгґдеєжзиіїйклмнопрстуфхцчшщьюяэыёъ";
 	char big_letters[] = "АБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЧЭЫЁЪ";
	char au[] = "qwertyuiop";
	char AU[] = "QWERTYUIOP";
	int stringlen; string str;
	string checkch; // checkch = (check)(ch)ange
	bool dec = true;
	for (int i = 0; i<rows; i++){
		str = arr[i];
		stringlen = str.length();
		checkch = "";
		for (int ii = 0; ii<stringlen; ii++){
			for (int j = 0; j<10; j++){
				
				if (str[ii]==small_letters[j]){ checkch = checkch + big_letters[j]; dec = false; break;}
				else if (str[ii]==big_letters[j]){ checkch = checkch + small_letters[j]; dec = false; break;}
				else {dec = true;}
				}
		if (dec){checkch = checkch + str[ii];}
		}
	arr[i] = checkch;
	}
}
int count_groups(string arr[]){
	int i = 0;
	while(arr[i]!="" && i<10){
		i++;
	}
	return i;
}
void read_groups(string arr[], int rows){
	string checkr = ""; // checkr = (check)(r)ead
	bool dec = true;
	for (int i = 0; i<rows; i++){
		cout << "Введіть стрічки без пробілів для групи " << i+1 << ". Для закінчення вводу введіть крапку ('.')" <<  endl;
		getline(cin, checkr);
		if (checkr == "."){
			system("clear");
			break; 
			}
		else if (checkr.length()<3 || checkr.length()>50){
			cout << "Ви ввели неприйнятну кількість символів, попробуйте ще раз." << endl; 
			--i;
			}
		else {
			arr[i] = checkr; 
			system("clear");
			}
		}
}
void write_groups(string arr[], int count){
	for (int i = 0; i<count; i++){
		cout << "[" << i << "] = " << arr[i] << endl;
	}
}
