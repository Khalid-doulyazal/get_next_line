/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 18:10:32 by kdoulyaz          #+#    #+#             */
/*   Updated: 2021/12/12 23:11:01 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdlib.h>
# include<unistd.h>
# include<fcntl.h>
# include<stdio.h>

char	*get_next_line(int fd);
int		check_n(char *save);
size_t	ft_strlen(char *str);
char	*join_str(char const *s1, char const *s2);

#endif
