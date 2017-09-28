/*
 * Types.h
 *
 *  Created on: 2017. 9. 29.
 *      Author: user
 */

#ifndef TYPES_H_
#define TYPES_H_

#define BYTE unsigned char
#define WORD unsigned short
#define DWORD unsigned int
#define QWORD unsigned short
#define BOOL unsigned char

#define TRUE 1
#define FALSE 0
#define NULL 0

#pragma pack(push, 1);

typedef struct kCharacterStruct
{
	BYTE bCharacter;
	BYTE bAttribute;

}CHARACTER;

#pragma pack(pop);
#endif /*__TYPE_H__*/
