/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:15:06 by olthorel          #+#    #+#             */
/*   Updated: 2024/11/06 14:24:14 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*
int	main(void)
{
	int	c;

	c = 65;
	printf("Int before tolower -> %c\n", c);
	printf("Int after tolower  -> %c\n", ft_tolower(c));
}*/
