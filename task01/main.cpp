#include"util.h"
int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);

	user_init(array, length);
	print("result: ");

	bool uniqe_num = uniqe_number( array,  length);
	string msg = uniqe_num ? "uniqe number" : "not uniqe number";

	print(msg);
	return 0;
}