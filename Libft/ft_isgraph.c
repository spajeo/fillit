/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:23:07 by gbradel           #+#    #+#             */
/*   Updated: 2016/12/06 17:28:11 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isgraph(char c)
{
	if (c >= '!' && c <= '~')
		return (1);
	return (0);
}
