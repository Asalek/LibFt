/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:12:53 by asalek            #+#    #+#             */
/*   Updated: 2021/11/10 18:52:41 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//Libraries :

# include<stdio.h>
# include<unistd.h>
# include<string.h>
# include<stdlib.h>
# include<ctype.h>
# include<fcntl.h>

//Functions Part1 :

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char	*s);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *sr, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char	*str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len);
int	    ft_atoi(const char	*str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(char *src);

//Function Part2 :

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
void	ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);

#endif
