/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:23:05 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/03/21 15:21:43 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int read_file(int fd)
{
    char    *line;

    line = NULL;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, line, 0) < 0)
        return (0);
    else
        return (1);
}

char    *get_next_line(int fd)
{
    char    *line;
    int     a;

    line = NULL;
    a = read_file(fd);
    if (a == 0)
        return ("Problem read_file or BUFFER_SIZE or FD\n");//Changer le return pour NULL avant de remettre
    else if (a == 1)
        return ("It works for now!\n");
    return ("Ça ne devrait pas être dans ce return là...\n");
}

int main(void)
{
    char *line = "\nAlloComment vas-tu?";
    int a;

    a = 0;
    a += if_theres_newline(line);
    if (a == 1)
        printf("There's a newline!");
    else if (a == 0)
        printf("There isn't a newline");
    return (0);
}

/*
    int fd;

    fd = open("myfile.txt", O_RDONLY);
    printf("%s", get_next_line(fd));
*/