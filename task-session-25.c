
// return 0->255

static unsigned char x=0;

int fun()
{

    return  x++;
}
int main()
{
    int i,z;
    for(i=0; i<=512; i++)
    {

        z=fun();
        printf("num=%d\n",z);
       
    }

}