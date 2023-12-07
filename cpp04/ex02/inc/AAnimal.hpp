#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal 
{
public:
	AAnimal(void);
	AAnimal(AAnimal const& animal);
	AAnimal& operator=(AAnimal const& rhs);
	virtual ~AAnimal(void);


	virtual void		makeSound(void) const = 0;
	virtual std::string	getType(void) const = 0;

protected:
	std::string	type;
};


#endif

