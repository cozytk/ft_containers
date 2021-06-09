#include <iostream>
#include <list>
#include <List.hpp>

int main ()
{
	std::list<int> mylist;
	std::list<int> ftlist;

	mylist.push_back(77);
	mylist.push_back(22);
	ftlist.push_back(77);
	ftlist.push_back(22);

	// now front equals 77, and back 22

	mylist.front() -= mylist.back();
	ftlist.front() -= ftlist.back();

	std::cout << "mylist.front() is now " << mylist.front() << '\n';
	std::cout << "ftlist.front() is now " << ftlist.front() << '\n';

	return 0;
}