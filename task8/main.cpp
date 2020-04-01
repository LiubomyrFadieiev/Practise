#include <iostream>
#include "groups.h"
using namespace std;

int main(){
	int unsigned const rows = 10;
	string arr[rows];
	read_groups(arr,rows);
	change_groups(arr,rows);
	int a = count_groups(arr); 
	write_groups(arr,a);
}
