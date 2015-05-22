void setup() {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);


}

void loop() {
  
//1  tots apagats
digitalWrite(2,LOW);  
digitalWrite(3,LOW);  
digitalWrite(4,LOW); 
digitalWrite(5,LOW); 
digitalWrite(6,LOW); 
digitalWrite(7,LOW);  
digitalWrite(8,LOW); 
digitalWrite(9,LOW);  
digitalWrite(10,LOW);  
digitalWrite(11,HIGH); //Niv.1 
digitalWrite(12,HIGH); //Niv.2 
digitalWrite(13,HIGH); //Niv.3

delay(1000);


//2  tots encesos
digitalWrite(2,HIGH); 
digitalWrite(3,HIGH);  
digitalWrite(4,HIGH);  
digitalWrite(5,HIGH); 
digitalWrite(6,HIGH); 
digitalWrite(7,HIGH);  
digitalWrite(8,HIGH);
digitalWrite(9,HIGH); 
digitalWrite(10,HIGH);  
digitalWrite(11,HIGH);  //Niv.1
digitalWrite(12,HIGH);  //Niv.2
digitalWrite(13,HIGH);  //Niv.3

delay(1000);

}
