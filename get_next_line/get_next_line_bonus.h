/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:42:46 by kdoulyaz          #+#    #+#             */
/*   Updated: 2021/12/12 23:10:30 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<stdlib.h>
# include<unistd.h>
# include<fcntl.h>
# include<limits.h>
# include<stdio.h>

char	*get_next_line(int fd);
int		check_n(char *save);
size_t	ft_strlen(char *str);
char	*join_str(char const *s1, char const *s2);

#endif
