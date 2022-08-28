#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animals[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    
	Dog copy1(*(Dog *)animals[0]);
    Cat copy2(*(Cat *)animals[0]);

    copy1.getBrain()->getIdeaAdress(0);
    ((Dog*)animals[0])->getBrain()->getIdeaAdress(0);

    copy2.getBrain()->getIdeaAdress(0);
    ((Cat*)animals[0])->getBrain()->getIdeaAdress(0);

	for (int i = 0; i < 10; i++)
    {
        delete animals[i];
    }	
	return 0;
}