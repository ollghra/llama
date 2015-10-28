#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include <kernel/tty.h>
#include <arch/i386/gdt.h>

void kernel_early(void)
{
  terminal_initialize();
  gdt_install();
  idt_install();
}

void kernel_main(void)
{
  printf("Hello, kernel World!\n");
	/* printf("                    ___~___\n                ___(__((__(___                  /|>\n \
               (_((_((_((_((_(                 / |\\\n\
             \\=-:--:--:--:--:--.              /__|_\\\n\
______________\\_o__o__o__o__o_/_______________\\____/__________________________\n^^^^^^^^^^^^^^ ---------------- ^^^^^^^^^^^^^^ ----- ^^^^^^^^^^^^^^^^^^^^^^^^^\n^^^^^^^^^^^^^^^ --------------- ^^^^^^^^^^^^^^^ ---- ^^^^^^^^^^^^^^^^^^^^^^^^^\n^^^^^^^^^^^^^^^^^ ------------ ^^^^^^^^^^^^^^^^^  -- ^^^^^^^^^^^^^^^^^^^^^^^^^\n^^^^^^^^^^^^^^^^^^^ --------- ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n^^^^^^^^^^^^^^^^^^^^^ ------ ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");*/
 //printf("%x%x%x",5,0x50,0x506);
}
