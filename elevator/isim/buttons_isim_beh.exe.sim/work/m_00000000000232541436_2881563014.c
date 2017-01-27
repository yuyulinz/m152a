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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Leon/Downloads/elevator/floor_buttons.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};



static void Always_32_0(char *t0)
{
    char t6[8];
    char t17[8];
    char t26[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    int t57;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1928);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t18) = t25;
    memset(t26, 0, 8);
    t27 = (t6 + 4);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t17);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB7;

LAB6:    if (t38 != 0)
        goto LAB8;

LAB9:    t42 = (t26 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t16 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 1);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 1);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    memset(t26, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t17);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t19);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB19;

LAB18:    if (t38 != 0)
        goto LAB20;

LAB21:    t28 = (t26 + 4);
    t43 = *((unsigned int *)t28);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t16 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 2);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 2);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    memset(t26, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t17);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t19);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB31;

LAB30:    if (t38 != 0)
        goto LAB32;

LAB33:    t28 = (t26 + 4);
    t43 = *((unsigned int *)t28);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t16 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 3);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 3);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    memset(t26, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t17);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t19);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB43;

LAB42:    if (t38 != 0)
        goto LAB44;

LAB45:    t28 = (t26 + 4);
    t43 = *((unsigned int *)t28);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t16 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 4);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 4);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    memset(t26, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t17);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t19);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB55;

LAB54:    if (t38 != 0)
        goto LAB56;

LAB57:    t28 = (t26 + 4);
    t43 = *((unsigned int *)t28);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t16 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 5);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 5);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    memset(t26, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t17);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t19);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB67;

LAB66:    if (t38 != 0)
        goto LAB68;

LAB69:    t28 = (t26 + 4);
    t43 = *((unsigned int *)t28);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB70;

LAB71:
LAB72:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t16 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 6);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 6);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    memset(t26, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t17);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t19);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB79;

LAB78:    if (t38 != 0)
        goto LAB80;

LAB81:    t28 = (t26 + 4);
    t43 = *((unsigned int *)t28);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB82;

LAB83:
LAB84:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t16 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 7);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 7);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    memset(t26, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t17);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t19);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB91;

LAB90:    if (t38 != 0)
        goto LAB92;

LAB93:    t28 = (t26 + 4);
    t43 = *((unsigned int *)t28);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB94;

LAB95:
LAB96:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t15 = (t0 + 1368U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t16, 3, 2);
    t15 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t18 = (t6 + 4);
    t19 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t19);
    t13 = (t11 ^ t12);
    t20 = (t10 | t13);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB105;

LAB102:    if (t23 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t17) = 1;

LAB105:    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t17);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB106;

LAB107:
LAB108:    goto LAB2;

LAB7:    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB8:    t41 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);

