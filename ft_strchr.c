char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == c)
            return (*s);
        s++;
    }
    return (*s);
}
// deberia devolver un pointer al null o a la posición de la coincidencia