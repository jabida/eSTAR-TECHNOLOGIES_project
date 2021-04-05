#include <stdio.h>



int movingAvg(int *ptrArrNumbers, long *ptrSum, int pos, int len,
               float nextNum,float *a,float*b)
{
   
*ptrSum = *ptrSum - ptrArrNumbers[pos] + nextNum;
ptrArrNumbers[pos] = nextNum;
return (*a=*ptrSum/len,*b=((*a)*9.0/5.0+32.0));
}

int main(int argc, char *argv[])
{
   
int i,n;
printf("enter n value greater than or equal to 10 ");
scanf("%d",&n);
float s[n];

 
if(n>=10)
{
  for(i=0;i<n;i++)
   {
      printf("enter the temperature");
      scanf("%f",&s[i]);  
       if(s[i] >=46.6)
        {
           printf("enter the correct data with in  0 to 46.6");
            i--;
            continue;
        }
   }
 
int dummy=n-10;
int arrNumbers[5] = {0};
float a=0.0,b=0.0;
int pos = 0;
long sum= 0;
int len = sizeof(arrNumbers) / sizeof(int);
int count = sizeof(s)/sizeof(float);
   for(int i = dummy; i <count;i++)
    {
         movingAvg(arrNumbers, &sum, pos, len, s[i],&a,&b);
         printf("a is  degree centigrade value %.1f,b is degree farenheat value %.1f \n", a,b);
         pos++;
         if (pos >= len)
          {
              pos = 0;
             
          }
 
    }

 
}

else
{
      printf("please enter the n value greater than 10");
}
return 0;

}