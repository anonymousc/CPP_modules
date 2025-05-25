#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"
#include <stdlib.h>
#include <iomanip>

class PhoneBook
{
	private:
		int index;
		int contacts_cnt;
		Contact contacts[8];
	public :
		PhoneBook();
		std::string trim(std::string input);
		std::string	replace_dot(std::string str);
		void		set_contacts_cnt(int count);
		void 		set_index(int index);
		int	 		get_index();
		int  		get_contacts_cnt();
		void 		get_contacts(int index);
		void 		add_book(int index);
		~PhoneBook();
};

#endif