#include<iostream>

using namespace std;

class stack

{

	public:

	int top;

	char a[100];

	stack()

	{

		top=-1;

	}

	void push(char);

	void pop();

	void eval(char *);

	void display();

};

void stack::push(char y)

{

		top=top+1;

		a[top]=y;

}

void stack::pop()

{

	top=top-1;

}

void stack::eval(char eq[21])

{

	char *e,x,c,b;

	int i,d,r=0,j,s;

	e=eq;

	for(*e;*e!='\0';*e++)

	{

		if(*e=='+'||*e=='-'||*e=='*'||*e=='/'||*e=='^')

		{

			c=a[top];

			pop();

			b=a[top];

			pop();

			if(*e=='+')

			{

				d=(b-48)+(c-48);

				push(d+48);

			}

			else if(*e=='*')

			{

				d=(b-48)*(c-48);

				push(d+48);

			}

			else if(*e=='/')

			{

				d=(b-48)/(c-48);

				push(d+48);

			}

			else if(*e=='-')

			{

				d=(b-48)-(c-48);

				push(d+48);

			}

			else if(*e=='^')

			{

				d=(b-48)^(c-48);

				push(d+48);

			}

		}

		else if(*e!=' ')

		{

		   push(*e);

		   r=r+1;

	    }

	    else if(*e==' ')

	    {

	    	int k[r];

	    	if(r>1)

	    	{

	    		for(i=0;i<r;i++)

	    		{

	    			k[i]=a[top]-48;


	    			pop();

				}

				j=r-1;

				s=1;

				while(j>0)

				{


					s=s+(k[j]*(10^j));


					j--;

				}


				push(s+48);

			}

			r=0;

		}

	}

  	cout<<(a[top]-48);

}

int main()

{

	char a[21];

	cin>>a;

	stack s1;

	s1.eval(a);

}
