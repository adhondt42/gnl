/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:51:25 by adhondt           #+#    #+#             */
/*   Updated: 2018/03/22 15:11:55 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			ft_sorttab(char **tab);
char			**ft_initializetab(int size);
char			*ft_strrchrrev(char *s, char c);
size_t			ft_tablen(char **src);
char			**ft_tabtabdup(char **tab, int itt, int it);
char			*ft_strnewc(size_t size, char c);
int				onlyins(char *s1, char *s2);
void			ft_n();
char			*ft_itoa_base(int value, int base);
char			*ft_strndup(const char *tab, int n);
char			*ft_strnjoin(char const *s1, char const *s2, int n);
int				get_next_line(const int fd, char **line);
size_t			ft_strclen(const char *src, char c);
char			*ft_strcjoin(char const *s1, char const *s2, char c);
char			*ft_strcdup(const char *tab, char c);
char			*ft_strccpy(char *dest, const char *src, char c);
void			ft_print_tabtab(char **tab);
int				ft_find_next_sqrt(int nb);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_lstadd(t_list **alst, t_list *new);
char			**ft_strsplit(char const *src, char c);
void			ft_striteri(char *s, void(*f)(unsigned int, char *));
void			ft_striter(char *s, void(*f)(char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strjoin_free(char const *s1, char const *s2, int j);
char			*ft_itoa(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
void			ft_putnbr(int n);
void			ft_putendl(char const *s);
void			ft_putstr(char const *s);
void			ft_putchar(char c);
void			ft_strclr(char *s);
void			ft_strdel(char **as);
char			*ft_strnew(size_t size);
void			ft_memdel(void **ap);
void			*ft_memalloc(size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memove(void *dest, const void *src, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *s, int c, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t n);
char			*ft_strrchr(const char *s, int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strchruno(const char *s, int c);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strncat(char *dest, const char *src, size_t n);
int				ft_strcmp(const char *tab, const char *tab2);
int				ft_strncmp(const char *tab, const char *teub, size_t n);
char			*ft_strstr(const char *string, const char *pik);
int				ft_atoi(const char *str);
int				ft_isup(char c);
int				ft_islow(char c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
char			*ft_strcpy(char *dest, const char *str);
char			*ft_strdup(const char *tab);
size_t			ft_strlen(const char *str);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_isintab(const char *s, const char *c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_isascii(int c);
#endif
