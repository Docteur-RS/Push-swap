/*
** data1.c for push_swap in /home/lancel_e/rendu/CPE_2013_Pushswap
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan  5 21:06:28 2014 lancel_e
** Last update Mon Jan  6 22:15:41 2014 lancel_e
*/

#include "all.h"

void		my_push(t_list **p, int Val)
{
  t_list	*element;

  element = malloc(sizeof(t_list));
  if (element == NULL)
    exit(EXIT_FAILURE);
  element->valeur = Val;
  element->prec = *p;
  *p = element;
}

void		my_clear(t_list **p)
{
  t_list	*tmp;

  while (*p)
    {
      tmp = (*p)->prec;
      free(*p);
      *p = tmp;
    }
}

int	my_length(t_list *p)
{
  int	n;

  n = 0;
  while (p)
    {
      n = n + 1;
      p = p->prec;
    }
  return (n);
}

int	my_is_empty(t_list *p)
{
  if (!p)
    return -1;
  else
    return (0);
}

void	my_var_ini(int *i, int *pos, int flag, t_list *p)
{
  if (flag == 1)
    {
      my_putchar(' ');
      *pos = *pos - 1;
    }
  if (flag == 2)
    {
      *i = 0;
      *pos = 0;
      if (my_is_empty(p) != -1)
	my_putchar(' ');
    }
}
