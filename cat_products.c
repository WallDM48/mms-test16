#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

typedef struct Product
{
     double old_price;
     double new_price;
     unsigned int id;
     char product_type;
     char product_name[11];
}Product;

Product arr[40];
int main(){
    FILE *f = fopen("Products_list","r");
    Product *p = malloc(40*sizeof(Product));
    int i =0;
    while(fread(p,sizeof(Product),40,f)){
       arr[i].id = p->id;
       arr[i].new_price = p->new_price;
       arr[i].old_price = p->old_price;
       strcpy(arr[i].product_name,p->product_name);
       arr[i].product_type = p->product_type;
       i++;
    }
    for(int j =0;j<i;j++){
        printf("id:%d, Product type: %c, Product name: %s, old price: %.2f, new price: %.2f\n",
        arr[j].id,arr[j].product_type,arr[j].product_name,arr[j].old_price,arr[j].new_price);
    }
    fclose(f);
    return 0;
}