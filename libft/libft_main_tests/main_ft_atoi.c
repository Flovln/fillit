/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 12:57:05 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/01 10:12:52 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int n;
	int neg;

	n = 0;
	neg = 0;
	if (!str)
		return (0);
	while (ft_isspace(*str))
		i++;
	if (*str == '+')
		i++;
	else if(*str == '-')
	{
		neg = -1;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9') // isdigit peut remplacer la condition
	{
		n = 10 * n + (*str - '0');
		str++;
	}
	if (neg)
		return (-i);
	return (i);
}

#include "libft.h"

int     ft_atoi(const char *str)
{
	int i;
	int n;
	int car;

    i = 0;
    n = 0;
    car = 1; //initialise a 1 car a la fin return(n * car), n * 0 = 0 (faux)
    if(!str)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		car *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = 10 * n + (str[i] - '0');
		i++;
	}
	return (n * car);
}

