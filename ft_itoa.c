/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:06:02 by taya              #+#    #+#             */
/*   Updated: 2024/09/08 08:52:38 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}*/
/*char	*ft_strdup(const char *s)
{
	char	*d;
	int		len;
	int		i;

	len = ft_strlen(s);
	d = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!d)
		return (0);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}*/
static unsigned int	ft_handling_neg(int n, int *sign)
{
	unsigned int	nbr;

	if (n < 0)
	{
		*sign = 1;
		nbr = (unsigned int)(-n);
	}
	else
	{
		*sign = 0;
		nbr = (unsigned int)n;
	}
	return (nbr);
}

static void	ft_fill_str_with_digits(char *str, unsigned int n, int len)
{
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
}

static int	ft_get_length(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	int				sign_negative;
	unsigned int	nbr;

	sign_negative = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nbr = ft_handling_neg(n, &sign_negative);
	len = ft_get_length(nbr) + sign_negative;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_fill_str_with_digits(str, nbr, len);
	if (sign_negative == 1)
		str[0] = '-';
	return (str);
}
/*int main()
{
  printf("%s", ft_itoa(-423));
}*/