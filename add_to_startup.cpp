#include <windows.h>
#include <iostream>

int main(int argc, char ** argv )
{ 
   if ( argc > 1 )
   {
      ShellExecuteA(NULL, "open", "regedit.bat", argv[1] , NULL,SW_HIDE);
   }
   else 
   { 
      std::cout << "Error: missign path to file!" << std::endl;
   }
   
   return 0;
}