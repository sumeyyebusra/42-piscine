/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssirim <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:34:03 by ssirim            #+#    #+#             */
/*   Updated: 2021/10/29 13:34:06 by ssirim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		if (!(str[count] >= 'A' && str[count] <= 'Z'))
			return (0);
		count++;
	}
	return (1);
}
