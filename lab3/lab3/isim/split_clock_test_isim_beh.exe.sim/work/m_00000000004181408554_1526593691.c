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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/School/UCLA/Junior/Fall 2016/m152a/lab3/lab3/split_clock.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {100000000, 0};
static int ng4[] = {50000000, 0};
static int ng5[] = {20000000, 0};
static int ng6[] = {2000000, 0};



static void Always_40_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2860);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);

LAB10:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 27, t5, 32);
    t11 = (t0 + 1288);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 27);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 27, t5, 32);
    t11 = (t0 + 1380);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 27);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 27, t5, 32);
    t11 = (t0 + 1472);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 27);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 27, t5, 32);
    t11 = (t0 + 1564);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 27);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB28;

LAB25:    if (t18 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t13) = 1;

LAB28:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB42;

LAB39:    if (t18 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t13) = 1;

LAB42:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB56;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t13) = 1;

LAB56:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB57;

LAB58:
LAB59:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1288);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 27);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 27);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 27);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 27);
    goto LAB8;

LAB13:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(57, ng0);

LAB18:    xsi_set_current_line(58, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1288);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 27);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t5) == 0)
        goto LAB19;

LAB21:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB22:    t12 = (t13 + 4);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB24;

LAB23:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 1U);
    t22 = (t0 + 920);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 1);
    goto LAB17;

LAB19:    *((unsigned int *)t13) = 1;
    goto LAB22;

LAB24:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB23;

LAB27:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(63, ng0);

LAB32:    xsi_set_current_line(64, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1380);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 27);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB36;

LAB34:    if (*((unsigned int *)t5) == 0)
        goto LAB33;

LAB35:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB36:    t12 = (t13 + 4);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB38;

LAB37:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 1U);
    t22 = (t0 + 1012);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 1);
    goto LAB31;

LAB33:    *((unsigned int *)t13) = 1;
    goto LAB36;

LAB38:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB37;

LAB41:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(69, ng0);

LAB46:    xsi_set_current_line(70, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1472);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 27);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t5) == 0)
        goto LAB47;

LAB49:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB50:    t12 = (t13 + 4);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB52;

LAB51:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 1U);
    t22 = (t0 + 1104);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 1);
    goto LAB45;

LAB47:    *((unsigned int *)t13) = 1;
    goto LAB50;

LAB52:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB51;

LAB55:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(75, ng0);

LAB60:    xsi_set_current_line(76, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1564);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 27);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB64;

LAB62:    if (*((unsigned int *)t5) == 0)
        goto LAB61;

LAB63:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB64:    t12 = (t13 + 4);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB66;

LAB65:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 1U);
    t22 = (t0 + 1196);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 1);
    goto LAB59;

LAB61:    *((unsigned int *)t13) = 1;
    goto LAB64;

LAB66:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB65;

}

static void Cont_82_1(char *t0)
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

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2900);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans_delayed(t5, 0, 0, 0LL, 0);
    t18 = (t0 + 2868);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_83_2(char *t0)
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

LAB0:    t1 = (t0 + 2376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2900);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans_delayed(t5, 0, 0, 0LL, 0);
    t18 = (t0 + 2876);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_84_3(char *t0)
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

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2900);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans_delayed(t5, 0, 0, 0LL, 0);
    t18 = (t0 + 2884);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_85_4(char *t0)
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

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2900);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans_delayed(t5, 0, 0, 0LL, 0);
    t18 = (t0 + 2892);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000004181408554_1526593691_init()
{
	static char *pe[] = {(void *)Always_40_0,(void *)Cont_82_1,(void *)Cont_83_2,(void *)Cont_84_3,(void *)Cont_85_4};
	xsi_register_didat("work_m_00000000004181408554_1526593691", "isim/split_clock_test_isim_beh.exe.sim/work/m_00000000004181408554_1526593691.didat");
	xsi_register_executes(pe);
}
