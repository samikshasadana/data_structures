    #include<iostream>
    using namespace std;

    class s1
    {
        char a[20];
        int top;
    public:
        s1()
        {
        top=-1;
        //cin>>s;
        }
        void push(int x)
        {
            a[++top]=x;
            //top++;
        }
        char pop()
        {
            return a[top--];
        }
        int priority(char p)
        {
            if(p=='(' )
                return 0;
            else if(p=='+'||p=='-')
                return 1;
            else if(p=='*'|| p=='/')
                return 2;
            else if(p=='^')
                return 3;
        }

    void in_po(char exp[20])
    {
        char *e;
        char x;
        e=exp;
        while(*e!='\0')
        {
            if(isalnum(*e))
                cout<<*e;
            else if(*e=='(')
                push(*e);
            else if(*e==')')
                {
                    while((x=pop())!='(')
                    cout<<x;
                }
            else
            {
                while(priority(a[top])>=priority(*e))
                    cout<<pop();
                push(*e);
            }
            e++;
    }
    while(top!=-1)
    {
        cout<<pop();
    }
    }
};
    int main()
    {
        s1 r;
        char ss[20];
        cin>>ss;
        r.in_po(ss);
    }
