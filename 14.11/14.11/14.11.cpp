#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

enum class requestType {
	create_item = 1, delete_item , open_item , end
};
requestType getrequest() {
	cout << "\n��ȣ �Է�\n"
		<< "1- ���� ����\n"
		<< "2- ���� ����\n"
		<< "3- ���� ����Ʈ ����\n"
		<< "4- ����\n"<<fixed<<showpoint;
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
		cerr << "������ �� �� �����ϴ�." << endl;
		exit(EXIT_FAILURE);
	}
	requestType request{ getrequest() };
	while (request != requestType::end) {
		switch (request) {
		case requestType::create_item:
			cout << "���ڵ� �ѹ��� �Է��ϼ���. 1~100������ �����̸�, 0�� �Է½� �ʱ�ȭ������ ���ư��ϴ�." << endl;
			break;
		case requestType::delete_item:
			cout << "���ڵ� �ѹ��� �Է��ϼ���. 1~100������ �����̸�, 0�� �Է½� �ʱ�ȭ������ ���ư��ϴ�." << endl;
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