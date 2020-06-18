#include<string>
#include<iostream>
#include "for_ranged.h"

using std::cin;

int main() 
{
	char letter = 'a';
	char letter2 = 'b';
	letter2 == letter;
	std::string letter_string = "a";
	//Creating strings
	int num = 5;
	std::string name1;
	std::string name = "joe"; //create string assign joe to it
	std::string name2{"John"};
	std::string name3(9, 'a');

	//string operation
	if(name1 == name)
	{
		std::cout<<"same";
	}
	
	name1 += name; //0=j, 1=0, 2=e
	name1[1];
	name.push_back('y'); //name is now joey
	name2.insert(3, "y"); //john would be johny
	std::cout<<name2;

	for(auto n: name2)
	{
		n = 'a';
		//std::cout<<n<<"\n";
	}

	std::string last_name;
	std::cout<<"Enter last name: ";
	std::getline(cin, last_name);
	std::cout<<last_name;
	
	/*std::string name = "John";
	loop_string_w_index(name);
	std::cout<<"\n\n";
	loop_string_for_range(name);
	*/

	return 0;
}