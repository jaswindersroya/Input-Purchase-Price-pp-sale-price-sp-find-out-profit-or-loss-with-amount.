//Input Purchase Price(pp) & sale price(sp) & find out profit or loss with amount.
//profit = pp-sp, loss = sp-pp
#include <stdio.h>

int main()
{
    //delclare variables
    float pp,sp,loss,profit;
    
    //user input
    printf("enter purchase price and sales price:");
    scanf("%f %f",&pp,&sp);
    
    //if-else statment
    if(pp>sp){
        loss = pp-sp;
        printf("you have lost %f dollars after this product",loss);
    }else
    {
        profit = sp-pp;
        printf("you gain profit of %f dollars after this product",profit);
    }
    
    printf("\nHave a nice day!");
  
}

