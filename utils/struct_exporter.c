/*
** EPITECH PROJECT, 2023
** struct_exporter.c
** File description:
** Structure exporter for printf
*/

#include "my_struct.h"

printf_flags *flags_exporter(void)
{
    static printf_flags FLAGS[] = {{'d', &my_d_flag},
    {'i', &my_i_flag}, {'s', &my_s_flag}, {'c', &my_c_flag},
    {'%', &my_modulo_flag}, {'o', &my_o_flag}, {'u', &my_u_flag},
    {'x', &my_x_flag}, {'X', &my_X_flag}, {'e', &my_E_flag},
    {'f', &my_f_flag}, {'F', &my_F_flag}, {'g', &my_g_flag},
    {'G', &my_G_flag}, {'a', &my_a_flag}, {'A', &my_A_flag},
    {'p', &my_p_flag}, {'n', &my_n_flag}, {'m', &my_m_flag},
    {'E', &my_E_flag}, {0, NULL}};

    return FLAGS;
}

printf_len_modifier *len_modifier_exporter(void)
{
    static printf_len_modifier MODIFIERS[] = {{"hh", &my_hh_mod},
    {"h", &my_h_mod}, {"l", &my_l_mod}, {"ll", &my_ll_mod},
    {"q", &my_q_mod}, {"L", &my_L_mod}, {"j", &my_j_mod},
    {"z", &my_z_mod}, {"Z", &my_Z_mod}, {"t", &my_t_mod},
    {0, NULL}};

    return MODIFIERS;
}

printf_char_flags *char_flags_exporter(void)
{
    static printf_char_flags CHAR_FLAGS[] = {{'#', &my_hashtag_cflag},
    {'0', &my_zero_cflag}, {'-', &my_minus_cflag},
    {' ', &my_space_cflag}, {'+', &my_plus_cflag},
    {'\'', &my_apostrophe_cflag}, {'I', &my_I_cflag},
    {0, NULL}};

    return CHAR_FLAGS;
}
