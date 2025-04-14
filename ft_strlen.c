size_t ft_strlen(const char *s)
{
    size_t i;
    while (*s++)
        i++;
    return (i);
}
// algo falla en el entorno de casa