#include <iostream>
//######################################################
std::string ReverseMe(std::string msg)
{
    std::string result = "";
    for(int i=0;i<msg.length();i++)
    {
        result = msg[i]+result ;
    }
    return result;
}
//######################################################
int len(int msg[])
{
    int i = 0;
    while (msg[i]!='\0')
    {
        i+=1;
    }
    return i-12;

}
//######################################################
std::string Range(std::string msg,int start,int end)
{
    std::string result;
    if(start > end)
    {
        for(int i = start;i<end;i++)
        {
            result += msg[i];
        }
    }
    else
    {
        for(int i = end;i<start;i++)
        {
            result += msg[i];
        }
    }
    return result;
}
//######################################################
int Max(int num[])
{
    int lenght = len(num);
    int max = 0;
    for(int i = 0;i<lenght;i++)
    {
        if(max<num[i])
        {
            max = num[i];
        }
    }
    return max;
}
//######################################################
int Min(int num[])
{
    int lenght = len(num);
    int max = num[0];
    for(int i = 0;i<lenght;i++)
    {
        if(max>num[i])
        {
            max = num[i];
        }
    }
    return max;
}
//######################################################
int sorted(int num[])
{
    for(int i=0;i<len(num);i++)
    {
        for(int j=i+1;j<len(num);i++)
        {
            if (num[i]>num[j])
            {
                int swap = num[i];
                num[i] = num[j];
                num[j] = swap;
            }
        }
    }
    return num;
}