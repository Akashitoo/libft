/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalasub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:51:25 by abalasub          #+#    #+#             */
/*   Updated: 2023/11/22 15:41:10 by abalasub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
