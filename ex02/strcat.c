/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 19:23:56 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/24 19:40:58 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int dest_cycle;
	int src_cycle;

	dest_cycle = 0;
	src_cycle = 0;
	while (dest[dest_cycle] != '\0')
	{
		dest_cycle++;
	}
	while (src[src_cycle] != '\0')
	{
		dest[dest_cycle] = src[src_cycle];
		dest_cycle++;
		src_cycle++;
	} 
		dest[dest_cycle] = '\0';
	return (dest);
}

int	main(void)
{	
	 char src[]= "abc124";
	 char dest[200]= "ddd";

	printf("%s",  ft_strcat(dest, src));
	
//	printf("expected %s \n",strcat(dest, src));
}
