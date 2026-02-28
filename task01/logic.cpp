#include"logic.h"
bool uniqe_number(int array[DEFAULT_SIZE], int length) {
	for (int i = 0; i < length-1; i++)
	{
		for (int j = i+1; j < length; j++) {
			if (array[i]== array[j]) {
				return false;
			}
		}
	}

	return true;
}