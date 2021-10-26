/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 14:11:24 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/26 17:13:30 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

#include <stdlib.h> //malloc

t_list			*ft_lstnew(void *content, size_t line_nb)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->line_nb = line_nb;
	element->next = NULL;
	return (element);
}
