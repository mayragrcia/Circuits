//Primeiro circcuito: funcionamento do potenciometro
//Entrada pelo potenciometro

#define pot A0

void setup()
{
	//Habilitando uma comunicação direta da porta serial 
  	//do arduino com o computador
  	Serial.begin(9600);
}

void loop()
{	
  	//Leitura do potenciômetro
	int valorpot = analogRead(pot);
  	Serial.print("Valor = ");
  	Serial.println(valorpot);
      
    delay(100);

}

//Parte II
//Saída pelo LED

#define led 3

void setup()
{
  	Serial.begin(9600);
}

void loop()
{	  
  for(int c=0;c<256;c++){
  	analogWrite(led, c);
    delay(10);
    Serial.println(c);
  }
  
  delay(500);
  for(int c=255;c>=0;c--){
    //Apontando qual a porta que está sendo utilizada e qual valor estou mandando
    analogWrite(led, c); 
  	delay(10);
    Serial.println(c);
  }
  delay(500);
}

//Parte III
//Integração da entrada com a saída: Potenciometro + LED
#define pot A0
#define led 3

void setup(){
    Serial.begin(9600);
}

void loop(){
    int valorpot = analogRead(pot);

    analogWrite(led, valorpot);

    Serial.println(valorpot);
    
    delay(50);

}