LAB13:    xsi_set_current_line(36, ng0);
    t48 = ((char*)((ng1)));
    t49 = (t0 + 2088);
    t51 = (t0 + 2088);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t50, t53, 2, t54, 32, 1);
    t55 = (t50 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    if (t57 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t17, t15, 2, t16, 32, 1);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t57 = (!(t20));
    if (t57 == 1)
        goto LAB16;

LAB17:    goto LAB12;

LAB14:    xsi_vlogvar_assign_value(t49, t48, 0, *((unsigned int *)t50), 1);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB17;

LAB19:    *((unsigned int *)t26) = 1;
    goto LAB21;

LAB20:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(41, ng0);

LAB25:    xsi_set_current_line(42, ng0);
    t41 = ((char*)((ng1)));
    t42 = (t0 + 2088);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (!(t56));
    if (t57 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t17, t15, 2, t16, 32, 1);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t57 = (!(t20));
    if (t57 == 1)
        goto LAB28;

LAB29:    goto LAB24;

LAB26:    xsi_vlogvar_assign_value(t42, t41, 0, *((unsigned int *)t50), 1);
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB29;

LAB31:    *((unsigned int *)t26) = 1;
    goto LAB33;

LAB32:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(47, ng0);

LAB37:    xsi_set_current_line(48, ng0);
    t41 = ((char*)((ng1)));
    t42 = (t0 + 2088);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (!(t56));
    if (t57 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t17, t15, 2, t16, 32, 1);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t57 = (!(t20));
    if (t57 == 1)
        goto LAB40;

LAB41:    goto LAB36;

LAB38:    xsi_vlogvar_assign_value(t42, t41, 0, *((unsigned int *)t50), 1);
    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB41;

LAB43:    *((unsigned int *)t26) = 1;
    goto LAB45;

LAB44:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(53, ng0);

LAB49:    xsi_set_current_line(54, ng0);
    t41 = ((char*)((ng1)));
    t42 = (t0 + 2088);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (!(t56));
    if (t57 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t17, t15, 2, t16, 32, 1);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t57 = (!(t20));
    if (t57 == 1)
        goto LAB52;

LAB53:    goto LAB48;

LAB50:    xsi_vlogvar_assign_value(t42, t41, 0, *((unsigned int *)t50), 1);
    goto LAB51;

LAB52:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB53;

LAB55:    *((unsigned int *)t26) = 1;
    goto LAB57;

LAB56:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(59, ng0);

LAB61:    xsi_set_current_line(60, ng0);
    t41 = ((char*)((ng1)));
    t42 = (t0 + 2088);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (!(t56));
    if (t57 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t17, t15, 2, t16, 32, 1);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t57 = (!(t20));
    if (t57 == 1)
        goto LAB64;

LAB65:    goto LAB60;

LAB62:    xsi_vlogvar_assign_value(t42, t41, 0, *((unsigned int *)t50), 1);
    goto LAB63;

LAB64:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB65;

LAB67:    *((unsigned int *)t26) = 1;
    goto LAB69;

LAB68:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(65, ng0);

LAB73:    xsi_set_current_line(66, ng0);
    t41 = ((char*)((ng1)));
    t42 = (t0 + 2088);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (!(t56));
    if (t57 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t17, t15, 2, t16, 32, 1);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t57 = (!(t20));
    if (t57 == 1)
        goto LAB76;

LAB77:    goto LAB72;

LAB74:    xsi_vlogvar_assign_value(t42, t41, 0, *((unsigned int *)t50), 1);
    goto LAB75;

LAB76:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB77;

LAB79:    *((unsigned int *)t26) = 1;
    goto LAB81;

LAB80:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(71, ng0);

LAB85:    xsi_set_current_line(72, ng0);
    t41 = ((char*)((ng1)));
    t42 = (t0 + 2088);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (!(t56));
    if (t57 == 1)
        goto LAB86;

LAB87:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t17, t15, 2, t16, 32, 1);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t57 = (!(t20));
    if (t57 == 1)
        goto LAB88;

LAB89:    goto LAB84;

LAB86:    xsi_vlogvar_assign_value(t42, t41, 0, *((unsigned int *)t50), 1);
    goto LAB87;

LAB88:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB89;

LAB91:    *((unsigned int *)t26) = 1;
    goto LAB93;

LAB92:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(77, ng0);

LAB97:    xsi_set_current_line(78, ng0);
    t41 = ((char*)((ng1)));
    t42 = (t0 + 2088);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (!(t56));
    if (t57 == 1)
        goto LAB98;

LAB99:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t14 = (t7 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t17, t15, 2, t16, 32, 1);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t57 = (!(t20));
    if (t57 == 1)
        goto LAB100;

LAB101:    goto LAB96;

LAB98:    xsi_vlogvar_assign_value(t42, t41, 0, *((unsigned int *)t50), 1);
    goto LAB99;

LAB100:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB101;

LAB104:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(83, ng0);

LAB109:    xsi_set_current_line(84, ng0);
    t41 = ((char*)((ng2)));
    t42 = (t0 + 2088);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t51 = *((char **)t49);
    t52 = (t0 + 1368U);
    t53 = *((char **)t52);
    xsi_vlog_generic_convert_bit_index(t26, t51, 2, t53, 3, 2);
    t52 = (t26 + 4);
    t34 = *((unsigned int *)t52);
    t57 = (!(t34));
    if (t57 == 1)
        goto LAB110;

LAB111:    goto LAB108;

LAB110:    xsi_vlogvar_assign_value(t42, t41, 0, *((unsigned int *)t26), 1);
    goto LAB111;

}

static void Cont_88_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3672);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 3592);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000232541436_2881563014_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)Cont_88_1};
	xsi_register_didat("work_m_00000000000232541436_2881563014", "isim/buttons_isim_beh.exe.sim/work/m_00000000000232541436_2881563014.didat");
	xsi_register_executes(pe);
}
