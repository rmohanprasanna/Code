#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

struct node
{
	int idata;
	struct node *next;
};

int add(struct node **Ptr)
{
	struct node *Pointer = NULL;

	struct node *temp = NULL;

	temp = (struct node*)malloc(sizeof(struct node));

	Pointer = *Ptr;

	Pointer = temp;

	printf("%d\n", Pointer);

	return 0;
}

int call(unsigned char )
{

}

int main()
{
	struct node *ptr = NULL;
	unsigned char ucVal1 = 0, ucVal2 = 0;

	ptr = (struct node*)malloc(sizeof(struct node));

	add(&ptr);

	call(&ucVal1, &ucVal2)

	return 0;
}
