/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:39:22 by olthorel          #+#    #+#             */
/*   Updated: 2024/11/06 14:34:32 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	src_len;

	src_len = ft_strlen(s);
	while (src_len >= 0)
	{
		if (s[src_len] == (char)c)
			return ((char *)&s[src_len]);
		src_len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Hello world !";
	char		ch = 'o';
	char		*result = ft_strrchr(str, ch); //position last occurence

	if (result != NULL)
		printf("Caractere '%c' find at : %ld\n", ch, result - str);
	else
		printf("Caractere '%c' not find\n", ch);
}*/
