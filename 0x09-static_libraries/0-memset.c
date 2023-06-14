#include "main.h"
 /**
 * _memset - Program fills a block of memory with a specific value

 * @t: starting address of memory to be filled
 * @k: the desired value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *t, char k, unsigned int n)
{
   	int a = 0;

   	for (; n > 0; a++)
   	{

          	t[a] = k;
          	n--;
   	}
   	return (t);
}
