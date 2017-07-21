/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:56:53 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/05 23:33:43 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	if (argc > 0)
	{
		while (*argv[0] != 0)
		{
			ft_putchar(*argv[0]);
			argv[0]++;
		}
		ft_putchar('\n');
	}
	return (0);
}
