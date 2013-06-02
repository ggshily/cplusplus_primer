int (*pf) (void);

int f(void)
{
	pf = &f;
	pf = ***f;
	pf();
	(***pf)();
	(***********f)();
}

int main()
{
	return 0;
}
