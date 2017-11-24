/*
 * main.h
 *
 *  Created on: 24 oct. 2017
 *      Author: MicruX 06
 */

#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/


/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void _Error_Handler(char *, int);


#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */

/**
  * @}
*/

#endif /* __MAIN_H */
