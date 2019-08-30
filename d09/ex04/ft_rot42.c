/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 20:11:09 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/08 20:40:29 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= 'A';
			str[i] = ((str[i] + 42) % 26);
			str[i] += 'A';
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a';
			str[i] = ((str[i] + 42) % 26);
			str[i] += 'a';
		}
		i++;
	}
	return (str);
}
