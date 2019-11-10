const uint8_t temp[] PROGMEM = {
   0x01, 0x80, 0x02, 0x40, 0x02, 0x40, 0x02, 0x40, 0x02, 0x40, 0x02, 0x40, 0x03, 0xc0, 0x03, 0xc0, 
   0x03, 0xc0, 0x05, 0xa0, 0x0b, 0xd0, 0x0b, 0xd0, 0x0b, 0xd0, 0x0b, 0xd0, 0x04, 0x20, 0x03, 0xc0
};

const uint8_t flash[] PROGMEM = {
   0x01, 0xf0, 0x01, 0xf0, 0x03, 0xe0, 0x03, 0xc0, 0x07, 0xc0, 0x07, 0xf0, 0x0f, 0xf0, 0x0f, 0xe0, 
   0x0b, 0xc0, 0x03, 0x80, 0x03, 0x80, 0x07, 0x00, 0x06, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00 
};

const uint8_t chip[] PROGMEM = {
   0x02, 0x40, 0x02, 0x40, 0x02, 0x40, 0x1f, 0xf8, 0x10, 0x08, 0x10, 0x08, 0xf3, 0xcf, 0x12, 0x48, 
   0x12, 0x48, 0xf3, 0xcf, 0x10, 0x08, 0x10, 0x08, 0x1f, 0xf8, 0x02, 0x40, 0x02, 0x40, 0x02, 0x40  
};

const uint8_t usage[] PROGMEM = {
   0x00, 0x00, 0x3f, 0xfc, 0x20, 0x04, 0x20, 0x04, 0x20, 0x04, 0x2f, 0xf4, 0x20, 0x04, 0x2f, 0xf4, 
   0x2f, 0xf4, 0x20, 0x04, 0x2f, 0xf4, 0x2f, 0xf4, 0x2f, 0xf4, 0x20, 0x04, 0x3f, 0xfc, 0x00, 0x00  
};

const uint8_t fan[] PROGMEM = {
   0x7f, 0xfe, 0xf8, 0x1f, 0xf3, 0x8f, 0xe3, 0x87, 0xd3, 0x1b, 0xb9, 0xfd, 0xbf, 0xe1, 0x8e, 0x41, 
   0x82, 0x71, 0x87, 0xfd, 0xbf, 0x9d, 0xd8, 0xcb, 0xe1, 0xc7, 0xf1, 0xcf, 0xf8, 0x1f, 0x7f, 0xfe  
};
