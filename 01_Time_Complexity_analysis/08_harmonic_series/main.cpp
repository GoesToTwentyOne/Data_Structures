for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j=j+1){
      cout<<i<<j<<\n
    }
  }
  /*
  iteration
  i---->j
  0     n
  1     n/2
  2     n/3
  3     n/4
  ..
  n   n/n
  (n/1+n/2+n/3+n/4+....n/n)
  =n(1+n//2+n/3+n/4...1/n)//harmonic series=ln(n)
  */
  //Time complexity=O(nlogn)
