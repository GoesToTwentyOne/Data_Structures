int fibo(int n){
  if(n<1){
    return 1;
  }
  return fibo(n-1)+fibo(n-2);
}
/*
fibo(0)=1
fibo(1)=1
fibo(2)=3
fibo(3)=5
fibo(4)=9
fibo(5)=15
fibo(6)=25
fibo(7)=41
*/
//Time complexity=2^n
