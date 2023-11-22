#include<iostream>
using namespace std;
int main(){
int money,choco=0;
cout<<"Enter how much money do you Have:";
cin>>money;
while (money!=0)
{
    choco+=money;
    money/=3;

}
if (money==0)
{
   cout<<"Total No of chocolate you will get : "<<choco<<endl;

}
else if (money==1||money==2)
   
{
    cout<<"Total No of chocolate you will get : "<<(choco)+1<<endl;
}


 return 0;
}


