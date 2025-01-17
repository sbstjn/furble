//  This is the dark theme. See how little you need to change for a different look?

#define TFT_FURBLE (0xFB60) // color565(255,111,0)
{
	ezTheme theme;

	theme.name = "Mono Furble";										// Change this when making theme
	theme.background = TFT_BLACK;
	theme.foreground = TFT_WHITE;
	// theme.header_height = 23;
	// theme.GFXfont* header_font = &FreeSansBold9pt7b;
	// theme.header_hmargin = 5;
	// theme.header_tmargin = 3;
	theme.header_bgcolor = TFT_BLACK;
	theme.header_fgcolor = TFT_FURBLE;					
	// theme.GFXfont* print_font = mono6x8;					
	theme.print_color = theme.foreground;					
	// theme.GFXfont* clock_font = mono12x16;
	// theme.longpress_time = 250;								//milliseconds
	// theme.button_height = 19;								
	// theme.GFXfont* button_font = &FreeSans9pt7b;			
	// theme.button_tmargin = 1;								
	// theme.button_hmargin = 5;								
	// theme.button_gap = 3;									
	// theme.button_radius = 8;								
	theme.button_bgcolor_b = TFT_WHITE;					
	theme.button_bgcolor_t = TFT_WHITE;					
	theme.button_fgcolor = TFT_BLACK;					
	// theme.button_longcolor = TFT_WHITE;					
	// theme.input_top = 50;									// pixels below ez.canvas.top()
	// theme.input_hmargin = 10;								// The distance between text box and edge of screen
	// theme.input_vmargin = 10;								// Vertical margin _inside_ the text box
	// theme.GFXfont* input_font = &FreeMonoBold12pt7b;		
	// theme.GFXfont* input_keylock_font = &FreeSansBold9pt7b;
	theme.input_bgcolor = TFT_BLACK;
	// theme.input_fgcolor = TFT_GREEN;						
	// theme.input_cursor_blink = 500;							// milliseconds
	// theme.input_faces_btns = 18;							
	// theme.GFXfont* tb_font = &FreeSans9pt7b;				
	theme.tb_color = theme.foreground;							
	// theme.tb_hmargin = 5;
	// theme.menu_lmargin = 20;								
	// theme.menu_rmargin = 10;
	// theme.menu_arrows_lmargin = 5;
	theme.menu_item_color = theme.foreground;					
	theme.menu_sel_bgcolor = theme.foreground;					
	theme.menu_sel_fgcolor = theme.background;					
	// theme.GFXfont* menu_big_font = &FreeSans12pt7b;			
	// theme.GFXfont* menu_small_font = &FreeSans9pt7b;		
	// theme.menu_item_hmargin = 10;							
	// theme.menu_item_radius = 8;							
	// theme.GFXfont* msg_font = &FreeSans12pt7b;				
	theme.msg_color = theme.foreground;						
	// theme.msg_hmargin = 20;								
	// theme.progressbar_line_width = 4;						
	// theme.progressbar_width = 25;							
	theme.progressbar_color = theme.foreground;				
	// theme.signal_interval = 2000;						
	// theme.signal_bar_width = 4;							
	// theme.signal_bar_gap = 2;
	// theme.battery_bar_width = 26;
	// theme.battery_bar_gap = 2;
	theme.battery_0_fgcolor = TFT_FURBLE;
	theme.battery_25_fgcolor = TFT_FURBLE;
	theme.battery_50_fgcolor = TFT_FURBLE;
	theme.battery_75_fgcolor = TFT_WHITE;
	theme.battery_100_fgcolor = TFT_WHITE;

	theme.add();
}
