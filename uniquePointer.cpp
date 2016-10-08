#include <iostream>
#include <string>
#include <memory>

struct Person {
	std::string name;
	double height;
	Person(): name("quack"), height(0) {}
	Person(std::string n, double i): name(n), height(i) {}
};

using Person = struct Person;

int main() {
	std::unique_ptr<Person> p(new Person("Bob", 10));
	std::unique_ptr<Person[]> people(new Person[10]);
	std::cout << p->name << " " << p->height << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << people[i].name << " " << people[i].height << std::endl;
	}

	return 0;
}
