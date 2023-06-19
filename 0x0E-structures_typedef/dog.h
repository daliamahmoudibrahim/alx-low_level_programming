#ifndef DOG
#define DOG
/**
 * struct dog - a dog`s basic info
 * @name: first member
 * @age: second member
 * @owner: Third meber
 *
 * Description: dog description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
