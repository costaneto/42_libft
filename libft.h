/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:12:58 by dneto             #+#    #+#             */
/*   Updated: 2022/08/14 20:21:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

// atoi
void	*ft_bzero(void *s, size_t n);
// calloc
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(void *s, int c, size_t n);
// memcpy
// memmove
// memchr
// memcmp
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strncpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
// strnstr
// strncmp
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif