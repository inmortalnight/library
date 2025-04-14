//no he hecho la prueba
int isspace(char str)
{
    if(str == ' ' || str == '\f' || str == '\n' || str == '\r' || str == '\t' || str == '\v' )
        return (1);
    return (0);
}
int isNum(char str)
{
    if('1' <= str && str <= '9')
        return (1);
    return (0);
}
int ft_atoi(const char *nptr)
{
    int result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    i = 0;
    while(nptr[i] && isspace(nptr[i]))
        i++;
    if(*nptr == '-' && *nptr == '+')
    {
        if(*nptr == '-')
        {
            sign *= -1;
            i++;
        }
    }
    while(nptr[i] && isNum(nptr[i]))
    {
        result = (result * 10) + (nptr[i] - '0');
    }
    return (result * sign);
}