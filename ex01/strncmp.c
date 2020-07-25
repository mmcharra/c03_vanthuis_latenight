
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i<n))
	{
//		printf("s1 %d  , s2 %d \n",s1[i],s2[i]);
		if(s1[i] != s2[i])
		{
			return(s1[i] - s2[i]);
		}
		i++;
	}
}

int	main(void)
{	
	 char a[]= "abd124";
	 char b[]= "abc124";

	printf("[ft] %d\n", ft_strncmp(a, b, 4));
	printf("expected %d\n",strncmp(a,b, 4));
}
