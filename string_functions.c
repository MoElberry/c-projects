

int string_length(char *str)
{
    int i;
    for(i=0; str[i]; i++)
    {

    }
    return i;

}













int compare_string(char *str1,char *str2)
{

    int i,L1,L2;
    L1=string_length(str1);
    L2=string_length(str2);
    if(L1!=L2)
    {
        return 0;
    }
    for(i=0; i<L1; i++)
    {

        if(str1[i]!=str2[i])
        {
            return 0;
        }

    }

    return 1;

}
