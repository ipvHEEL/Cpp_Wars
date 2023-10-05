bool isPrime(int num) {
  if(num <= 1 ){return false;}

  for(int i = 2;i*i<=num;i++){
    if(num % i == 0){
      return false;
    }
  }
return true;
  



}
/*Describe(is_Prime)
{
    It(Sample_Test)
    {
        Assert::That(isPrime(1), Equals(false));
        Assert::That(isPrime(3), Equals(true));
        Assert::That(isPrime(5), Equals(true));
    }*/
