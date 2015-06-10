/*
** all.h for push_swap in /home/lancel_e/rendu/CPE_2013_Pushswap
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan  5 21:06:14 2014 lancel_e
** Last update Mon Jan  6 22:23:50 2014 lancel_e
*/

#ifndef PILE_H_
# define PILE_H_

#include <stdlib.h>

typedef struct	s_list
{
  int		valeur;
  struct s_list	*prec;
  struct s_list	*next;
}		t_list;

typedef struct s_var
{
  int		nb;
  int		pos;
  int		i;
  int		len;
}		t_var;

void	my_push(t_list **p, int Val);
void	my_clear(t_list **p);
int	my_length(t_list *p);
int	my_is_empty(t_list *p);
void	my_var_ini(int *i, int *pos, int flag, t_list *p);
int	my_min_doc(t_list *p, t_list *stack2, int *pos);
void	my_delete_first(t_list **p, t_list **stack2);
void	my_reverse_doc(t_list **p);
void	my_clear_all(t_list *tmp, t_list *lc);
void	my_rotate(t_list **p);
int	main(int argc, char **argv);
int	nbr_comp(char *str);
int	sign_comp(char *str);
int	my_getnbr(char *str);
int	my_power_rec(int nb, int power);
int	new_fonc(int nb, int power, int resul,int i);
void	my_putchar(char c);
int	my_putstr(char *str);

#endif /* !PILLE_H_ */
