Lights1 shopgui_Border_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 shopgui_Check_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx shopgui_shopgui_ci8_aligner[] = {gsSPEndDisplayList()};
u8 shopgui_shopgui_ci8[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x0e, 0x07, 0x09, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x12, 0x16, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x04, 0x17, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x04, 0x17, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x04, 0x17, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x04, 0x17, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x04, 0x17, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x04, 0x17, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x04, 0x17, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0a, 0x0c, 0x0f, 0x10, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x04, 0x17, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0c, 0x0f, 0x0f, 0x07, 0x11, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x04, 0x17, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x07, 0x07, 0x10, 0x0a, 0x0b, 0x0b, 0x0c, 0x0d, 
	0x03, 0x0d, 0x0e, 0x0c, 0x0f, 0x0f, 0x07, 0x09, 
	0x04, 0x12, 0x13, 0x14, 0x15, 0x06, 0x04, 0x01, 
	
};

Gfx shopgui_shopgui_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 shopgui_shopgui_ci8_pal_rgba16[] = {
	0x73, 0x03, 0x93, 0xc3, 0xb4, 0xc5, 0xcd, 0x45, 
	0xdd, 0xc5, 0xe6, 0x05, 0xee, 0x4b, 0xee, 0x91, 
	0xee, 0x4f, 0xee, 0x49, 0xee, 0x95, 0xf7, 0x23, 
	0xee, 0x97, 0xee, 0x05, 0xee, 0x93, 0xee, 0xd9, 
	0xee, 0x4d, 0xee, 0x07, 0xd5, 0x85, 0xac, 0x85, 
	0xa4, 0x45, 0xbd, 0x05, 0x83, 0x83, 0x8b, 0x83, 
	
};

Gfx shopgui_check_ci4_aligner[] = {gsSPEndDisplayList()};
u8 shopgui_check_ci4[] = {
	0x01, 0x11, 0x11, 0x11, 0x11, 0x12, 0x22, 0x23, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x11, 0x11, 0x21, 0x11, 0x22, 0x23, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x11, 0x11, 0x11, 0x11, 0x22, 0x11, 0x11, 0x25, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x11, 0x11, 0x11, 0x11, 0x12, 0x21, 0x11, 0x15, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x11, 0x11, 0x11, 0x11, 0x66, 0x06, 0x11, 0x17, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x11, 0x11, 0x11, 0x11, 0x66, 0x00, 0x11, 0x17, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x11, 0x11, 0x88, 0x11, 0x66, 0x00, 0x00, 0x03, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x11, 0x11, 0x88, 0x88, 0x60, 0x00, 0x00, 0x03, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x21, 0x12, 0x88, 0x88, 0x99, 0x00, 0x00, 0x03, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x21, 0x11, 0x22, 0x22, 0x99, 0x00, 0x00, 0x03, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x21, 0x11, 0x82, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x21, 0x11, 0x11, 0x20, 0x00, 0x00, 0x00, 0x03, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x11, 0x20, 0x00, 0x00, 0x00, 0x03, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x11, 0x12, 0x00, 0x00, 0x00, 0x03, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x11, 0x12, 0x00, 0x00, 0x00, 0x03, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x30, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0x33, 0x03, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x05, 0x55, 0x33, 0x33, 0x33, 0x33, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x01, 0x11, 0x11, 0x11, 0x88, 0x88, 0x88, 0x80, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x56, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x56, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x56, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x56, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x52, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x52, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x52, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x52, 0x11, 0x11, 0x88, 0x11, 0x11, 0x11, 0x10, 
	
};

Gfx shopgui_check_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 shopgui_check_ci4_pal_rgba16[] = {
	0xef, 0x7b, 0xe7, 0x39, 0xef, 0x79, 0xf7, 0xbd, 
	0xff, 0xff, 0xef, 0xbb, 0xe7, 0x79, 0xf7, 0x7b, 
	0xef, 0x39, 0xef, 0x3b, 0xf7, 0xbb, 
};

