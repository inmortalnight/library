char *ft_strrchr(const char *s, int c)
{
    while (s)
    {
        if (*s == c)
            return ;
    }
}
//devolver el puntero a la ultima coincidencia