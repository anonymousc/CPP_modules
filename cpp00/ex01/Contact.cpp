#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}
std::string Contact::get_last_name(){
	return (this->last_name);
}
std::string Contact::get_nickname(){
	return (this->nickname);
}
std::string Contact::get_phone_number(){
	return (this->phone_number);
}
std::string Contact::get_darkest_secret(){
	return (this->darkest_secret);
}

void Contact::set_first_name(std::string first_name)
{
	Contact::first_name = first_name;
}
void Contact::set_last_name(std::string	last_name)
{
	Contact::last_name = last_name;
}
void Contact::set_nickname(std::string nickname)
{
	Contact::nickname = nickname;
}
void Contact::set_phone_number(std::string	phone_number)
{
	Contact::phone_number = phone_number;
}
void Contact::set_darkest_secret(std::string darkest_secret)
{
	Contact::darkest_secret = darkest_secret;
}
Contact::~Contact(void)
{
	return ;
}