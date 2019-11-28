int len(char *ptr)
{
	char *start=ptr;

	while(*ptr)
	{
		ptr++;
	}

	return(ptr-start);
}
