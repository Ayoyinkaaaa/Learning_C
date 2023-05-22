#ifndef DOG_H
#define DOG_H
/**
 * main- a function to define a new type struct dog
 * struct dog: a dog's basic info
 * @name: first member
 * @age: second member
 * @owner: Third member
 * Return: always (0) success
 * description : print all argument recieved
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
