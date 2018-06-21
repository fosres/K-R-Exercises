#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include <math.h>
#include <string.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);
int val_length;
void clear(void);
void print_elements(void);

#define MAXVAL 100 /* maximum depth of val stack */

int sp = 0;  /* next freee stack position */

static double val[MAXVAL]; /* value stack */

/* reverse Polish calculator */



int main()
{

	int type;
	double op2;
	static char s[MAXOP];
	static int sign;
	double temp;
	int IS_CHAR_COMMAND = 0;
	static int val_length;

	while ((type = getop(s)) != EOF)
	{
		switch(type)
		{
			case NUMBER:
				if ( sign == -1 )
				{
					push(-atof(s));
					sign = 1;
					break;
				}

				push(atof(s));
				break;
			case '+':
				push(pop()+pop());
				break;
			case '*':
				push(pop()*pop());
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop()/op2);
				else
					printf("error: zero divisor\n");
				break;
			case '-':
				if ( (sp%2 != 0) || (sp == 0 ) )
				{	
					sign = -1;
					break;
				}
					
				op2 = pop();
				if (op2 != 0.0)
					push(pop()-op2);
				else
					printf("error: zero divisor\n");
				break;
			case '%':
				op2 = pop();
				if (op2 != 0.0)
					push(fmod(pop(),op2));
				else
					printf("error: zero divisor\n");
				break;
			case 'p': /* Print value on top stack */
				printf("\tTop value: %.8g\n",val[0]);
				IS_CHAR_COMMAND = 1;
				break;
			case 'd': /* Duplicate top value */
				val[1] = val[0];
				IS_CHAR_COMMAND = 1;
				break;
			case 's': 
				temp = val[0];
				val[0] = val[1];
				val[1] = temp;
				IS_CHAR_COMMAND = 1;
				break;
			case 'c': /* clear contents of val array stack */
				clear();
				IS_CHAR_COMMAND = 1;
				break;
			case 'v':
				printf("%d\n",val_length);
				print_elements();
				IS_CHAR_COMMAND = 1;
				break;
			case '\n':
				if (IS_CHAR_COMMAND)
				{ IS_CHAR_COMMAND = 0;}
				else
				{
				printf("\t%.8g\n",pop());
				}
				break;
			default:
				printf("error: unknown command %s\n",s);
				break;
		}
	}
		return 0;
}


/* push: push f onto value stack */
void push(double f)
{

	if (sp < MAXVAL)
	{
		val[sp++] = f;
		val_length++;
	}
	else
	{
		printf("error: stack full, can't push %g\n",f);
	}

}

/* pop: and return top value from stack */
double pop(void)
{

	if (sp > 0)
	{	
		return val[--sp];
	}
	else
	{
		printf("error: stack empty\n");
		return 0;
	}

}


int getch(void);
void ungetch(int);

/*getop: get next operator or numeric operand */
int getop(char s[])
{
	
	int i, c;

	while ((s[0] = c = getch()) == ' ' || c == '\t');

	s[1] = '\0';

	if (!isdigit(c) && c != '.')
		return c; 		/* not a number */
	i = 0;
	if (isdigit(c)) 		/* collect integer part */
	{
		while (isdigit(s[++i] = c = getch()));
	}
	if (c == '.')
	{
		while (isdigit(s[++i] = c = getch()));
	}
	s[i] = '\0';
	if ( c != EOF)
	{
		ungetch(c);
	}
	return NUMBER;

}

#define BUFSIZE 100

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */

int getch(void) /* get a (possibly pushed back) character */
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /* push character back on input */
{
	if ( bufp > BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}


void clear()
{
	int i = 0;
	while (i < val_length )
		val[i++] = 0;
	sp = 0;	

}

void print_elements()
{
	for ( int i = 0; i < val_length; i++)
		printf("v[%d] = %.8g\n",i,val[i]);
}
