/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:04:20 by olthorel          #+#    #+#             */
/*   Updated: 2024/11/14 17:46:43 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the length of a null-terminated string.
 *
 * This function iterates through the characters of the string `s` until it
 * reaches the null character ('\0') and returns the number of characters
 * encountered before the null character.
 *
 * The null-terminated string to calculate the length of.
 * The length of the string `s`.
 */
size_t ft_strlen(const char *s)
{
	size_t i = 0;
	while (s[i])
		i++;
	return i;
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	const char	*str = "Hello world !";

	printf("Len of %s is : %zu.", str, ft_strlen(str));
}*/
