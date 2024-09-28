/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:05:43 by taya              #+#    #+#             */
/*   Updated: 2024/09/08 23:00:55 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*arr;

	arr = malloc(n * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, n * size);
	return (arr);
}
/*int main()
{
    int *arr;
    int i;
    i = 0;
    arr = ft_calloc(4, 4);
    while (i < 4)
    {
        printf("%d\n", arr[i]);
        i++;
    }
}*/