/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001044697384_1733832700_init();
    work_m_00000000001948808931_0886308060_init();
    work_m_00000000000469561583_0045532000_init();
    work_m_00000000002427189821_2857005792_init();
    work_m_00000000001146483190_0345418465_init();
    work_m_00000000000015061855_1668905219_init();
    work_m_00000000002336688605_1938225339_init();
    work_m_00000000002427189821_0992571530_init();
    work_m_00000000003239216842_1723813368_init();
    work_m_00000000001840721256_3306708044_init();
    work_m_00000000002457413359_3093772975_init();
    work_m_00000000002457413359_3813519319_init();
    work_m_00000000000967594145_0103510313_init();
    work_m_00000000000283580182_2932280914_init();
    work_m_00000000000283580182_0833632742_init();
    work_m_00000000002048119383_2866095323_init();
    work_m_00000000001006868592_4024466370_init();
    work_m_00000000000469561583_2461264495_init();
    work_m_00000000001569375168_1545542492_init();
    work_m_00000000000487468317_2520395732_init();
    work_m_00000000002300481314_3143792024_init();
    work_m_00000000003400584253_0116314407_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003400584253_0116314407");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}