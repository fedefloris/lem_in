/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_comments.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:50:19 by ffloris           #+#    #+#             */
/*   Updated: 2018/04/27 18:20:01 by ffloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		skip_comments(t_list **input)
{
	if (is_comment(*input))
	{
		*input = (*input)->next;
		return (1);
	}
	return (0);
}
