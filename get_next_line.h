/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:50:09 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/03/21 15:19:33 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h> //For malloc() and free()
# include <unistd.h> //For read()
# include <fcntl.h> //Enlever avant de push, utilisé pour open()
# include <stdio.h> //Enlever avant de push, utilisé pour printf

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

char    *get_next_line(int fd);
int     read_file(int fd);
int     if_theres_newline(char *buffer);

#endif
