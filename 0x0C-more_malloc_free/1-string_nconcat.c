#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 * of string 2 @s2 or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int 11, 12, i, j;
	char *str;

	/*treat NULL as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	11 = 12 = 0;
	/*length of both s1 & s2 respectively*/
	while (s1[11] != '\0')
		11++;
	while (s2[12] != '\0')
		12++;

	/*set n to length of s2*/

	if (n >= 12)
		n = 12;

	str = (char *) malloc((11 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*add s1 to str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*add s2 n bytes to str*/
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}



