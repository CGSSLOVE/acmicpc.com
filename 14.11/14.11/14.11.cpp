#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

enum class requestType {
	create_item = 1, delete_item , open_item , end
};
requestType getrequest() {
	cout << "\n번호 입력\n"
		<< "1- 도구 생성\n"
		<< "2- 도구 삭제\n"
		<< "3- 도구 리스트 보기\n"
		<< "4- 종료\n"<<fixed<<showpoint;
	int type;
	do {
		cout << "\n?";
		cin >> type;
	} while (type<static_cast<int>(requestType::create_item) || type>static_cast<int>(requestType::end));
	return static_cast<requestType>(type);
};


int main() {
	fstream item("hardware.dat", ios::in | ios::out | ios::binary);

	if (!item) {
		cerr << "파일을 열 수 없습니다." << endl;
		exit(EXIT_FAILURE);
	}
	requestType request{ getrequest() };
	while (request != requestType::end) {
		switch (request) {
		case requestType::create_item:
			cout << "레코드 넘버를 입력하세요. 1~100까지의 숫자이며, 0을 입력시 초기화면으로 돌아갑니다." << endl;
			break;
		case requestType::delete_item:
			cout << "레코드 넘버를 입력하세요. 1~100까지의 숫자이며, 0을 입력시 초기화면으로 돌아갑니다." << endl;
			break;
		case requestType::open_item:

			break;

		case requestType::end:
			return 0;
			break;
		}

		int num;
		string name;
		float cost;
		int quantity;
	}
	
}