#include<stdio.h>
int main(){
    int choice,quantity,again,total,subtotal=0,totalquantity=0;
    float gst,Final_Bill;

    do{
        printf("\n**********************************************");
        printf("\n   Welcome to Aamchi Maharashtrian Kitchen \n");
        printf("**********************************************");
        printf("\nSelect items \n");

        printf("Staters: \n   1.Kothimbir Vadi  Rs.120 \n   2.Sabudana Vada Rs.100 \n   3.Solkadhi Rs.80 \n Main Course:\n   4.Misal Pav  RS.180 \n   5.Vada Pav  Rs.80 \n   6.Puran Poli Rs.100 \n   7.Special Maharashtrian Thali  Rs.250 \nDesserts: \n   8.Shrikhand Rs.130 \n   9.Modak Rs.120 \n10.EXIT");
        printf("\n------------------------------------------------\n");
        scanf("%d",&choice);

        if(choice==10){
            printf("Thank you visit again... \n");
            break;
        }
        else if(choice>10 ||  choice<=0){
            printf("Sorry item number incorrect \n");
            continue;
        }

        do{
            printf("\nEnter Quantity:");
            scanf("%d",&quantity);
            
            if(quantity<=0){
                printf("Invalid Quantity....! \n");
            }
        }while(quantity<=0);


        switch(choice){
            
            case 1:
            total=120*quantity;
            subtotal=subtotal+total;
            printf("Kothimbir Vadi x%d added to cart \n",quantity);
            totalquantity+=quantity;
            break;

            case 2:
            total=100*quantity;
            subtotal+=total;
            printf("Sabudana Vada x%d added to cart \n",quantity);
            totalquantity+=quantity;
            break;

            case 3:
            total=80*quantity;
            subtotal+=total;
            printf("Solkadhi x%d added to cart \n",quantity);
            totalquantity+=quantity;
            break;

            case 4:
            total=180*quantity;
            subtotal+=total;
            printf("Misal Pav x%d added to cart  \n",quantity);
            totalquantity+=quantity;
            break;

            case 5:
            total=80*quantity;
            subtotal+=total;
            printf("Vada Pav x%d added to cart \n",quantity);
            totalquantity+=quantity;
            break;

            case 6:
            total=100*quantity;
            subtotal+=total;
            printf("Puran Poli x%d added to cart \n",quantity);
            totalquantity+=quantity;
            break;

            case 7:
            total=250*quantity;
            subtotal+=total;
            printf("Special Maharashtrian Thali x%d added to cart \n",quantity);
            totalquantity+=quantity;
            break;

            case 8:
            total=130*quantity;
            subtotal+=total;
            printf("Shrikhand x%d added to cart \n",quantity);
            totalquantity+=quantity;
            break;

            case 9:
            total=120*quantity;
            subtotal+=total;
            printf("Modak Vadi x%d added to cart \n",quantity);
            totalquantity+=quantity;
            break;

            default:
            printf("Sorry item number incorrect \n");
            break;
        }

        printf("\n\nDo you want to order another item?");
        printf("\n Yes -->1");
        printf("\n No -->2");
        printf("\nEnter your choice: ");
        scanf("%d", &again);

    }while(again==1);

    gst=subtotal*0.18;
    Final_Bill=subtotal+gst;

    printf("\n\n====================================");
    printf("\n           FINAL BILL");
    printf("\n====================================\n");
    printf(" Total itedms : %d \n",totalquantity);
    printf(" Subtotal : Rs.%d \n", subtotal);
    printf(" GST (18%%): Rs.%.2f \n", gst);
    printf(" Final Bill: Rs.%.2f \n", Final_Bill);
    printf("\n====================================");
    printf("\n Thank You! Visit Again. \n");
    printf("====================================\n");

    return 0;
}