/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:12:58 by dneto             #+#    #+#             */
/*   Updated: 2022/08/15 18:09:28 by dneto            ###   ########.fr       */
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
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
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