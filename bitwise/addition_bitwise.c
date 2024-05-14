int add(int a, int b)
{
    int c = (a&b)<<1;   //0010 0011 -- 0010 -- 0100
    a = a^b;
    if(c)
    {
        add(c, a);
    }
    else
    {
        return a;
    }
}



int main()
{
   printf("%d\n", add(10, 20));

    return 0;
}