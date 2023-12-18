#include<stdio.h>
    #include<string.h>
    
    
    void print(int b[18],char item[18][100],int c[18],int *t){
        printf(" Id\tItems\t\tQuantity\t\t\tCost\n");
        for(int i=0;i<18;i++)
      {
      if(b[i]!=0)
      {
        printf(" %d\t%s\t\t%d\t\t\t%d\n",i,item[i],b[i],(c[i] * (b[i])));
      }
      }
      printf(" Total Cost\t\t\t\t\t\t%d\n\n",*t);
    }
    
    void main()
    {
     printf("\n\n\n\n\n\n\t\t\t\t=======================\n");
     printf("\t\t\t\tWelcome to GROSS 4 MORE \n");
     printf("\t\t\t\t=======================\n\n\n\n");
    
     static int totalCost;
     int i,j,choice,c=1,a[18],cost[18];
     for(i=0;i<18;i++)
     a[i]=0;
     char str[100];
     char items[18][100]={"Amul 1/2 L","Mother Dairy 1/2 L","Nestle 1/2 L","Maggi","Yippee","Top Ramen","Saffola 2kg","Dalda 2kg","Fortune 2kg","Colgate","Pepsodent",
     "Dabur Red","Clinic Plus","Head and Sholuders","Dove","Hersheys","JINDAL COCOA","Veeba Chocolate Fudge" };
     printf(" Please Enter Your Name : ");
     gets(str);
     printf("\n Hello %s, Welcome to our Online Shopping.\n\n",str);
     do{
      //C is 1 by default
      if(c==1){
      printf("\n Select the product you want to buy and enter the corresponding number\n\n\t 1 - Milk\n\t 2 - Noodles\n\t 3 - Oil\n\t 4 - Toothpaste\n\t 5 - Shampoo\n\t 6 - Chocolate Syrup\n\t Any other number to exit\n ");
      scanf("%d",&choice);
      switch(choice)
      {
       case 1:
       {
        int milkchoice;
        printf("\n Select the brand you want to buy and enter the corresponding number\n\n\t 1 - Amul 1/2 L - Rs.28\n\t 2 - Mother dairy 1/2 L- Rs.26\n\t 3 - Nestle 1/2 L - Rs.27\n\t Any other number to exit\n ");
        scanf("%d",&milkchoice);
        cost[0]=28;
        cost[1]=26;
        cost[2]=27;
        switch(milkchoice)
        {
         case 1:
         {
          int num;
          printf("\n You chose Amul 1/2 L with Rs.28.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[0]++;
           totalCost+=28;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 2:
         {
          int num;
          printf("\n You chose Mother dairy 1/2 L with Rs.26.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[1]++;
           totalCost+=26;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 3:
         {
          int num;
          printf("\n You chose Nestle 1/2 L with Rs.27.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[2]++;
           totalCost+=27;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         default:{
          printf(" Exit from Milk Categoory\n");
          break;
         }
        }
        break;
       }
       case 2:
       {
        int noodleChoice;
        printf("\n Select the brand you want to buy and enter the corresponding number\n\n\t 1 - Maggi - Rs.15/piece\n\t 2 - Yippee - Rs.10/piece\n\t 3 - Top Ramen - Rs.20/piece\n\t Any other number to exit\n ");
        scanf("%d",&noodleChoice);
        cost[3]=15;
        cost[4]=10;
        cost[5]=20;
        switch(noodleChoice)
        {
         case 1:
         {
          int num;
          printf("\n You chose Maggi for Rs.15.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[3]++;
           totalCost+=15;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 2:
         {
          int num;
          printf("\n You chose Yippee - Rs.10.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[4]++;
           totalCost+=10;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 3:
         {
          int num;
          printf("\n You chose Top Ramen - Rs.20.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[5]++;
           totalCost+=20;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         default:{
          printf(" Exit from Noodles Category\n");
          break;
         }
        }
        break;
       }
       case 3:
       {
        int oilChoice;
        printf("\n Select the brand you want to buy and enter the corresponding number\n\n\t 1 - Saffola 2kg - Rs.420\n\t 2 - Dalda 2kg - Rs.380\n\t 3 - Fortune 2kg - Rs.400\n\t Any other number to exit\n ");
        scanf("%d",&oilChoice);
        cost[6]=420;
        cost[7]=380;
        cost[8]=400;
        switch(oilChoice)
        {
         case 1:
         {
          int num;
          printf("\n You chose to buy Saffola 2kg for Rs.420.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[6]++;
           totalCost+=420;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 2:
         {
          int num;
          printf("\n You chose to buy Dalda 2kg for Rs.380.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[7]++;
           totalCost+=380;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 3:
         {
          int num;
          printf("\n You chose to buy Fortune 2kg for Rs.400.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[8]++;
           totalCost+=400;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         default:{
          printf(" Exit from Oil Category\n");
          break;
         }
        }
        break;
        }
        case 4:
         {
        int Toothpaste;
        printf("\n Select the brand you want to buy and enter the corresponding number\n\n\t 1 - Colgate  - Rs.70\n\t 2 - Pepsodent 3 - Rs.88\n\t 3 - Dabur Red - Rs.95\n Any other number to exit\n ");
        scanf("%d",&Toothpaste);
        cost[9]=70;
        cost[10]=88;
        cost[11]=95;
        switch(Toothpaste)
        {
         case 1:
         {
          int num;
          printf("\n You chose to buy Colgate for Rs.70.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[9]++;
           totalCost+=70;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 2:
         {
          int num;
          printf("\n You chose to buy Pepsodent for Rs.88.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[10]++;
           totalCost+=88;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 3:
         {
          int num;
          printf("\n You chose to buy Dabur Red for Rs.95.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[11]++;
           totalCost+=95;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         default:{
          printf(" Exit from Toothpaste Category\n");
          break;
         }
        }
        break;
    
       }
       case 5:
       {
        int shampooChoice;
        printf("\n Select the brand you want to buy and enter the corresponding number\n\n\t 1 - Clinic Plus - Rs.400\n\t 2 - Head and Sholuders - Rs.335\n\t 3 - Dove - Rs.305\n\t Any other number to exit\n ");
        scanf("%d",&shampooChoice);
        cost[12]=400;
        cost[13]=335;
        cost[14]=305;
        switch(shampooChoice)
        {
         case 1:
         {
          int num;
          printf("\n You chose to buy Clinic Plus for Rs.400.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[12]++;
           totalCost+=400;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 2:
         {
          int num;
          printf("\n You chose to buy Head and Sholuders for Rs.335.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[13]++;
           totalCost+=335;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 3:
         {
          int num;
          printf("\n You chose to buy Dove for Rs.305.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[14]++;
           totalCost+=305;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         default:{
          printf(" Exit from Shampoo Category\n");
          break;
         }
        }
        break;
        }
        case 6:
        {
        int chocolate_syrup;
        printf("\n Select the brand you want to buy and enter the corresponding number\n\n\t 1 - Hersheys - Rs.91\n\t 2 - JINDAL COCOA - Rs.165\n\t 3 - Veeba Chocolate Fudge- Rs.84\n\t Any other number to exit\n ");
        scanf("%d",&chocolate_syrup);
        cost[15]=91;
        cost[16]=165;
        cost[17]=84;
        switch(chocolate_syrup)
        {
         case 1:
         {
          int num;
          printf("\n You chose Hersheys for Rs.91.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[15]++;
           totalCost+=91;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 2:
         {
          int num;
          printf("\n You chose JINDAL COCOA for Rs.165.Are you sure to buy.If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[16]++;
           totalCost+=165;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 3:
         {
          int num;
          printf("\n You chose Veeba Chocolate Fudge for Rs.84. Are you sure to buy. If 'Yes' Enter 1 else any number\n ");
          scanf("%d",&num);
          if(num==1)
          {
           a[17]++;
           totalCost+=84;
          }
          printf("\n Your Cost in Cart is %d\n",totalCost);
          break;
         }
         default:{
          printf(" Exit from chocolate syrup \n");
          break;
         }
        }
        break;
       }
       default:
       {
        printf(" Invalid Categories Choice\n");
        break;
       }
      }
      printf("\n %s's cart\n\n",str);
      print(a,items,cost,&totalCost);
    
      printf("\n If you wish to buy anything more Enter\n\n\t 1 to Add Item\n\t 2 to Delete Items\n\t 3 to Change Quantity \n\t Any other number to Exit\n ");
      scanf("%d",&c);
     }
      if(c==2)
      {
       int id;
       printf("\n Enter id to delete item\n ");
       scanf("%d",&id);
       if(id<18&&id>0){
       totalCost=totalCost-(cost[id]*a[id]);
       a[id]=0;
       }
       else{
        printf(" Invalid id\n");
       }
            printf("\n Revised Items \n\n");
            print(a,items,cost,&totalCost);
            printf("\n If you wish to buy anything more Enter\n\n\t 1 to Add Item\n\t 2 to Delete Items\n\t 3 to Change Quantity \n\t Any other number to Exit\n ");
            scanf("%d",&c);
      }
      if(c==3)
      {
       int id,quantity;
       printf("\n Enter id to Change quantity of an item\n ");
       scanf("%d",&id);
       printf("\n Enter quantity to be changed of an item\n ");
       scanf("%d",&quantity);
       if(id<18&&id>=0){
        if(quantity>0 && a[id]>0){
            if(quantity<a[id])
         {
          int dec=a[id]-quantity;
          a[id]=quantity;
           totalCost=totalCost-(cost[id]*dec);
         }
         if(quantity>a[id])
         {
          int inc=quantity-a[id];
          a[id]=quantity;
           totalCost=totalCost+(cost[id]*inc);
         }
         if(quantity==a[id])
         {
          a[id]=quantity;
           totalCost=totalCost+0;
         }
    
        }
        else{
           printf(" Item has no Quantity.Please Try again\n");
        }
         }
         else{
        printf(" Invalid id\n");
       }
            printf("\n Revised Items \n\n");
            print(a,items,cost,&totalCost);
            printf("\n If you wish to buy anything more Enter\n\n\t 1 to Add Item\n\t 2 to Delete Items\n\t 3 to Change Quantity \n\t Any other number to Exit\n ");
            scanf("%d",&c);
      }
     }while(c==1 || c==2 ||c==3);
    
        printf("\n %s's cart\n\n",str);
        print(a,items,cost,&totalCost);
        printf("\n\n Your Final Cost is %d\n\n",totalCost);
    
     int b;
        printf("\n\t Enter rating u wanna give to our store's first online platform\n ");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\n Rating : */*****\n We will definitely try to give our best next time sir\n\n");
            break;
        case 2:
            printf("\n Rating : **/*****\n We will definitely try to give our best next time sir\n");
            break;
        case 3:
            printf("\n Rating : ***/*****\n We will definitely try to give our best next time sir\n");
            break;
        case 4:
            printf("\n Rating : ****/*****\n We will definitely try to give our best next time sir\n");
            break;
        case 5:
            printf("\n Rating : *****/*****\n Thanks a lot sir... your rating literally meant to us a lot \n");
            break;
        }
     printf("\n\n\n\n\n\n\t\t\t====================================\n");
     printf("\n\t\t Thanks %s for Choosing Us and Visit us again.\n",str);
     printf("\n\t\t\t===================================\n");
    
    }
    
    
    