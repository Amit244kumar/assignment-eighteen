int main()
{
    char string[50];
    printf("Enter the string:\n");
    gets(string);
    reverseWord(string,wordLength(string));
    printf("%s",string);
    getch();
    return 0;
}
int length(char s[]);
void reverseWord(char str[],int n)
{
    int j=0,v=0;;
    char s[n][10];
    for(int i=0;i<n;i++)
    {
        while(str[j]&&str[j]!=' ')
        {
            s[i][v]=str[j];
            j++;
            v++;
        }
        s[i][v]='\0';
        v=0;
        j++;
    }
    j=0;
    v=0;
    for(int i=n-1;i>=0;i--)
    {
        for(j=0;s[i][j];j++)
        {
            str[v]=s[i][j];
            v++;
        }
        str[v]=' ';
        v++;
    }

}
int length(char s[])
{
    int i;
    for(i=0;s[i];i++);
    return i;
}

int wordLength(char s1[])
{
    int i,v=0;
    for(i=0;s1[i];i++)
    {
        if(s1[i]==' ')
           v++;
    }
    return ++v;
}
