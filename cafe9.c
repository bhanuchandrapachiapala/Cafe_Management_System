#include<stdio.h>
#include<conio.h>
#include<windows.h>
struct bill
{
	int bill_id;
	char cust_name[20];
	char item_name[20];
	float quantity[20];
	float price[10];
	float total;
	int n; 
}bi;
struct additem
{
	
	char item_name[20];
	float quantity[20];
	float price;
}ad;
int add_item();
int display_bill();
int q=0;
 main()
{
	int a,b=0;
	while (b == 0)
	{
	printf("\n *************************************************************************************************");
	printf("\n\t                            WELCOME TO CAFE HOUSE                         ");
	printf("\n *************************************************************************************************");
		
	printf("\n\n\t1.GENERATE NEW BILL");
	printf("\n\n\t2.DISPLAY A BILL");
	printf("\n\n\t3.Exit");
	printf("\n\nPRESS CORRESPONDING KEYS:");
	scanf("%d",&a);
	if(a==1)
	{
		add_item();
	}
	else if(a==2)
	{
		display_bill();
	}
	else 
	{
		printf	("Thank You !");
	
		break;
	}
	}

}
   
		
int add_item()
{
    int bill_id;
    char cust_name[20];
    char item_name[20];
    float quantity;
    float price;
    float total;
    int r;	
    FILE *ptr=fopen("3.txt","a");
    system("cls");
    printf("\n\t.............................................................\n");
	printf("\n\t Items:                                  Rate:              ");
	printf("\n\t Americano                                50               ");
	printf("\n\t Latte                                    70               ");
	printf("\n\t Cappucino                                90               ");
	printf("\n\t Macchiato                                110              ");
	printf("\n\t Espresso                                 130              ");
	printf("\n\t Mocha                                    150              ");
	printf("\n\t Irish Coffee                             170              ");
	printf("\n\t Chocolate                                190              ");
	printf("\n\t..............................................................\n");
	printf("\nenter bill ID\n");
    scanf("%d",&bill_id);
    
    fprintf(ptr,"     bill_id=%d\n",bill_id);	
    printf("enter customer name\n");
    scanf("%s",&cust_name);
    fprintf(ptr,"cust_name=%s\n",cust_name);
    printf("enter no. of items\n");
    scanf("%d",&r);
    int i;
    for(i=1;i<=r;i++){	
    printf("enter item %d name\n",i);
    scanf("%s",&item_name);
    fprintf(ptr,"%d. item_name=%s\n",i,item_name);	
    printf("enter quantity\n");
    scanf("%f",&quantity);
    fprintf(ptr,"quantity=%f\n",quantity);	
    printf("enter price\n");
    scanf("%f",&price);
    fprintf(ptr,"price=%f\n",price);

total=total+price*quantity;	}
printf(" ampount =%f",total);
fprintf(ptr,"amount=%f\n",total);
fclose(ptr);
}

int display_bill()
{
	char c[100];
	FILE *ptr=fopen("3.txt","r");
	while(fgets(c,1000,ptr)!=NULL)
	{
		
		printf("\n %s",c);
		
	}
fclose(ptr);
}

   
