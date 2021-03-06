/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 18:37:53 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/15 04:11:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Finds the last occurrence of a character 'c' in the pointed string 's'.
**
**	Parameters
**	----------
**	char const *s1: a pointer to the string to trimm.
**	char const *set: a pointer to the 'set' of characters to trim from 's1'.
**
**	Returns
**	-------
**	The trimmed string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_string;
	size_t	ns_len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && (ft_strchr(set, *s1)))
		s1++;
	ns_len = ft_strlen(s1);
	while (ns_len && (ft_strchr(set, s1[ns_len])))
		ns_len--;
	new_string = ft_substr((char*)s1, 0, ns_len + 1);
	return (new_string);
}
