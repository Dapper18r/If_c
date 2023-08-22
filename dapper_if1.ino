bool x; //chamando vareavel boleana 

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT); //chamando os pinos
  pinMode(2, INPUT_PULLUP);
}
// o mesmo que whal true 
void loop() {
  // put your main code here, to run repeatedly:
  x = digitalRead(2); // igualando a porta a uma vareavel
if (x==HIGH)
{
  digitalWrite(12, HIGH);
}
else
{
  digitalWrite(12, LOW);
}
}
