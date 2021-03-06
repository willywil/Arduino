#include <CUY_Interface.h>
#include <CUY_Parallel.h>
#include <CUY_Serial_Async.h>
#include <CUY_Serial_Sync.h>
#include <Noritake_VFD_CUY.h>

// ****************************************************
// ****************************************************
// Uncomment one of the communication interfaces below.
//
//CUY_Serial_Async interface(38400,3, 5, 7); // SIN,BUSY,RESET
//CUY_Serial_Sync interface(3, 5, 6, 7); // SIN,BUSY,SCK,RESET
//CUY_Parallel interface(8,9,10, 0,1,2,3,4,5,6,7); // BUSY,RESET,WR,D0-D7
//
// ****************************************************
// ****************************************************

Noritake_VFD_CUY vfd;

void setup() {
  _delay_ms(500);      // wait for device to power up
  vfd.begin(20, 2);    // 20x2 character module
  vfd.interface(interface); // select which interface to use
  // Enter the model class
  // E.g. Y1A for CU24043-Y1A
  // Applicable model classes:
  //   Y1A
  //   YX1A
  //   Y100
  //   YX100
  vfd.isModelClass(Y1A);
  vfd.CUY_init();      // initialize module
  vfd.print("Noritake"); // print Noritake on the first line
}

void loop() {
}
