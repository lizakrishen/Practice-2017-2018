#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int age;
	
	string sex;
	
	void SayHello() {
		cout << this->name << " says hello\n";
	};
};

void print(Person* person)
{
	cout << person->name << " is " << person->age << " years old" << endl;
}

int main()
{
	Person person;
	person.name = "Harry";
	person.age = 23;
	
	cout << "Meet " << person.name << endl;
	print(&person);
	person.SayHello();
	
	return 0;
}