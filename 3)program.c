int main()
{
    char str1[20],str2[20];
    int i;
    printf("Enter first string:\n");
    gets(str1);
    printf("Enter second string:\n");
    gets(str2);
    i=compare(str1,str2);
    if(i==1)
        printf("The first string greater than second");
    else if(i==-1)
        printf("The second string greater than first");
    else
        printf("Both string are equals");
    getch();
    return 0;
}

int compare(char s1[],char s2[])
{
    int i;
    for(i=0;s1[i],s2[i];i++)
    {
        if(s1[i]>s2[i])
            return 1;
        if(s1[i]<s2[i])
            return -1;
    }
    return 0;
}
