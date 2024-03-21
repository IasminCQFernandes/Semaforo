// C++ code
//
#define led_vermelho 8
#define led_amarelo 9
#define led_verde  10
#define pedestre_verde  3
#define pedestre_vermelho  2
void setup()
{
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}
void vermelho(int tempo){
	digitalWrite(led_vermelho, HIGH);
  	digitalWrite(led_amarelo, LOW);
  	digitalWrite(led_verde, LOW);
  	digitalWrite(pedestre_verde, HIGH);
  	digitalWrite(pedestre_vermelho, LOW);
  	delay(tempo * 1000); 	
}
void amarelo(int tempo){
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, HIGH);
  digitalWrite(led_verde, LOW);
  digitalWrite(pedestre_verde, LOW);
  
  // Fazendo o LED do pedestre_vermelho piscar
  for(int i = 0; i < 5; i++) {
    digitalWrite(pedestre_vermelho, HIGH);
    delay(500);
    digitalWrite(pedestre_vermelho, LOW);
    delay(500);
  }
}
void verde(int tempo){
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, HIGH);
  digitalWrite(pedestre_verde, LOW);
  digitalWrite(pedestre_vermelho, HIGH);
  delay(tempo * 1000);	 
}
void loop()
{
  	verde(2);
  	amarelo(2);
  	vermelho(2);
  	
}