#include <stdlib.h>
char *_strdup(char *str)
{
char *dup;
int len, i;
if (str == NULL)
return (NULL);
for (len = 0; str[len]; len++)
;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
