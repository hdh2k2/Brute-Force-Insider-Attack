#include<iostream>
#include<string>

using namespace std;

const string listChar = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=,./';][|<>?:";

void inputPassWord(string &copy) {
	copy = "";
	string pass;
	cout << "Input password: ";
	getline(cin, pass);
	copy = pass;
}

void attack() {
	string copy;
	inputPassWord(copy);
	string res = "";
	int count = 0;
	int j = 0;
	for (int i = 0; i < listChar.length(); i++) {
		count++;
		if (listChar[i] == copy[j]) {
			res += listChar[i];
			j++;
			i = -1;
		}
		
		if (res == copy)
			break;
			
	}

	cout <<"\n\n\nPassword: " << res;
	cout << "\nTimes: " << count;
}

int main() {
	attack();
}