#include <stdio.h>
#include <stdbool.h>
bool cond (int x) {
  int number;
  int n1=-1, n2=-1, res=0;
  while (x > 0){
    number=x%10;
    x /= 10;
    if (n1==-1){
      n1=number;
    }
    else {
      if (number!=n1){
    if (n2==-1) n2=number;
    else 
      if (number != n2)
        return false;   
       }      
    }
    res += number;   
   }
  if (res == 30) return true;
  else return false;
}

int main() {
  int x=0, n=7;
  bool is = false;
  while (true) {
    x=n*2*7*11;
    if (x >9999) break;
    if (cond(x)) {
      printf ("Number = %d\n", x);
      is=true;
    }
    n++;
  }

  if (!is){
    printf ("No result\n");
  }
  return 0;

}
