void uppercase(char s[]);
int main()
{
    char str[20];
    printf("Enter the string:\n");
    gets(str);
    uppercase(str);
    printf("%s",str);
    getch();
    return 0;
}
void uppercase(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>91)
           s[i]-=32;

    }
}
