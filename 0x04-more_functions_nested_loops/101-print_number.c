#include "main.h"
/**
* print_number - that prints an integer
*@n: print int
* Return: Always 0.
*/
void print_number(int n)

{


int i;
int z;
int d;
int p;

if (size > 0)
{
d = size - l;
for (i = 0; i < size ; i++)
{
for (z= d; z > 0 ; z--)
{
_putchar (' ');
}

for(p=0; p <= i; p++)
{
_putchar (35);
}

d--;

putchar ('\n');



}

}

else
{
_putchar ('\n');
}
}
