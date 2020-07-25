/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   metmain.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 17:49:02 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/23 18:02:15 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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

	printf("[ft] %d\n", ft_strcmp(a, b));
	printf("expected %d\n",strcmp(a,b));
}
