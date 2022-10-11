#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that stores info about a dog
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Description: it stores the info about the dog which includes;
 *  its name,  age, and the name of the owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
