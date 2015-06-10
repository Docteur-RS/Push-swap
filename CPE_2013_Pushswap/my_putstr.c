/*
** my_putstr.c for pushswap in /home/lancel_e/rendu/CPE_2013_Pushswap
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan  5 21:08:37 2014 lancel_e
** Last update Sun Jan  5 21:08:38 2014 lancel_e
*/

int     my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
