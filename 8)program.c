int main()
{
    char string[20];
    printf("Enter the string:\n");
    gets(string);
    printf("The string has %d word",countWord(string));
    getch();
    return 0;
}
int countWord(char str[])
{
    int s=0,c=0;
    for(int i=0;str[i];i++)
    {
        if((str[i]==' '||str[i+1]=='\0')&&s==1){
            c++;
            s=0;
        }
        if(str[i]!=' ')
           s=1;

    }
    return c;
}
