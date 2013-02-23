//int val0 =0;
int val1 =1;
int val2 =2;
int val3 =3;
int val4 =4;
int val5 =5;

void setup ()
{
  //start serial port
  Serial.begin(9600);
//  pinMode (val0, INPUT);
  pinMode (val1, INPUT);
  pinMode (val2, INPUT);
  pinMode (val3, INPUT);
  pinMode (val4, INPUT);
  pinMode (val5, INPUT);

}

void loop()
{
  //read analog input
//  val0 = analogRead(0);
  val1 = analogRead(1);
  val2 = analogRead(2);
  val3 = analogRead(3);
  val4 = analogRead(4);
  val5 = analogRead(5);

//  Serial.print(val0,DEC);
//  Serial.print(" ");
  Serial.print(val1,DEC);
  Serial.print(" ");
  Serial.print(val2,DEC);
  Serial.print(" ");
  Serial.print(val3,DEC);
  Serial.print(" ");
  Serial.print(val4,DEC);
  Serial.print(" ");
  Serial.print(val5,DEC);
  Serial.println();
  
  delay (10);
}




