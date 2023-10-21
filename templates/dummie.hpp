#ifndef DUMMIE_HPP
#define DUMMIE_HPP

#include <iostream>

class dummie {

private:

public:
	dummie();
	dummie(dummie const& other);
	~dummie();
	dummie &operator=(dummie const& rhs);
};

std::ostream &operator<<(std::ostream &o, dummie const &prt);

#endif
