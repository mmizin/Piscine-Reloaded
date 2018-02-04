/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 12:26:56 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/03 22:20:34 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		char_compare(char *one, char *two)
{
	int i;

	i = 0;
	while (one[i])
	{
		if (one[i] == two[i])
			i++;
		else
			return (one[i] - two[i]);
	}
	return (0);
}

char	**swap_argv(int argc, char **argv)
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	while (++i < argc - 1)
	{
		j = 0;
		while (++j < argc - 1)
		{
			if (char_compare(argv[j], argv[j + 1]) > 0)
			{
				swap = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = swap;
			}
		}
	}
	return (argv);
}

void	print_str(char **argv)
{
	int i;
	int j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j++]);
		}
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	print_str(swap_argv(argc, argv));
	return (0);
}
