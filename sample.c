/**
 * @file   sample.c
 * @brief  GCC Test sample program
 * @author T.Yokobayashi de JR4QPV
 * @date   2020/04/16
 */

#include <stdlib.h>
#include <stdio.h>

/**
 *****************************************************************************
 * @brief  Sample main program
 * @param[in] argc 引数の個数
 * @param[in] argv 引数文字列
 * @return 終了コード
 * @details
 *****************************************************************************
 */
int main(int argc, char *argv[])
{
	int i;

	for (i=0; i<5; i++) {
		printf("%d: test\n", i);
	}

	exit(0);
}

/**
 *----------------------------------------------------------------------------
 * @file   main.c
 * History
 * -------
 * - 2018/11/04 New created.(By T.Yokobayashi)
 * - 2020/04/16 Write a Doxygen comment.
 */
