/* SPDX-License-Identifier: 0BSD */
/* Copyright 2022 Alexander Kozhevnikov <mentalisttraceur@gmail.com> */

#ifdef __KEIL__
#define UNUSED(variable) ((void)((variable)=(variable)))
#else
#define UNUSED(variable) ((void)(variable))
#endif
