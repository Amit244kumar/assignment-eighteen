int main()
{
    char str[20];
    printf("Enter the string:\n");
    gets(str);
    reverse(str);
    printf("The reverse string is \n%s",str);
    getch();
    return 0;
}

void reverse(char s[])
{
    int l,i;
    char t;
    l=length(s);
    for(i=0;i<l/2;i++)
    {
        t=s[i];
        s[i]=s[l-1-i];
        s[l-i-1]=t;
    }
}
int length(char s[])
{
    int i;
    for(i=0;s[i];i++);
    return i;
}
