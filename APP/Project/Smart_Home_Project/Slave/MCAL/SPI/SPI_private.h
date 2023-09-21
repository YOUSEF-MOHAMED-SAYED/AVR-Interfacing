/*
 * SPI_private.h
 *
 *  Created on: Aug 24, 2023
 *      Author: lenovo
 */

#ifndef MCAL_SPI_SPI_PRIVATE_H_
#define MCAL_SPI_SPI_PRIVATE_H_

#define   SPDR     (*((volatile u8 *) 0x2F))
#define   SPSR     (*((volatile u8 *) 0x2E))
#define   SPCR     (*((volatile u8 *) 0x2D))

/* SPCR bits */
#define  SPCR_SPIE    7
#define  SPCR_SPE     6
#define  SPCR_DORD    5
#define  SPCR_MSTR    4
#define  SPCR_CPOL    3
#define  SPCR_CPHA    2
#define  SPCR_SPR1    1
#define  SPCR_SPR0    0

/* SPSR bits */
#define  SPSR_SPIF    7
#define  SPSR_WCOL    6
#define  SPSR_SPI2X   0

#endif /* MCAL_SPI_SPI_PRIVATE_H_ */
