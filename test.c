
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	h;
	size_t			i;

	i = 0;
	h = (unsigned char)c;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == h)
			return ((char *)(s + i));
		i++;
	}
	if (h == '\0')
		return ((char *)&s[i]);
	return (0);
}

int main()
{
	char *s =ft_strchr((const char *)5,'h');
    if(s)
	    printf("%s\n",s);
	return (0);
}