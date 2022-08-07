#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() {

	// USING STRING OBJECT AT STARING 
	string FirstName; 
	cout << " PLEASE ENTER YOUR FIRST NAME" << "\n";
	getline(cin, FirstName);
	

	string MiddleName;
	cout << " PLEASE ENTER YOUR MIDDLE NAME " << "\n";
	getline(cin, MiddleName);

	string LastName;
	cout << "PLEASE ENTER YOUR LAST NAME" << "\n";
	cin >> LastName;
	

	string MothersName;
	cout << "ENTER YOUR MOTHERS NAME " << "\n";
	std::getline(std::cin, MothersName);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	string FathersName;
	cout << "ENTER YOUR FATHERS NAME " << "\n";
	std::getline(std::cin, FathersName);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	

	int userage;
	cout << "ENTER YOUR AGE" << "\n";
	cin >> userage;
	cin.ignore();
	

	int month;
	cout << "ENTER THE NUMBER OF THE YOU WERE BORN IN ";
	cin >> month;
	cin.ignore();

	int day;
	cout << "ENTER DAY DATE ON WHICH YOU WERE BORN";
	cin >> day;
	cin.ignore();

	int year;
	cout << "ENTER THE YEAR YOU WERE BORN IN";
	cin >> year;
	cin.ignore();

	int GENDER;
	cout << "GENDER - FOR MALE TYPE 1 \\ FOR FEMALE TYPE 2" << "\n";
	cin>>  GENDER;

	string FullName;
	FullName = FirstName + " " + MiddleName + " " + LastName;

	cout << "YOUR NAME IS - " << FullName << "\n";
	cout << "YOUR FATHERS NAME IS - " << FathersName << "\n";
	cout << "YOUR MOTHERS NAME IS - " << MothersName << "\n";
	cout << "YOUR  AGE IS - " << userage << "\n";
	cout << "YOUR DOB IS - " << day << "\\" << month << "\\" << year << "\n";
	

	if (GENDER== 1) {
		cout << "YOUR AGE IS MALE" << "\n";
	}
	else if (GENDER == 2) {
		cout << "YOUR GENDER IS FEMALE" << "\n";

	}
	
	return 0;







	
}