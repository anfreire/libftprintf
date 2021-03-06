/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:47:18 by anfreire          #+#    #+#             */
/*   Updated: 2022/05/28 14:25:15 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		b00l;
	int		str_len;

	str_len = ft_strlen(str);
	b00l = 0;
	while (str_len >= 0)
	{
		if (*str == (char)c)
		{
			ptr = (char *)str;
			b00l = 1;
		}
		str++;
		str_len--;
	}
	if (b00l == 0)
		return (NULL);
	else
		return (ptr);
}
