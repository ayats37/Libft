/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:07:19 by taya              #+#    #+#             */
/*   Updated: 2024/09/06 22:20:47 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*first_occurance;

	first_occurance = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			first_occurance = (char *)str;
			break ;
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (first_occurance);
}
