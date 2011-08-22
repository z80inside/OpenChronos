#include  "cc430x613x.h"
#include "display.h"
#include "project.h"
#include <string.h>

void main(void)
{
	lcd_init();
	//clear_display_all();

	display_symbol(LCD_ICON_HEART, SEG_ON);
	display_char(LCD_SEG_L1_3, (u8) '1', SEG_ON);
	display_chars(LCD_SEG_L2_4_2, (u8*)"SAN", SEG_ON);
	
	__no_operation();  // For debugger
}
