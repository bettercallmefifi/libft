# include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	i = 0;
	srclen = strlen(src);
	destlen = strlen(dest);
	if (size == 0 && !dest)
		return (srclen);
	if (size == 0)
		return (srclen);
	
	if (destlen >= size)
		return (srclen + size);
	while (src[i] != '\0' && (destlen + i) < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}