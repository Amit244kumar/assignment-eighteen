int main()
{
    char str[20];
    int j;
    printf("Enter the string:\n");
    gets(str);
    j=Ispalindrome(str);
    if(j)
        printf("The string is palindrome");
    else
        printf("The string is not palindrome");
    getch();
    return 0;
}
int Ispalindrome(char s[])
{
    char s1[20],i;
    for(i=0;s[i];i++){

          s1[i]=s[i];
    }
    s1[i]='\0';
    reverse(s1);
    for(int i=0;s[i];i++)
        if(s1[i]!=s[i])
            return 0;
    return 1;
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
