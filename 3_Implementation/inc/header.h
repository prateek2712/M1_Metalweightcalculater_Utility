/**
 * @file header.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef HEADER_H


#define HEADER_H
float convertmm(char *unit, float value)
{

    if (unit == "cm")
        return value * 10;
    else if (unit == "m")
        return value * 1000;
    else if (unit == "in")
        return value * 25.4;
    else if (unit == "ft")
        return value * 25.4 * 12;
    else
        return value;
}

float metal_dens(char *m_t)
{
    if (*m_t == 'M' || *m_t == 'm')
        return 7850;
    if (*m_t == 'C' || *m_t == 'c')
        return 7200;
    if (*m_t == 'A' || *m_t == 'a')
        return 2700;
    return 0;
}






#endif // HEADER_H