/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:07:16 by taya              #+#    #+#             */
/*   Updated: 2024/09/26 20:31:36 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count_subs(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
		{
			s++;
		}
		if (*s != c && *s)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (count);
}

int	ft_len_subs(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int	ft_process_substrings(char **arr, const char *s, char c, int count)
{
	int	i;

	i = 0;
	while (*s && i < count)
	{
		if (*s != c && *s)
		{
			arr[i] = malloc((ft_len_subs(s, c) + 1) * sizeof(char));
			if (!arr[i])
			{
				while (i-- > 0)
					free(arr[i]);
				free(arr);
				return (0);
			}
			strncpy(arr[i], s, ft_len_subs(s, c));
			arr[i][ft_len_subs(s, c)] = '\0';
			i++;
			s += ft_len_subs(s, c);
		}
		else
			s++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		count;

	count = ft_count_subs(s, c);
	arr = malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!ft_process_substrings(arr, s, c, count))
	{
		return (NULL);
	}
	arr[count] = NULL;
	return (arr);
}
/*int	main(void)
{
	char	**arr;
	int		i;

	arr = ft_split(" hello aya touir ass", ' ');
	i = 0;
	if (arr)
	{
		while (arr[i])
		{
			printf("%s\n", arr[i]);
			i++;
		}
	}
	return (0);
}*/
