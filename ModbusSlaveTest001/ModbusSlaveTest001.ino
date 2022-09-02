//RS-485 Modbus Slave (Arduino UNO)

//Circuit Digest


#include<ModbusRtu.h>       //Library for using Modbus in Arduino



Modbus bus;                          //Define Object bus for class modbus 

uint16_t modbus_array[] = {3,6,9};    //Array initilized with three 0 values

uint16_t au16data[16] = {
  8, 1415, 9265, 4, 2, 7182, 28182, 8, 0, 0, 0, 0, 0, 0, 1, -1 };                      

void setup()

{

  

  bus = Modbus(1,1,4);            //Modbus slave ID as 1 and 1 connected via RS-485 and 4 connected to DE & RE pin of RS-485 Module 

  bus.begin(19200);                //Modbus slave baudrate at 9600

}


void loop()


{

   bus.poll(au16data,16);       //Used to receive or write value from Master 


}