Vtx shopgui_Plane_001_mesh_vtx_0[68] = {
	{{{-13, 13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{13, 13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{16, 16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-16, 16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{13, -13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-13, -13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-16, -16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{16, -16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-13, -13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-13, 13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-16, 16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-16, -16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{13, 13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{13, -13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{16, -16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{16, 16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{35, 13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{61, 13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{64, 16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{32, 16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{61, -13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{35, -13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{32, -16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{64, -16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{35, -13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{35, 13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{32, 16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{32, -16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{61, 13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{61, -13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{64, -16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{64, 16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-61, 13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-35, 13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-32, 16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-64, 16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-35, -13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-61, -13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-64, -16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-32, -16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-61, -13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-61, 13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-64, 16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-64, -16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-35, 13, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-35, -13, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-32, -16, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-32, 16, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-79, 25, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{79, 25, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{86, 32, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-86, 32, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{79, -79, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-79, -79, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-86, -86, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{86, -86, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-86, -86, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-79, -79, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-79, -16, -5},0, {-16, 605},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-86, 32, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-79, 25, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{86, 32, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{79, 25, -5},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{79, -16, -5},0, {-16, 387},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{79, -16, -5},0, {-16, 387},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{86, -86, -5},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{86, 32, -5},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{79, -79, -5},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx shopgui_Plane_001_mesh_tri_0[] = {
	gsSPVertex(shopgui_Plane_001_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(shopgui_Plane_001_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(shopgui_Plane_001_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(shopgui_Plane_001_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(10, 11, 8, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(shopgui_Plane_001_mesh_vtx_0 + 64, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx shopgui_Plane_001_mesh_vtx_1[34] = {
	{{{-16, -16, -5},0, {-18, 272},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-32, 16, -5},0, {-535, -762},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-32, -16, -5},0, {-535, 272},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-16, 16, -5},0, {-18, -762},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-79, 25, -5},0, {-2061, -1050},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{16, 16, -5},0, {1016, -762},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{79, 25, -5},0, {3059, -1050},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{64, 16, -5},0, {2566, -762},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{32, 16, -5},0, {1532, -762},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{32, -16, -5},0, {1532, 272},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{16, -16, -5},0, {1016, 272},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{79, -79, -5},0, {3059, 2305},{0x49, 0x49, 0x49, 0xFF}}},
	{{{-79, -79, -5},0, {-2061, 2305},{0x49, 0x49, 0x49, 0xFF}}},
	{{{-64, -16, -5},0, {-1569, 272},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-79, -16, -5},0, {-2061, 272},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-64, 16, -5},0, {-1569, -762},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{64, -16, -5},0, {2566, 272},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{32, -16, -5},0, {1532, 272},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{79, -79, -5},0, {3059, 2305},{0x49, 0x49, 0x49, 0xFF}}},
	{{{79, -16, -5},0, {3059, 272},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{64, 16, -5},0, {2566, -762},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{79, 25, -5},0, {3059, -1050},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{61, 13, -5},0, {2479, -675},{0x83, 0x83, 0x83, 0xFF}}},
	{{{35, 13, -5},0, {1620, -675},{0x83, 0x83, 0x83, 0xFF}}},
	{{{35, -13, -5},0, {1620, 185},{0x83, 0x83, 0x83, 0xFF}}},
	{{{61, -13, -5},0, {2479, 185},{0x86, 0x86, 0x86, 0xFF}}},
	{{{13, 13, -5},0, {928, -675},{0x83, 0x83, 0x83, 0xFF}}},
	{{{-13, 13, -5},0, {69, -675},{0x83, 0x83, 0x83, 0xFF}}},
	{{{-13, -13, -5},0, {69, 185},{0x83, 0x83, 0x83, 0xFF}}},
	{{{13, -13, -5},0, {928, 185},{0x83, 0x83, 0x83, 0xFF}}},
	{{{-35, 13, -5},0, {-622, -675},{0x83, 0x83, 0x83, 0xFF}}},
	{{{-61, 13, -5},0, {-1482, -675},{0x83, 0x83, 0x83, 0xFF}}},
	{{{-61, -13, -5},0, {-1482, 185},{0x83, 0x83, 0x83, 0xFF}}},
	{{{-35, -13, -5},0, {-622, 185},{0x83, 0x83, 0x83, 0xFF}}},
};

Gfx shopgui_Plane_001_mesh_tri_1[] = {
	gsSPVertex(shopgui_Plane_001_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(5, 9, 8, 0),
	gsSP1Triangle(5, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(0, 11, 10, 0),
	gsSP1Triangle(0, 12, 11, 0),
	gsSP1Triangle(12, 0, 13, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSP1Triangle(15, 4, 14, 0),
	gsSP1Triangle(15, 1, 4, 0),
	gsSPVertex(shopgui_Plane_001_mesh_vtx_1 + 16, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(shopgui_Plane_001_mesh_vtx_1 + 30, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_shopgui_Border[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, shopgui_shopgui_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 23),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, shopgui_shopgui_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(shopgui_Border_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_shopgui_Border[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_shopgui_Check[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, shopgui_check_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 10),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 16, shopgui_check_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 62, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(shopgui_Check_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_shopgui_Check[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx shopgui_Plane_001_mesh[] = {
	gsSPDisplayList(mat_shopgui_Border),
	gsSPDisplayList(shopgui_Plane_001_mesh_tri_0),
	gsSPDisplayList(mat_revert_shopgui_Border),
	gsSPDisplayList(mat_shopgui_Check),
	gsSPDisplayList(shopgui_Plane_001_mesh_tri_1),
	gsSPDisplayList(mat_revert_shopgui_Check),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};
