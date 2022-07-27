#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>


typedef struct Product{
    unsigned int id; // unique
    float price;  // random
    unsigned short sales_count; // random 
    char name[10]; // random from names_list


}Product;


int id_counter =0;
char *names_list[] ={"Kola","Fanta","Sprite","7up","Mlyako"};


void init_random_product(Product* p1){
    p1->id = id_counter++;
    p1->price=(150+ rand()%(20025-150))/100.0;
    p1->sales_count =rand()%1000;
    strcpy(p1->name,names_list[rand()%5]);

}
void print_product(Product *p){
    printf("Revenue: %.2f, id:%d, price:%.2f, sales count:%d, Name:%s\n",p->price*p->sales_count,p->id,p->price,p->sales_count,p->name);
}
int compare(const void *p1,const void *p2){
   const Product *prod1 = p1, *prod2 = p2;
    double sales_diff = (prod1->price * prod1->sales_count) - (prod2->price*prod2->sales_count);
    if(fabs(sales_diff) > 0.01){
        return sales_diff*100;
    }
    int cmp_res = strcmp(prod1->name,prod2->name);
    if(cmp_res !=0){
        return cmp_res;
    }
    return prod1->id - prod2->id;

}

int main(){
  
    Product *product_list;
    product_list = malloc(30*sizeof(Product));

    if(!product_list){
        perror("Malloc failed\n");
        return -1;
    }

    srand(time(0));

    for(int i=0;i<30;i++){
        init_random_product(product_list+i);
    }
    product_list[0].sales_count = 0;
    product_list[1].sales_count = 0;
    product_list[2].sales_count = 0;
    product_list[0].price = 0;
    product_list[1].price = 0;
    product_list[2].price = 0;

    qsort(product_list,30,sizeof(Product),compare);
    for(int i=0;i<30;i++){
        print_product(product_list+i);
    }

    free(product_list);

    return 0;
}