#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct{
	char name[MAX_NAME];
	int age;
} person;

unsigned int hash_table(char *name){
	int length = strlen(name);
	unsigned int hash_value = 0;
	for(int i=0; i < length; i++){
		hash_value += name[i];
		hash_value = (hash_value * name[i]) % TABLE_SIZE;
	}
	return hash_value;
}
void init_hash_table(){
	for(int i=0; i < TABLE_SIZE; i++){
		hash_table[i] = NULL;
	}
}
 void print_table(){
	 for(int i=0; i < TABLE_SIZE; i++){
		 if(hash_table[i] == NULL){
			 printf("\t%i\t---\n");
		 } else {
			 printf("\t%i\t%s\n", hash_table[i]->name);
		 }
	 }
 }
int main(){

	init_hash_table();
	print_table();

	person jacob = {.name="Jacob", .age = 245};
	person Beryl = {.name"Beryl", .age = 27};
	person kate = {.name = "Kate", .age = 23};
	person greg = {.name="Greg", .age = 7};


	return 0;
}

