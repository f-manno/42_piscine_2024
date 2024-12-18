/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valucare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:35:52 by valucare          #+#    #+#             */
/*   Updated: 2024/11/24 23:36:35 by valucare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int npower)
{
	int	i;

	i = 1;
	if (npower < 0)
		return (0);
	if (npower == 0)
		return (1);
	while (npower > 0)
	{
		i *= nb;
		npower--;
	}
	return (i);
}
