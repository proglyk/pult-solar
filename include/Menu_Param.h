#ifndef _MENU_PARAM_H_
#define _MENU_PARAM_H_

//1. Панели
//1.1 Кол-во панелей послед. 	//Число U16
//1.2 Кол-во панелей парал.		//Число U16
//1.3 Ток К.З.					//Число U16
//1.4 Напряж Х.Х.				//Число U16
//1.5 Ток МPP					//Число U16
//1.6 Напряж МPP				//Число U16

//2. Аккум.
//2.1 Тип
//2.2 Емкость
//2.3 Напряж. цикл.
//2.4 Напряж. буф
//2.5 Напряж. разряд
//2.6 Ток заряда макс.
//2.7 Ток заряда буф.
//2.8 темп.коэф. ячейки
//2.9 
//2.10

#define UNK 0

//2.1 Тип
typedef enum{
	BAT_TYPE = UNK,
	BAT_TYPE_LEAD_ACID,
	BAT_TYPE_GEL_AGM,
	BAT_TYPE_LIION_37,
	BAT_TYPE_LIION_39
} BatType_t;

#endif