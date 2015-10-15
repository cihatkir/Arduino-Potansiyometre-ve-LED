/*
*******************************************************************************************
**                                                                                       **
**                                    Arduino 2.Proje                                    **
**                             LED ve Potansiyometre Kullanımı                           **
**                                                                                       **
**                                                                                       **
**                                          Cihat                                        **
**                                                                                       **
*******************************************************************************************
*/
void setup()
{
  pinMode(A0,INPUT);  // Potansiyometre'yi A0 pinine bapladık.
  pinMode(3, OUTPUT); //LED'in bağlı olduğu pin.
  Serial.begin(9600); //Serial Monitör ekranına ne sıklıkta veri düşecek.
}

void loop() 

{
 int konum = analogRead(A0); // ''konum'' değişkenimizin sahip olacağı değer Potansiyometre'nin gönderdiği sayı.
 konum = map(konum,0,1023,0,255); //0-1023 arasındaki değere sahip olan değişkenimizi 0-255'e düşmeye ayarladık.
 Serial.println(konum); // Serial Monitor'de konum değişkenimizin sahip olduğu değeri gösterecek.
 delay(50); //50 milisaniye gecikme uyguluyoruz.
 analogWrite(3, konum); // 3. pine LED'e güç veriyoruz.
}
