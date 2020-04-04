#ifndef PCD8544_FONT16X24
#define PCD8544_FONT16X24
#include <stdint.h>
// Big numbers from 0 to 1 only
static uint8_t fontDetermination[10][44] = {
    // char 0
    {
        0b00000000,
        0b11110000,
        0b11110000,
        0b11111100,
        0b11111100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b11001100,
        0b11001100,
        0b11111100,
        0b11111100,
        0b11110000,
        0b11110000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111000,
        0b11111000,
        0b00011000,
        0b00011111,
        0b00011111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00001111,
        0b00001111,
        0b00111111,
        0b00111111,
        0b00110011,
        0b00110011,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00111111,
        0b00111111,
        0b00001111,
        0b00001111,
        0b00000000,
        0b00000000},
    // char 1
    {
        0b00000000,
        0b01100000,
        0b01100000,
        0b01100000,
        0b01100000,
        0b11111100,
        0b11111100,
        0b11111100,
        0b11111100,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00111111,
        0b00111111,
        0b00111111,
        0b00111111,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00000000,
        0b00000000,
        0b00000000},
    // char 2
    {
        0b00000000,
        0b11100000,
        0b11100000,
        0b11111100,
        0b11111100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b11111100,
        0b11111100,
        0b11100000,
        0b11100000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000001,
        0b00000001,
        0b10000001,
        0b10000001,
        0b11100000,
        0b11100000,
        0b01100000,
        0b01111000,
        0b00011000,
        0b00011111,
        0b00011111,
        0b00000111,
        0b00000111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00111100,
        0b00111100,
        0b00111111,
        0b00111111,
        0b00110001,
        0b00110001,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00000000,
        0b00000000},
    // char 3
    {
        0b00000000,
        0b11100000,
        0b11100000,
        0b11111100,
        0b11111100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b11111100,
        0b11111100,
        0b11100000,
        0b11100000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00011000,
        0b11111111,
        0b11111111,
        0b11100111,
        0b11100111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00001111,
        0b00001111,
        0b00111111,
        0b00111111,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00111111,
        0b00111111,
        0b00001111,
        0b00001111,
        0b00000000,
        0b00000000},
    // char 4
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b10000000,
        0b10000000,
        0b11100000,
        0b11100000,
        0b11100000,
        0b11111100,
        0b11111100,
        0b11111100,
        0b11111100,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11111000,
        0b11111000,
        0b11111110,
        0b11111110,
        0b00000111,
        0b00000111,
        0b00000001,
        0b00000001,
        0b00000001,
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00111111,
        0b00111111,
        0b00111111,
        0b00111111,
        0b00000000,
        0b00000000},
    // char 5
    {
        0b00000000,
        0b11111100,
        0b11111100,
        0b11111100,
        0b11111100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00011111,
        0b00011111,
        0b00011111,
        0b00011111,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00011000,
        0b11111000,
        0b11111000,
        0b11100000,
        0b11100000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00001111,
        0b00001111,
        0b00111111,
        0b00111111,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00111111,
        0b00111111,
        0b00001111,
        0b00001111,
        0b00000000,
        0b00000000},
    // char 6
    {
        0b00000000,
        0b10000000,
        0b10000000,
        0b11100000,
        0b11100000,
        0b01100000,
        0b01101100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00011000,
        0b11111000,
        0b11111000,
        0b11100000,
        0b11100000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00001111,
        0b00001111,
        0b00111111,
        0b00111111,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00111111,
        0b00111111,
        0b00001111,
        0b00001111,
        0b00000000,
        0b00000000},
    // char 7
    {
        0b00000000,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b11111100,
        0b11111100,
        0b11111100,
        0b11111100,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11100000,
        0b11100000,
        0b11111111,
        0b11111111,
        0b00011111,
        0b00011111,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00111111,
        0b00111111,
        0b00111111,
        0b00111111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000},
    // char 8
    {
        0b00000000,
        0b11110000,
        0b11110000,
        0b11111100,
        0b11111100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b11111100,
        0b11111100,
        0b11110000,
        0b11110000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11100111,
        0b11100111,
        0b11111111,
        0b11111111,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00011000,
        0b11111111,
        0b11111111,
        0b11100111,
        0b11100111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00001111,
        0b00001111,
        0b00111111,
        0b00111111,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00111111,
        0b00111111,
        0b00001111,
        0b00001111,
        0b00000000,
        0b00000000},
    //char 9
    {
        0b00000000,
        0b11110000,
        0b11110000,
        0b11110000,
        0b11111100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b00001100,
        0b11111100,
        0b11111100,
        0b11110000,
        0b11110000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000111,
        0b00000111,
        0b00000111,
        0b00011111,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00011000,
        0b00011000,
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00110000,
        0b00111100,
        0b00111100,
        0b00001111,
        0b00001111,
        0b00000011,
        0b00000011,
        0b00000000,
        0b00000000}};

#endif /* PCD8544_FONT16X24 */
