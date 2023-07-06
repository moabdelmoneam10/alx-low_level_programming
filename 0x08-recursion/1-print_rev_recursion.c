/**
 *  _print_rev_recursion - print the string
 *
 * @s: the string we print
 */
void _print_rev_recursion(char *s)
{
	if (s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putcahr(*s);
}
