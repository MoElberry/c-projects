 for(;;)// super loop
    {
        scanf("%d%d",&n1,&n2);
        if(n2>n1)
        {
            for(x=n2-1; x>n1; x=x-1)
            {
                printf("%d  ",x);
            }
        }
        else
        {
           for(x=n1-1; x>n2; x=x-1)
            {
                printf("%d  ",x);
            }
        }
         
      /*  if(n2<n1)
        {
            temp=n1;
            n1=n2;
            n2=temp;
        }
        for(x=n2-1; x>n1; x=x-1)
            {
                printf("%d  ",x);
            }

       */

        printf("\n=======================================\n");

    }
	
/*****************************************************************************/		
	

	 for(;;)// super loop
    {
        scanf("%d%d",&n1,&n2);
       r=0;
       while(n1>=n2)
       {
           r=r+1;
          n1= n1-n2;
          printf("%d   ",n1);
       }
       printf("\nr=%d rem=%d\n ",r,n1);
/*****************************************************************************/	

	
	
	for(;;)// super loop
    {
        sum=0;
        scanf("%d",&n1); //125  3
        x=0;
        n2=n1;
        while(n1>0)
        {
            rem=n1%10;
            sum=sum+rem;
            x=x+1;
            n1=n1/10;

        }

        printf("sum=%d number of digit=%d in %d\n\n",sum,x,n2);

    }
	
/*****************************************************************************/	
	
	while(1)
    {
        fflush(stdin);
        scanf("%c",&c);
        y=c;
        if(c>=n1&&c<='z')
        {

            printf("%c -> %c\n",c,(c-'a')+'A');


        }
        else if(c>='A'&&c<='Z')
        {
            printf("%c is capital letter\n",c);
        }
        else
            {
            printf("%c \n",c);
        }


    }