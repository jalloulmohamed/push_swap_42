#include "../push_swap.h"

size_t	ft_strlentab(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}