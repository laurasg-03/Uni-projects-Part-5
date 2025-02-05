#include <Wire.h> 
#include <DFRobot_ADS1115.h>  
 
// Declaracion de variables globales 
int16_t adc0;   // Variables para los canales de lectura del DFRobot 
DFRobot_ADS1115 ads(&Wire);  // Crea un objeto que asocia a ambas librerías cargadas  
void setup(void)  
{ 
// Configura el puerto serie a 9600 bps 
 Serial.begin(19200); 
// Configura DFRobot-ADS1115     
 ads.setAddr_ADS1115(ADS1115_IIC_ADDRESS0);    
 ads.setGain(eGAIN_ONE);    
 ads.setMode(eMODE_SINGLE);        
 ads.init(); 
} 
void loop(void)  
{ 

 adc0 = ads.readVoltage(0); // lee el valor analógico entre la señal de la entrada A0 y tierra  
 // con la ganancia programada.  
 Serial.print(adc0); 
 Serial.print(",");
 Serial.println(micros());
 } 
