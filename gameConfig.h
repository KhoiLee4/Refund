#pragma once

// kich thuoc mang hinh
#define screenWidth 1440
#define screenHight 810

// mau sac
//#define den sf::Color(0, 0, 0)
//#define trang sf::Color(255, 255, 255)
//#define xanh sf::Color(120, 160, 195)

// thanh tieng on
#define noiseWidth 1000
#define noiseHight 30
#define noiseX (screenWidth - noiseWidth) / 2
#define noiseY 20

// do tai vi tri lay
#define carX 110
#define carY screenHight / 2 - 320
#define itemX carX + 130
#define itemY carY + 320

// map
#define mapX -800
#define mapY -1755


// do tai vi tri tra
#define locationX_01 1692 + mapX
#define locationY_01 1870 + mapY

#define locationX_02 2102 + mapX
#define locationY_02 2240 + mapY

#define locationX_03 2482 + mapX
#define locationY_03 1810 + mapY

#define locationX_04 2452 + mapX
#define locationY_04 2500 + mapY

#define locationX_05 2872 + mapX
#define locationY_05 2480 + mapY


#define itemLocationX_01 locationX_01 + 48 - 25
#define itemLocationY_01 locationY_01 + 45 - 24

#define itemLocationX_02 locationX_02 + 48 - 25
#define itemLocationY_02 locationY_02 + 45 - 21

#define itemLocationX_03 locationX_03 + 48 - 28
#define itemLocationY_03 locationY_03 + 45 - 20

#define itemLocationX_04 locationX_04 + 48 - 21
#define itemLocationY_04 locationY_04 + 45 - 35

#define itemLocationX_05 locationX_05 + 48 - 23
#define itemLocationY_05 locationY_05 + 45 - 35



// do tren tay nhan vat



// xac nhan da tra do
#define doneX_01 locationX_01 + 48 - 22
#define doneY_01 locationY_01 + 45 - 22

#define doneX_02 locationX_02 + 48 - 22
#define doneY_02 locationY_02 + 45 - 22

#define doneX_03 locationX_03 + 48 - 22
#define doneY_03 locationY_03 + 45 - 22

#define doneX_04 locationX_04 + 48 - 22
#define doneY_04 locationY_04 + 45 - 22

#define doneX_05 locationX_05 + 48 - 22
#define doneY_05 locationY_05 + 45 - 22


// nhan vat chu nha
#define hostX 2040 + mapX
#define hostY 2640 + mapY


// nhan vat trom
#define thiefX 600
#define thiefY 365

// ky luc
#define col 400
#define row 45
#define rowDef 170
#define sizetext 40

// hack
#define WIN 0
#define LOSE 0



