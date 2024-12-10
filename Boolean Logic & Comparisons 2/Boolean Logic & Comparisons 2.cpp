#include <iostream>
using namespace std;

//int main()
//{
//    string name;
//    int age;
//    string country;
//
//    cout << "What is your name?" << endl;
//    cin >> name;
//
//    cout << "How old are you?" << endl;
//    cin >> age;
//
//    cout << "What country are you from?" << endl;
//    cin >> country;
//
//    if (age < 18)
//    {
//        cout << "Sorry, " << name << " you're not old enough to vote." << endl;
//    }
//    else if (age >= 18 && country == "Britain" || country == "UK")
//    {
//        cout << "Okay, " << name << " you're elegible to vote." << endl;
//    }
//    else if (age >= 18 && country != "Britain" || country == "UK")
//    {
//        cout << "You're not entitled to vote." << endl;
//    }
//}

//int main()
//{
//	int inputtedNumber;
//	cout << "Input a number" << endl;
//	cin >> inputtedNumber;
//
//	if (inputtedNumber % 3 == 0 && inputtedNumber % 5 != 0)
//	{
//		cout << "Fizz" << endl;
//	}
//	else if (inputtedNumber % 3 != 0 && inputtedNumber % 5 == 0)
//	{
//		cout << "Buzz" << endl;
//	}
//	else if (inputtedNumber % 3 == 0 && inputtedNumber % 5 == 0)
//	{
//		cout << "Fizz Buzz" << endl;
//	}
//	else
//	{
//		cout << inputtedNumber << endl;
//	}
//}

//int main()
//{
//	//bool innerDoor = false;
//	//bool outerDoor = false;
//
//	//cout << "Do you want to open the inner door? 1 = close, 0 = open" << endl;
//	//cin >> innerDoor;
//
//	//cout << "Do you want to open the outer door? 1 = close, 0 = open" << endl;
//	//cin >> outerDoor;
//
//	//if (!innerDoor && !outerDoor)
//	//{
//	//	cout << "Ken (the cat), has escaped as both doors were open." << endl;
//	//}
//	//else
//	//{
//	//	cout << "Ken (the cat), has not escaped as one or more door was closed." << endl;
//	//}
//	
//	bool bothDoors = false;
//	cout << "Do you want to open both doors? 1 = close, 0 = open" << endl;
//	cin >> bothDoors;
//
//	if (!bothDoors)
//	{
//		cout << "Ken (the cat), has escaped as both doors were open." << endl;
//	}
//	else
//	{
//		cout << "Ken (the cat), has not escaped as both doors were open." << endl;
//	}
//}

int main()
{
	int first_num;
	cout << "Input your first number." << endl;
	cin >> first_num;

	int second_num;
	cout << "Input your second number." << endl;
	cin >> second_num;

	int third_num;
	cout << "Input your third number." << endl;
	cin >> third_num;

	if (first_num < second_num)
	{
		if (second_num < third_num)
		{
			cout << first_num << ", " << second_num << ", " << third_num << endl;
		}
		else if (first_num < third_num)
		{
			cout << first_num << ", " << third_num << ", " << second_num << endl;
		}
		else
		{
			cout << third_num << ", " << first_num << ", " << second_num << endl;
		}
	}
	else if (second_num < third_num)
	{
		if (first_num < third_num)
		{
			cout << second_num << ", " << first_num << ", " << third_num << endl;
		}
		else
		{
			cout << second_num << ", " << third_num << ", " << first_num << endl;
		}
	}
	else
	{
		cout << third_num << ", " << second_num << ", " << first_num << endl;
	}
}