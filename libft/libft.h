/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:42:50 by bkozluca          #+#    #+#             */
/*   Updated: 2023/04/12 04:15:55 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void	*ft_bzero(void *giren, size_t n);

int		ft_isalnum(int i);
int		ft_isalpha(int str);
int		ft_isascii(int i);
int		ft_isdigit(int str);
int		ft_isprint(int i);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const char *s1, const char *s2, size_t n);

void	*ft_memcpy(void *gelen, const void *in, size_t b);
void	*ft_memmove(void *gelen, const void *in, size_t b);
void	*ft_memset(void *gelen, int a, size_t b);

char	*ft_strchr(const char *s, int c);

size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
int		ft_strlen2(const char *str);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);

int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *src);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin2(char const *s1, char *s2);
char	**ft_split(const char *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int b, int fd);
void	ft_putendl_fd(char *s, int fd);

#endif
