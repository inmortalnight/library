int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (i < n && (s1[i] && s2[i]))
    {
        if (s1[i] != s2[i])
            return (s1 - s2);
        i++;
    }
    return (0);
}
//fallo de size_t en casaW