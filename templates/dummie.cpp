#include "dummie.hpp"

dummie::dummie() {
	std::cout << "dummie default constructor called" << std::endl;
}

dummie::dummie(dummie const& other) {
	std::cout << "dummie copy constructor called" << std::endl;
	*this = other;
}

dummie::~dummie() {
	std::cout << "dummie destructor called" << std::endl;
}

dummie& dummie::operator=(dummie const& rhs) {
	(void) rhs;
	std::cout << "dummie copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream& operator<<(std::ostream& o, dummie const& prt) {
	(void) prt;
	return (o);
}
