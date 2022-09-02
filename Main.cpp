#include <iostream>

using namespace std;

int main() {

	string usernamePassword, temp;
	int lengthUser, lengthPass;

	cout << "Silahkan Login akun anda" << endl;
	
	cout << "Username : ";
	cin >> username;

	cout << "Password : ";
	cin >> temp;

	lengthUser = username.length();
	lengthPass = temp.length();
	usernamePassword = username + temp;

	system("cls");

	cout << "Username anda : ";
	for (int i = 0; i < (lengthUser); i++) {
		cout << username[i];
		
		if (i == lengthUser - 1) {
			cout << "\nPassword anda : ";
			for (int j = i; j < (lengthUser + lengthPass); j++) {
				cout << username[j + 1];
			}
		}
	}

	username = temp = "";
	lengthUser = lengthPass = 0;

	cout << endl << endl;

	system("Pause");
	return 0;
}