int tonum(char *s)
{
	unsigned int n = 0, i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			n = (n * 10 + s[i]) - '0';
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
		else
			return(-1);
	}
	return (n);
}
