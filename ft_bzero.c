/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:05:07 by taya              #+#    #+#             */
/*   Updated: 2024/09/06 21:52:25 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*s;
	unsigned int	i;

	i = 0;
	s = (unsigned char *)str;
	while (n > 0)
	{
		s[i] = 0;
		n--;
		i++;
	}
}
/*int main()
{
   unsigned char   str[5];
    int i;
    i = 0;
    ft_bzero(str, sizeof(str));
    while (i < 5)
    {
        printf("%d\n", str[i]);
        i++;
    }
    return (0);
}*/