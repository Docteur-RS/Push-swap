/*
** main.c for push_swap in /home/lancel_e/rendu/CPE_2013_Pushswap
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan  5 21:07:01 2014 lancel_e
** Last update Mon Jan  6 22:14:03 2014 lancel_e
*/

#include "all.h"

int		main(int argc, char **argv)
{
  static t_list	*mapile = NULL;
  static t_list	*stack2 = NULL;
  static t_list	*lc = NULL;
  t_var	var;

  var.i = 1;
  while (argv[var.i])
    {
      my_push(&mapile, my_getnbr(argv[var.i]));
      var.i = var.i + 1;
    }
  my_reverse_doc(&mapile);
  while (my_is_empty(mapile) != -1)
    {
      var.len = my_length(mapile);
      var.nb = my_min_doc(mapile, stack2, &var.pos);
      while (var.pos != 0)
	{
	  my_rotate(&mapile);
	  my_var_ini(&var.i, &var.pos, 1, mapile);
	}
      my_delete_first(&mapile, &stack2);
      my_var_ini(&var.i, &var.pos, 2, mapile);
    }
  my_putchar('\n');
}
