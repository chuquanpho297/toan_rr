#include <stdio.h>
#include <math.h> 
int main()
{
  int i, Number, count; 
  
  printf(" Prime Number from 1 to 100 are: \n");
  printf("2"); 
  for(Number = 3; Number <= 100; Number+=2)
  {
    //count = 0;
    for (i = 2; i <= sqrt(Number)+1; i++){
      if(Number%i == 0)
      {
      //  count++;
        break;
      }
      //if(count == 0 && Number != 1 )
      if(i==sqrt(Number)+1){
        printf(" %d ", Number);
      }  
    }
    
  }
  return 0;
}