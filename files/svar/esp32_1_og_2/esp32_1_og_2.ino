void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(400);

  printf("Print Once: ");
  // for (int i=0; i<=10; i=i+2){
  //  printf("%i ",i);
  //}
  // printf("\n");
}

void loop()
{
  // put your main code here, to run repeatedly:
  printf("Prints every 1 sec: ");
  for (int i = 0; i <= 10; i = i + 2)
  {
    printf("%i ", i);
  }
  printf("\n");

  delay(1000);
}
