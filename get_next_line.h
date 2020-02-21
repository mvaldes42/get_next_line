/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <mvaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:05:57 by mvaldes           #+#    #+#             */
/*   Updated: 2020/02/21 12:54:02 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 42

# include <unistd.h>
# include <stdlib.h>

int			get_next_line(int fd, char **line);
int			find_index(const char *s, int c);
int			get_line(char **str, char **line, int i);
char		*ft_joinstr(char *s1, char *s2);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, int start, int len);
void		*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlen(const char *s);

#endif
