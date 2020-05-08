/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 19:28:33 by lsuardi           #+#    #+#             */
/*   Updated: 2020/05/08 22:26:35 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H

# define LIBFT_BONUS_H
# include <libft.h>

# ifndef STDERR
#  define STDERR 2
# endif

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

char			*ft_strndup(const char *s1, size_t n);
void			ft_memdel(void **ap);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_isinstr(char const c, char const *str);
int				ft_nbrsize(int n);
double			ft_pow(double x, double y);
double			ft_sqrt(double x);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strcat(char *s1, const char *s2);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strncpy(char *dst, const char *src, size_t len);
size_t			ft_filesize(char *path);
char			*ft_filetoa(char *path);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strcpy(char *dst, const char *src);

#endif
