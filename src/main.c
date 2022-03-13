/*******************************************************************************


Authors:
Date:

Notes:
*******************************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <MLV/MLV_all.h>



int main(int argc, char * const argv[]) {

   struct option longOpts[] = {
      {"help",   no_argument, NULL, 'h'},
      {NULL, 0, NULL, 0}
   };

   char c;

   opterr = 0;
   while ((c = getopt_long(argc, argv, "h", longOpts, NULL)) != -1) {
      switch (c) {
      case 'h':
         printf("Help message\n");
         break;
      case '?':
         break;
      }
   }

   
   return 0;
}