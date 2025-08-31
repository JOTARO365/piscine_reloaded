/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 00:19:28 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/08/27 01:36:54 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putstr_fd(const char *str, int fd)
{
	ssize_t	w;

	while (*str)
	{
		w = write(fd, str, 1);
		if (w <= 0)
			return ;
		++str;
	}
}

int	write_all(int fd, const char *buf, size_t n)
{
	size_t	off;
	ssize_t	w;

	off = 0;
	while (off < n)
	{
		w = write(fd, buf + off, n - off);
		if (w <= 0)
			return (-1);
		off += (size_t)w;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buf[BUFFER_SIZE];
	ssize_t	n;

	if (argc < 2)
		return (ft_putstr_fd("File name missing.\n", 2), 1);
	if (argc > 2)
		return (ft_putstr_fd("Too many arguments.\n", 2), 1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (ft_putstr_fd("Cannot read file.\n", 2), 1);
	n = read(fd, buf, BUFFER_SIZE);
	while (n > 0)
	{
		if (write_all(1, buf, (size_t)n) < 0)
			return (ft_putstr_fd("Cannot read file.\n", 2), close(fd), 1);
		n = read(fd, buf, BUFFER_SIZE);
	}
	if (n < 0)
		ft_putstr_fd("Cannot read file.\n", 2);
	close(fd);
	return (n < 0);
}
