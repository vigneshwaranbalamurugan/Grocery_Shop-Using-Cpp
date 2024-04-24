#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;
class product{
    char productname[10][10]={"RICE","WHEAT","SUGAR","MOONDALL"};
    char product_ID[10][10]={"22VS01","22VS02","22VS03","22VS04"};
    int quantity[4]={100,100,200,60};
    int unit_price[4]={50,70,100,60};
    char x[20],y[20];
    int amount,i;
    int quan,flag=0;
    public:
    void productdisp(){
        cout<<"DETAILS:"<<endl<<endl;
        for(i=0;i<4;i++)
        {   
            cout<<"PRODUCT NAME:"<<productname[i]<<endl;
            cout<<"PRODUCT ID:"<<product_ID[i]<<endl;
            cout<<"QUANTITY:"<<quantity[i]<<"kg"<<endl;
            cout<<"UNIT PRICE:Rs:-"<<unit_price[i]<<endl<<endl;
        }
         cout<<"THANK YOU!";
    }
    void work(char x[],int quan)
    {
        for(i=0;i<4;i++)
        {
            if(strcmp(x,productname[i])==0)
            { 
               flag=1;
               if(quan<=quantity[i])
               {   cout<<"Your order Detail:"<<endl<<endl;
                   amount=quan*unit_price[i];
                   cout<<"PRODUCT NAME:"<<productname[i]<<endl;
                   cout<<"PRODUCT ID:"<<product_ID[i]<<endl;
                   cout<<"Quantity:"<<quan<<" KG"<<endl;
                   cout<<"Total Amount:Rs:- "<<amount<<endl<<endl;
                   quantity[i]-=quan;
                   cout<<"THANK YOU!";
                   break;
               }
               else
               {
                   cout<<"Insufficient Storage!"<<endl;
                   cout<<x<<"-"<<"Quantity:"<<quantity[i]<<endl<<endl;
                   cout<<"THANK YOU!";
                  
               }
            }
           
        }
        if(flag==0)
         {
                cout<<"This product is not available!"<<endl<<endl;
                cout<<"THANK YOU!";
                
        }
    }
};
int main(){
   int n,a,quantity;
   char x[100];
   product details;
   product groc;
   cout<<"If you want our service enter 1//Otherwise enter anything:";
   cin>>n;
   cout<<endl;
   if(n==1)
   {
       cout<<"If you want to know our storage details Enter 1//Want to order Enter 2:";
       cin>>a;
       cout<<endl;
       switch(a)
       {
           case 1:
           details.productdisp();
           break;
           case 2:
           cout<<"Enter product name:";
           cin>>x;
           cout<<endl<<"Enter quantity in KG:";
           cin>>quantity;
           cout<<endl;
           groc.work(x,quantity);
           break;
           default:
           cout<<"INVALID INPUT";
           
       }
   }
   else{
       cout<<"THANK YOU";
   }
   return 0;
}










