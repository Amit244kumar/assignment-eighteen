int main()
{
    char str[20];
    int p;
    printf("Enter the string:\n");
    gets(str);
    p=Isrepeat(str);
    if(p==-1)
        printf("No repeated character");
    else
       printf("The repeated character of is %d position",p);
    getch();
    return 0;
}

int Isrepeat(char s[])
{
    int i;
    char e='\0';
    for(i=0;s[i];i++)
    {
        if(s[i]==e)
            return i;
        else
            e=s[i];
    }
    return -1;
}
