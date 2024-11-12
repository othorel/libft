/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:09:22 by olthorel          #+#    #+#             */
/*   Updated: 2024/11/06 14:21:03 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*
int	main(void)
{
	int	c;

	c = 97;

	printf("Int before toupper -> %c\n", c);
	printf("Int after toupper  -> %c\n", ft_toupper(c));
}*/
