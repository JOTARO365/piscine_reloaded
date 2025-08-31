/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 00:44:23 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/08/27 01:32:02 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# define BUFFER_SIZE 1024

# include <unistd.h>
# include <fcntl.h>

void	ft_putstr_fd(const char *str, int fd);
int		write_all(int fd, const char *buf, size_t n);

#endif