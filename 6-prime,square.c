

    while(1)
    {
         flag=0;
        scanf("%d",&n);
        if(n<2)
        {
            flag=1;
             printf("NOT Prime\n");
        }
        for(i=2;i<=n/2&&flag==0;i=i+1)
        {
            if(n%i==0)
            {

               printf("NOT Prime\n");
                flag=1;

              // break;
            }


        }

        if(flag==0)
         printf("Prime\n");
        printf("i=%d\n",i);


        printf("\n=========================================\n");


    }
	
	
	
	while(1)
    {
         flag=0;
        scanf("%d",&n); 

        for(i=1;i*i<=n&&flag==0;i=i+1)
        {
            if((i*i==n))
            {

               printf("Square and root =%d\n",i);
                flag=1;

              // break;
            }


        }

        if(flag==0)
         printf("not Square nearest root=%d\n",i-1);
        printf("i=%d\n",i);


        printf("\n=========================================\n");


    }