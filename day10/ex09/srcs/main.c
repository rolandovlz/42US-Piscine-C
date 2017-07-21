/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 00:05:05 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/11 20:22:02 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

int		ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	return (0);
}
t_op	calculate(char *op)
{
	if (op[0] == '+' && op[1] == '\0')
		return (ft_add);
	else if (op[0] == '-' && op[1] == '\0')
		return (ft_sub);
	else if (op[0] == '*' && op[1] == '\0')
		return (ft_mul);
	else if (op[0] == '/' && op[1] == '\0')
		return (ft_div);
	else if (op[0] == '%' && op[1] == '\0')
		return (ft_mod);
	else
		return (0);
}

int		main(int argc, char *argv[])
{
	int		a;
	int		b;
	int		res;
	t_op	op;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		op = calculate(argv[2]);
		if (op == ft_div && b == 0)
			ft_putstr("Stop : division by zero");
		else if (op == ft_mod && b == 0)
			ft_putstr("Stop : modulo by zero");
		else if (op != 0)
		{
			res = op(a, b);
			ft_putnbr(res);
		}
		else
			ft_putnbr(0);
		write(1, "\n", 1);
	}
	return (0);
}
