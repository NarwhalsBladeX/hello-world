#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;	
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	//printf("%d", s1[i] - s2[i]);
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d", ft_strcmp("ABJ", "ABC"));
}
