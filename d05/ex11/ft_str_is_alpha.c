/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:47:41 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/06 14:10:07 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122))
				|| str[0] == '\0'))
			return (0);
		i++;
	}
	return (1);
}
