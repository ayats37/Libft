/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:06:51 by taya              #+#    #+#             */
/*   Updated: 2024/09/06 22:37:00 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *array, int value, size_t size)
{
	unsigned char	*arr;
	unsigned char	change_value;
	unsigned int	i;

	arr = (unsigned char *)array;
	change_value = (unsigned char)value;
	i = 0;
	while (size > 0)
	{
		arr[i] = change_value;
		i++;
		size--;
	}
	return (array);
}
