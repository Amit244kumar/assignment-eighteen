int main()
{
    char str[20];
    int f;
    printf("Enter the string:\n");
    gets(str);
    f=Isalphanumeric(str);
    if(f)
        printf("The string is alphanumeric");
    else
        printf("The string is not alphanumeric");
    getch();
    return 0;
}
int Isalphanumeric(char s[])
{
    int d=0,c=0;
    for(int i=0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<='Z' || s[i]>='a'&&s[i]<='z')
            c++;
        if(s[i]>='0'&&s[i]<='9')
            d++;
        if(d&&c)
            return 1;
    }
    return 0;
}
