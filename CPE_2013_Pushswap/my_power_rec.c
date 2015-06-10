/*
** my_power_rec.c for push_swap in /home/lancel_e/rendu/CPE_2013_Pushswap
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan  5 21:08:03 2014 lancel_e
** Last update Sun Jan  5 21:08:04 2014 lancel_e
*/

int	my_power_rec(int nb, int power)
{
  int     i;
  int     resul;

  resul = 1;
  i = 0;
  return (new_fonc(nb, power, resul, i));
}

int	new_fonc(int nb, int power, int resul,int i)
{
  if (power < 0)
    return (0);
  if (power == 0)
    return (1);
  if (i < power)
    {
      resul = resul * nb;
      i = i + 1;
      if (i > 12)
	{
	  return (0);
	}
      new_fonc(nb, power, resul, i);
    }
  else
    return (resul);
}
