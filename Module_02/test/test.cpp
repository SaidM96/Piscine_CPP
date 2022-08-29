#include <iostream>

/**
 * @brief 
 *  Ad-hoc Polymorphism
 * @return int 
 */

void print(char *str);
void print(int i);

/**
 * @brief 
 * vTable;
 * *vPtr = &addr_func 
 * 
 */


class Animal
{
    public:
        virtual void makeSound(void);
}

class Dog: public Animal
{
    public:
        void makeSound()
}

int main(void)
{

}