/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:06:25 by taya              #+#    #+#             */
/*   Updated: 2024/09/06 21:53:13 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int main()
{
    t_list   *node1;
    t_list  *node2;
    node1 = ft_lstnew("aya");
    node2 = ft_lstnew("touirass");
    node1->next = node2;
    printf ("%s", (char *) node1->content);
    printf("%s", (char *) node2->content);
}*/