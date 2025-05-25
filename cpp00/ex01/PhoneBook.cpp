#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{	
	this->contacts_cnt = 0;
	this->index = 0;
}

std::string PhoneBook::trim(std::string input)
{
	int start = 0;
	while (input[start] &&  isspace(input[start]))
		start++;
	int end = input.length();
	while (end < start && isspace(input[end]))
		end--;
	return input.substr(start, end - start);
}

void PhoneBook::set_index(int _index)
{
	this->index = _index;
}

int PhoneBook::get_index()
{
	return (this->index);
} 
void PhoneBook::set_contacts_cnt(int count)
{
	PhoneBook::contacts_cnt = count;
}

int PhoneBook::get_contacts_cnt()
{
	return PhoneBook::contacts_cnt;
}

int check_input(std::string data)
{
	for (int i = 0; data[i]; i++)
	{
		if(!isprint(data[i]))
			return (true);
	}
	return (false);
}
std::string PhoneBook::replace_dot(std::string str)
{
	if(str.length() > 9)
		return(str.substr(0, 8).append("."));
	return (str);

}
void PhoneBook::get_contacts(int index)
{
	std::cout << "+------------+------------+------------+------------+\n" ;
	std::cout << "| " << "Index     " << " | ";
	std::cout << "First name" <<  " | ";
	std::cout << "Last name " <<  " | ";
	std::cout << "Nickname  " <<  " | " << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << "+------------+------------+------------+------------+\n" ;
		std::cout << "|" << i << std::setfill(' ') << std::setw (12) << "|";
		std::cout << PhoneBook::replace_dot(contacts[i].get_first_name()) <<  std::setfill(' ') << std::setw (13 - PhoneBook::contacts[i].get_first_name().length()) << "|";
		std::cout << PhoneBook::replace_dot(contacts[i].get_last_name()) <<  std::setfill(' ') << std::setw (13 - PhoneBook::contacts[i].get_last_name().length()) << "|";
		std::cout << PhoneBook::replace_dot(contacts[i].get_nickname()) << std::setfill(' ') << std::setw (13 - PhoneBook::contacts[i].get_nickname().length()) <<   "|" << std::endl;
	}
	std::cout << "+------------+------------+------------+------------+\n";
	if(PhoneBook::get_contacts_cnt())
	{	
		contact :
		std::cout << "Contact id to search (0..7) : ";
		std::string str;
		std::getline(std::cin, str);
		if(std::cin.eof() == true)
			return ;
		if(str.empty())
		{
			std::cout << "Nothing Specified\n";
			return ;
		}
		for (size_t i = 0; str[i]; i++)
		{
			if(!isdigit(str[i]))
			{
				std::cout << "Only Numbers requires!!\n";
				goto contact;
			}
		}
		unsigned long id = strtoul(str.c_str(), NULL, 10);
		if(PhoneBook::get_contacts_cnt() == 0 || id > 7 || id >= (unsigned long long)PhoneBook::get_contacts_cnt())
		{
			std::cout << "There is no contact found!!" << std::endl;
			return ;
		}
		std::cout << "First Name : " << PhoneBook::contacts[id].get_first_name() << std::endl;
		std::cout << "Last Name : " << PhoneBook::contacts[id].get_last_name() << std::endl;
		std::cout << "Nickname : " << PhoneBook::contacts[id].get_nickname() << std::endl;
		std::cout << "Phone Number : " << PhoneBook::contacts[id].get_phone_number() << std::endl;
		std::cout << "Darkest Secret : " << PhoneBook::contacts[id].get_darkest_secret() << std::endl;
	}
	else
	{
		std::cout << "Add some informations!! \n";
		return ;
	}
}
void PhoneBook::add_book(int index)
{
	std::string input;
	name :
	std::cout << "First name:";
	std::getline(std::cin, input);
	if(std::cin.eof())
		return ;
	if(input.empty() == true || check_input(input) == true)
	{
		std::cout << "Isn't a valid value !!" << std::endl;
		goto name;
	}
	PhoneBook::contacts[index].set_first_name(input);
	last :
	std::cout << "Last name:";
	std::getline(std::cin, input);
	if(std::cin.eof())
		return ;
	if(input.empty() == true || check_input(input) == true)
	{
		std::cout << "Isn't a valid value !!" << std::endl;
		goto last;
	}
	PhoneBook::contacts[index].set_last_name(input);
	nick :
	std::cout << "Nickname:";
	std::getline(std::cin, input);
	if(std::cin.eof())
		return ;
	if(input.empty() == true || check_input(input) == true)
	{
		std::cout << "Isn't a valid value !!" << std::endl;
		goto nick;
	}
	PhoneBook::contacts[index].set_nickname(input);
	phone :
	std::cout << "Phone number:";
	std::getline(std::cin, input);
	if(std::cin.eof())
		return ;
	if(input.empty() == true || check_input(input) == true)
	{
		std::cout << "Isn't a valid value !!" << std::endl;
		goto phone;
	}
	PhoneBook::contacts[index].set_phone_number(input);
	Dark :
	std::cout << "Darkest secret:";
	std::getline(std::cin, input);
	if(std::cin.eof())
		return ;
	if(input.empty() == true || check_input(input) == true)
	{
		std::cout << "Isn't a valid value !!" << std::endl;
		goto Dark;
	}
	PhoneBook::contacts[index].set_darkest_secret(input);
}
PhoneBook::~PhoneBook(){
	return ;
}