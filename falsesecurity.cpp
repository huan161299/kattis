#include <iostream>
#include <string>

using namespace std;

void library(string::iterator character, string* symbol, string* nums) {
	
	switch (*character) {
	case 'A':
		*symbol += ".-";
		*nums += "2";
		break;

	case 'B':
		*symbol += "-...";
		*nums += "4";
		break;

	case 'C':
		*symbol += "-.-.";
		*nums += "4";
		break;

	case 'D':
		*symbol += "-..";
		*nums += "3";
		break;

	case 'E':
		*symbol += ".";
		*nums += "1";
		break;

	case 'F':
		*symbol += "..-.";
		*nums += "4";
		break;

	case 'G':
		*symbol += "--.";
		*nums += "3";
		break;

	case 'H':
		*symbol += "....";
		*nums += "4";
		break;

	case 'I':
		*symbol += "..";
		*nums += "2";
		break;

	case 'J':
		*symbol += ".---";
		*nums += "4";
		break;

	case 'K':
		*symbol += "-.-";
		*nums += "3";
		break;

	case 'L':
		*symbol += ".-..";
		*nums += "4";
		break;

	case 'M':
		*symbol += "--";
		*nums += "2";
		break;

	case 'N':
		*symbol += "-.";
		*nums += "2";
		break;

	case 'O':
		*symbol += "---";
		*nums += "3";
		break;

	case 'P':
		*symbol += ".--.";
		*nums += "4";
		break;

	case 'Q':
		*symbol += "--.-";
		*nums += "4";
		break;

	case 'R':
		*symbol += ".-.";
		*nums += "3";
		break;

	case 'S':
		*symbol += "...";
		*nums += "3";
		break;

	case 'T':
		*symbol += "-";
		*nums += "1";
		break;

	case 'U':
		*symbol += "..-";
		*nums += "3";
		break;

	case 'V':
		*symbol += "...-";
		*nums += "4";
		break;
	case 'W':
		*symbol += ".--";
		*nums += "3";
		break;

	case 'X':
		*symbol += "-..-";
		*nums += "4";
		break;

	case 'Y':
		*symbol += "-.--";
		*nums += "4";
		break;

	case 'Z':
		*symbol += "--..";
		*nums += "4";
		break;

	case '_':
		*symbol += "..--";
		*nums += "4";
		break;

	case ',':
		*symbol += ".-.-";
		*nums += "4";
		break;

	case '.':
		*symbol += "---.";
		*nums += "4";
		break;

	case '?':
		*symbol += "----";
		*nums += "4";
		break;
	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string input;

	while (getline(cin, input)) {
		string symbol = "", nums = "";

		for (auto character = input.begin(); character != input.end(); ++character)
			library(character, &symbol, &nums);
		
		string::iterator temp = symbol.begin();
		for (auto num = nums.rbegin(); num != nums.rend(); ++num) {
			int count = (int)*num - 48 + 1;
			int state = 0;

			while (count > 0) {
				--count;

				switch (state) {
				case 0:
					if (*temp == '.') state = 1;
					else if (*temp == '-') state = 8;
					break;

				case 1:
					if (count == 0) {
						cout << "E";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') state = 3;
					else if (*temp == '-') state = 2;
					break;

				case 2:
					if (count == 0) {
						cout << "A";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') state = 4;
					else if (*temp == '-') state = 5;
					break;

				case 3:
					if (count == 0) {
						cout << "I";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') state = 6;
					else if (*temp == '-') state = 7;
					break;

				case 4:
					if (count == 0) {
						cout << "R";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') cout << "L";
					else if (*temp == '-') cout << ",";
					--count;
					++temp;
					break;

				case 5:
					if (count == 0) {
						cout << "W";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') cout << "P";
					else if (*temp == '-') cout << "J";
					--count;
					++temp;
					break;

				case 6:
					if (count == 0) {
						cout << "S";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') cout << "H";
					else if (*temp == '-') cout << "V";
					--count;
					++temp;
					break;

				case 7:
					if (count == 0) {
						cout << "U";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') cout << "F";
					else if (*temp == '-') cout << "_";
					--count;
					++temp;
					break;

				case 8:
					if (count == 0) {
						cout << "T";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') state = 9;
					else if (*temp == '-') state = 10;
					break;

				case 9:
					if (count == 0) {
						cout << "N";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') state = 11;
					else if (*temp == '-') state = 12;
					break;

				case 10:
					if (count == 0) {
						cout << "M";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') state = 13;
					else if (*temp == '-') state = 14;
					break;

				case 11:
					if (count == 0) {
						cout << "D";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') cout << "B";
					else if (*temp == '-') cout << "X";
					--count;
					++temp;
					break;

				case 12:
					if (count == 0) {
						cout << "K";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') cout << "C";
					else if (*temp == '-') cout << "Y";
					--count;
					++temp;
					break;

				case 13:
					if (count == 0) {
						cout << "G";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') cout << "Z";
					else if (*temp == '-') cout << "Q";
					--count;
					++temp;
					break;

				case 14:
					if (count == 0) {
						cout << "O";
						++temp;
						break;
					}

					++temp;
					if (*temp == '.') cout << ".";
					else if (*temp == '-') cout << "?";
					--count;
					++temp;
					break;
				}

			}

		}

		cout << '\n';

	}
	return 0;
}