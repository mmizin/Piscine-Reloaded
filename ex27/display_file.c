/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:15:55 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/06 18:15:59 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buff[4096 + 1];

	ret = 0;
	if (argc == 1)
		return (write(1, "File name missing.\n", 19));
	if (argc > 2)
		return (write(1, "Too many arguments.\n", 20));
	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buff, 4096 + 1);
	buff[ret] = '\0';
	ret = 0;
	while (buff[ret] != '\0')
		write(1, &buff[ret++], 1);
	close(fd);
	return (0);
}
