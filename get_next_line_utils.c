/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:23:08 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/03/21 15:25:42 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int if_theres_newline(char *buffer)
{
    int a;

    a = 0;
    while (buffer[a] != '\0')
    {
        if (buffer[a] == '\n')
            return (1);
        a++;
    }
    if (buffer[a] == '\0')
        return (0);
    else
        return (0);
}

/*
char    *find_newline(int fd)
{
    static char *buffer = NULL;
    int         newline_position = 0;
    int         a;
    int         bytes_read;
    char        *line;

    buffer = malloc(sizeof(char) * BUFFER_SIZE);
}
*/
