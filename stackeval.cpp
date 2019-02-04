#include<iostream>
using namespace std;
int top=-1;
int a[10];
void push(int x)
{
       a[++top]=x;

}
void pop()
{
    if(top==-1)
    {
        cout<<"list is empty";
    }
    else
    {
        top--;
    }
}
int peek()
{
    return a[top];
}
int main()
{
   int i,n;
   int f;
   int a,b;
   char exp;
   char op,e;
cout<<"start entering";
cin>>e;
    while(e=='y')
        {
            cout<<"enter expression";
            cin>>exp;

            if(isalnum(exp))
                {

                    while(exp!='+'&&exp!='-'&&exp!='/'&&exp!='*')
                        {
                            cout<<"expression: "<<exp<<" ";
                            f=int(exp-48);
                            cout<<"f"<<f;
                            push(f);
                            cout<<"enter expression";
                            cin>>exp;
                        }
                           
                }
                 op=exp;
                            cout<<"operator: "<<op<<"\n";

                    //pop();
                    a=peek();
                    int x,y;
                    x=a;
                    cout<<"a: "<<x<<"\n";
                    pop();
                    b=peek();
                    y=b;
                    cout<<"b: "<<y<<endl;
                    pop();


                    switch(op)
                    {
                        case '+':
                            {
                                //int res=x+y;
                            cout<<x+y;
                            push(x+y);
                              break;
                            }

                      
                        case '-':
						{
							cout<<x-y;
						push(x-y);
                        break;}
                        case '*':
                            {
                                cout<<x*y;
                                push(x*y);
                               
                        break;
                            }
                        
                        case '/':
						{
							cout<<x/y;
						push(x/y);
						break;
                    }}

   cout<<"want to enter mre";
   cin>>e;

    }
char c=peek();
cout<<"c:"<<int(c);


    return 0;
}



