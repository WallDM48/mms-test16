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
char *names_list[] = {
    "Kola",
    "Fanta",
    "Sprite",
    "Voda",
    "Sok"
};
char *type_list[] = {"A","B","C","D"};
void init_random_product(Product *p) {
    static int id_counter = 0;
    
    p->old_price = (499 + rand()%(10045 - 499))/100.;
    p->new_price = (499 + rand()%(10045 - 499))/100.;
    p->id = id_counter++;
    p->product_type = 'A' + rand()%4;
    strcpy(p->product_name, names_list[rand()%5]);
}
void print_product(Product *p) {
    printf("id:%d, Product type: %c, Product name: %s, old price: %.2f, new price: %.2f\n",
        p->id,p->product_type,p->product_name,p->old_price,p->new_price);
}

int compare_products(const void *p1, const void *p2) {
    const Product *prod1 = p1, *prod2 = p2;
    double sales_diff = (prod1->old_price-prod1->new_price) -
                        (prod2->old_price-prod2->new_price);

    if(fabs(sales_diff) > 0.01) {

        return sales_diff*100;
    }
    

    if(fabs(prod1->product_type - prod2->product_type) !=0) {
       
        return prod2->product_type - prod1->product_type;
    }
 
    int cmp_name = strcmp(prod1->product_name,prod2->product_name);
    if(cmp_name !=0){
        return cmp_name;
    }
   
    return prod1->id - prod2->id;
}
void write_Products(Product *p, FILE *fp){
    fprintf(fp,"id: %d, Product type: %c, Product name: %s, old price: %.2f, new price: %.2f\n",
        p->id,p->product_type,p->product_name,p->old_price,p->new_price);
}

int main(){
    Product *products = malloc(40*sizeof(Product));
    if(!products){
        perror("Cannot allocate memory !\n");
        exit(-1);
    }
    srand(time(0));

    for (int i = 0; i < 40; i++)
    {
        init_random_product(products +i);
    }
    for (int i = 0; i < 40; i++)
    {
        print_product(products+i);
    }
    puts("\n");
    qsort(products,40,sizeof(Product),compare_products);

    for (int i = 0; i < 40; i++)
    {
        print_product(products+i);
    }

    FILE *f = fopen("Products_list","wb");
    if(!f){
        perror("Cannot open the file! \n");
        exit(-1);
    }

    for (int i = 0; i < 40; i++)
    {
        write_Products(products+i,f);
    }
    

    free(products);
    fclose(f);
    return 0;
}