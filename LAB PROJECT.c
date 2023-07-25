#include<stdio.h>
#include<string.h>

int main()
{
   char Qu[100];
   again:
   gets(Qu);

   char Q1[5]="Hi";
   char Q2[50]="How are you?";
   char Q3[50]="Can you help me?";
   char Q4[50]="Show me Nasit's data";
   char Q5[50]="Show me Sagor's data";
   char Q6[50]="Show me Orin's data";
   char Q7[50]="Show me Ovi's data";
   char Q8[50]="Who are you?";
   char Q9[50]="Who make you?";
   char Q10[50]="Ok bye";
   char Q11[50]="Open calculator";


   if(strcmp(Qu,Q1)==0)
   {
       printf("=> Hello Sumit!\n\n* ");
       goto again;
   }

   else if(strcmp(Qu,Q2)==0)
   {
       printf("=> I am always fine.\n\n* ");
       goto again;
   }

   else if(strcmp(Qu,Q3)==0)
   {
       printf("=> Yeah! Sure, Why not! Tell me \nWhat is Problem:\n\n* ");
       goto again;
   }

   else if(strcmp(Qu,Q4)==0)
   {
       printf("=> Nasit is your friend.\nHis father name is Rahim & His mother name is Mina.\nHis home town is Rajshahi.\nHis phone Number is: 017XXXXXXXXX\n\n* ");
       goto again;
   }

   else if(strcmp(Qu,Q5)==0)
   {
       printf("=> Sagor is your friend.\nHis father name is Rahim & His mother name is Mina.\nHis home town is Barisal.\nHis phone Number is: 017XXXXXXXXX\n\n* ");
       goto again;
   }

   else if(strcmp(Qu,Q6)==0)
   {
       printf("=> Orin is your friend.\nHis father name is Rahim & His mother name is Mina.\nHis home town is Dhaka.\nHis phone Number is: 017XXXXXXXXX\n\n* ");
       goto again;
   }

   else if(strcmp(Qu,Q7)==0)
   {
       printf("=> Ovi is your friend.\nHis father name is Rahim & His mother name is Mina.\nHis home town is Dinajpur.\nHis phone Number is: 017XXXXXXXXX\n\n* ");
       goto again;
   }

   else if(strcmp(Qu,Q8)==0)
   {
       printf("=> I am your Personal Assistant.\n\n* ");
       goto again;
   }

   else if(strcmp(Qu,Q9)==0)
   {
       printf("=> \n Nasit,\n Sumit,\n Orin,\n Sagor,\n Ovi,\n\n Those make me together.\n\n* ");
       goto again;
   }


   /*Calculator*/
   else if(strcmp(Qu,Q11)==0)
   {
       printf("=>\n\n\n");
       printf("        *************************************************************** \n");
       printf("        **                                                           ** \n");
       printf("        **                  Open Calculator Mode                     ** \n");
       printf("        **                                                           ** \n");
       printf("        *************************************************************** \n\n\n\n\n");

       float O,N1,N2,A;
       calAgain:
       printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit!");
       printf("\nEnter your option:");
       scanf("%f",&O);

       if(O==1)
       {

           printf("\nEnter X: ");
           scanf("%f",&N1);
           printf("\nEnter Y: ");
           scanf("%f",&N2);
           A=N1+N2;
           printf("X+Y= %.2f\n\n\n",A);
           goto calAgain;
       }

       else if(O==2)
       {

           printf("\nEnter X: ");
           scanf("%f",&N1);
           printf("\nEnter Y: ");
           scanf("%f",&N2);
           A=N1-N2;
           printf("X-Y= %.2f\n\n\n",A);
           goto calAgain;
       }

       else if(O==3)
       {

           printf("\nEnter X: ");
           scanf("%f",&N1);
           printf("\nEnter Y: ");
           scanf("%f",&N2);
           A=N1*N2;
           printf("X*Y= %.2f\n\n\n",A);
           goto calAgain;
       }

       else if(O==4)
       {

           printf("\nEnter X: ");
           scanf("%f",&N1);
           printf("\nEnter Y: ");
           scanf("%f",&N2);
           A=N1/N2;
           printf("X/Y= %.2f\n\n\n",A);
           goto calAgain;
       }

       else if(O==5)
       {
           goto again;
       }
       else
       {
           printf("Wrong Option\n\n\n");
           goto calAgain;
       }

   }

   else if(strcmp(Qu,Q10)==0)
   {
       printf("=> Bye Bye\n\n* ");
       goto exit;
   }

   else
   {
       printf("=> Sorry, I can Not Understand!\n\n* ");
       goto again;
   }

   exit:
       exit(0);


   return 0;
}
