#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : virtual public AAnimal
{
	public:
		Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		~Cat();
		void makeSound() const;
		std::string getType() const;

	private:
		std::string		type;
		Brain* brain;
};

#endif
