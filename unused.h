/* SPDX-License-Identifier: 0BSD */
/* Copyright 2022 Alexander Kozhevnikov <mentalisttraceur@gmail.com> */

#ifndef UNUSED_H
#define UNUSED_H

#ifdef __KEIL__
#define UNUSED(variable) ((void)((variable)=(variable)))
#else
#define UNUSED(variable) ((void)(variable))
#endif

#endif /* UNUSED_H */
