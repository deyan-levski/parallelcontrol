// A simple LPT port controller / I/O toggler.
//
// Deyan Levski - deyan.levski@gmail.com , 04.01.2015, Ruse, Bulgaria
//
//

#include <stdio.h>
#include <stdlib.h>
//#include <unistd.h>
#include <sys/io.h>


#define base 0x0378           /* printer port base address */
#define value 0            /* numeric value to send to printer port */

main(int argc, char **argv)

{

   if (ioperm(base,1,1))

    fprintf(stderr, "Couldn't get the port at %x\n", base), exit(1);

    outb(value, base); // Put value to port

}
