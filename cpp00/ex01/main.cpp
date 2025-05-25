#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string input;
	std::cout << "ADD : add to the contact list\nEXIT : leave the phonebook\nSEARCH : navigate the phonebook (some extra information specify the index)\n";
	while (1)
	{
		if(phonebook.get_index() == 8)
			phonebook.set_index(0);
		if(std::cin.eof() == true || input == "EXIT")
			exit(1);
		std::cout << "Phone Book > ";
		std::getline(std::cin, input);
		input = phonebook.trim(input);
		if (input == "ADD")
		{	
			if (phonebook.get_contacts_cnt() < 8)
				phonebook.set_contacts_cnt(phonebook.get_contacts_cnt() + 1);
			phonebook.add_book(phonebook.get_index());
			phonebook.set_index(phonebook.get_index() + 1);
		}
		if(input == "SEARCH")
			phonebook.get_contacts(phonebook.get_contacts_cnt());
		else
			continue;
	}
}

